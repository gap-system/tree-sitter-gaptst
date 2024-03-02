module.exports = grammar({
  name: 'GAPtst',

  inline: $ => [
    $._statement
  ],

  externals: $ => [
    $.test_case_input_line,
    // Note, `test_case_output` can match the empty string 
    $.test_case_output,
  ],

  rules: {
    test_file: $ => seq(
      repeat(choice(
        $.test_case,
        $._statement
      )),
      repeat($.comment),
    ),

    _statement: $ => seq(
      repeat($.comment),
      choice(
        $.local_statement,
        $.exec_statement,
        $.if_statement,
      )
    ),

    if_statement: $ => seq(
      '#@if',
      field('condition', $.gap_expression),
      repeat($.test_case),
      repeat($.comment),
      optional($.else_clause),
      '#@fi',
      '\n'
    ),

    else_clause: $ => seq(
      '#@else',
      '\n',
      repeat($.test_case),
      repeat($.comment),
    ),

    local_statement: $ => seq(
      '#@local',
      $.gap_expression
    ),

    exec_statement: $ => seq(
      '#@exec',
      $.gap_expression
    ),

    test_case: $ => seq(
      repeat($.comment),
      $.test_case_input,
      $.test_case_output,
    ),

    test_case_input: $ => seq(
      'gap> ',
      $.test_case_input_line,
      repeat(seq(
        '> ',
        $.test_case_input_line,
      )),
    ),

    comment: _ => choice(
      /#\n|#[^@\n].*?\n/,
      seq(/#|#[^@\n].*?/, '\0')
    ),
    gap_expression: _ => choice(
      /[^\n]*?\n/,
      seq(/[^\n]*?/, '\0'),
    )
  }
});
