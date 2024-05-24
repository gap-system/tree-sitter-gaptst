module.exports = grammar({
  name: "gaptst",

  inline: ($) => [$._statement],

  externals: ($) => [$.output_line],

  rules: {
    test_file: ($) => repeat(choice($.comment, $.test_case, $._statement)),

    _statement: ($) =>
      choice($.local_statement, $.exec_statement, $.if_statement),

    if_statement: ($) =>
      seq(
        "#@if",
        field("condition", $.gap_expression),
        repeat(choice($.comment, $.test_case)),
        optional($.else_clause),
        "#@fi",
        "\n",
      ),

    else_clause: ($) =>
      seq("#@else", "\n", repeat(choice($.comment, $.test_case))),

    local_statement: ($) => seq("#@local", $.gap_expression),

    exec_statement: ($) => seq("#@exec", $.gap_expression),

    test_case: ($) =>
      seq(
        "gap> ",
        alias($.gap_expression, $.input_line),
        repeat(
          choice(
            seq("> ", alias($.gap_expression, $.input_line)),
            $.output_line,
          ),
        ),
      ),

    comment: (_) => /\n?#([^@\n].*)?\n*/,
    gap_expression: (_) => /[^\n]*?\n?/,
  },
});
