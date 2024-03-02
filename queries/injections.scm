([
  (comment)
  (gap_expression)
  ] @injection.content
 (#set! injection.language "GAP"))

((test_case_input_line) @injection.content
 (#set! injection.language "GAP")
 (#set! injection.combined))
