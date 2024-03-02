module.exports = grammar({
  name: 'GAPtst',

  externals: $ => [
    $.test_case_input,
    // Note, `test_case_output` can match the empty string 
    $.test_case_output,
  ],

  rules: {
    test_file: $ => seq(
      $.test_case,
      repeat(seq(
        $.test_case,
      )),
      repeat($.comment),
    ),

    test_case: $ => seq(
      repeat($.comment),
      $.gap_prompt,
      $.test_case_input,
      $.test_case_output,
    ),

    gap_prompt: _ => 'gap> ',
    comment: _ => /#\n|#[^@\n].*?\n/,
  }
});
