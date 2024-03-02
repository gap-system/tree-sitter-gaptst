module.exports = grammar({
  name: 'GAPtst',

  inline: $ => [
    $._statement
  ],

  externals: $ => [
    $.test_case_input,
    // Note, `test_case_output` can match the empty string 
    $.test_case_output,
  ],

  rules: {
    test_file: $ => seq(
      repeat1(choice(
        $.test_case,
        $._statement
      )),
      repeat($.comment),
    ),

    _statement: $ => seq(
      repeat($.comment),
      choice(
        $.local_statement,
      )
    ),

    local_statement: $ => seq(
      '#@local',
      $.gap_expression
    ),

    test_case: $ => seq(
      repeat($.comment),
      $.gap_prompt,
      $.test_case_input,
      $.test_case_output,
    ),

    gap_prompt: _ => 'gap> ',
    comment: _ => /#\n|#[^@\n].*?\n/,
    gap_expression: _ => /.*?\n/,
  }
});
