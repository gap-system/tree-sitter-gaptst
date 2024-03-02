#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_POUND_ATif = 1,
  anon_sym_POUND_ATfi = 2,
  anon_sym_LF = 3,
  anon_sym_POUND_ATelse = 4,
  anon_sym_POUND_ATlocal = 5,
  sym_gap_prompt = 6,
  sym_comment = 7,
  sym_gap_expression = 8,
  sym_test_case_input = 9,
  sym_test_case_output = 10,
  sym_test_file = 11,
  sym_if_statement = 12,
  sym_else_clause = 13,
  sym_local_statement = 14,
  sym_test_case = 15,
  aux_sym_test_file_repeat1 = 16,
  aux_sym_test_file_repeat2 = 17,
  aux_sym_if_statement_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_ATif] = "#@if",
  [anon_sym_POUND_ATfi] = "#@fi",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND_ATelse] = "#@else",
  [anon_sym_POUND_ATlocal] = "#@local",
  [sym_gap_prompt] = "gap_prompt",
  [sym_comment] = "comment",
  [sym_gap_expression] = "gap_expression",
  [sym_test_case_input] = "test_case_input",
  [sym_test_case_output] = "test_case_output",
  [sym_test_file] = "test_file",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_local_statement] = "local_statement",
  [sym_test_case] = "test_case",
  [aux_sym_test_file_repeat1] = "test_file_repeat1",
  [aux_sym_test_file_repeat2] = "test_file_repeat2",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUND_ATif] = anon_sym_POUND_ATif,
  [anon_sym_POUND_ATfi] = anon_sym_POUND_ATfi,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND_ATelse] = anon_sym_POUND_ATelse,
  [anon_sym_POUND_ATlocal] = anon_sym_POUND_ATlocal,
  [sym_gap_prompt] = sym_gap_prompt,
  [sym_comment] = sym_comment,
  [sym_gap_expression] = sym_gap_expression,
  [sym_test_case_input] = sym_test_case_input,
  [sym_test_case_output] = sym_test_case_output,
  [sym_test_file] = sym_test_file,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_local_statement] = sym_local_statement,
  [sym_test_case] = sym_test_case,
  [aux_sym_test_file_repeat1] = aux_sym_test_file_repeat1,
  [aux_sym_test_file_repeat2] = aux_sym_test_file_repeat2,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_ATif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATfi] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATelse] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_ATlocal] = {
    .visible = true,
    .named = false,
  },
  [sym_gap_prompt] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_gap_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_input] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case_output] = {
    .visible = true,
    .named = true,
  },
  [sym_test_file] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_local_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_test_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_test_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_condition = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_condition] = "condition",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_condition, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND_ATif);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_POUND_ATfi);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_POUND_ATelse);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_POUND_ATlocal);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_gap_prompt);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_gap_expression);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_gap_expression);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3},
};

enum {
  ts_external_token_test_case_input = 0,
  ts_external_token_test_case_output = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_test_case_input] = sym_test_case_input,
  [ts_external_token_test_case_output] = sym_test_case_output,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_test_case_input] = true,
    [ts_external_token_test_case_output] = true,
  },
  [2] = {
    [ts_external_token_test_case_output] = true,
  },
  [3] = {
    [ts_external_token_test_case_input] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND_ATif] = ACTIONS(1),
    [anon_sym_POUND_ATfi] = ACTIONS(1),
    [anon_sym_POUND_ATelse] = ACTIONS(1),
    [anon_sym_POUND_ATlocal] = ACTIONS(1),
    [sym_gap_prompt] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_test_case_input] = ACTIONS(1),
    [sym_test_case_output] = ACTIONS(1),
  },
  [1] = {
    [sym_test_file] = STATE(34),
    [sym_if_statement] = STATE(2),
    [sym_local_statement] = STATE(2),
    [sym_test_case] = STATE(2),
    [aux_sym_test_file_repeat1] = STATE(2),
    [aux_sym_test_file_repeat2] = STATE(8),
    [anon_sym_POUND_ATif] = ACTIONS(3),
    [anon_sym_POUND_ATlocal] = ACTIONS(5),
    [sym_gap_prompt] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
  [2] = {
    [sym_if_statement] = STATE(3),
    [sym_local_statement] = STATE(3),
    [sym_test_case] = STATE(3),
    [aux_sym_test_file_repeat1] = STATE(3),
    [aux_sym_test_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_POUND_ATif] = ACTIONS(3),
    [anon_sym_POUND_ATlocal] = ACTIONS(5),
    [sym_gap_prompt] = ACTIONS(7),
    [sym_comment] = ACTIONS(13),
  },
  [3] = {
    [sym_if_statement] = STATE(3),
    [sym_local_statement] = STATE(3),
    [sym_test_case] = STATE(3),
    [aux_sym_test_file_repeat1] = STATE(3),
    [aux_sym_test_file_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_POUND_ATif] = ACTIONS(17),
    [anon_sym_POUND_ATlocal] = ACTIONS(20),
    [sym_gap_prompt] = ACTIONS(23),
    [sym_comment] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(31), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
    ACTIONS(29), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
  [15] = 7,
    ACTIONS(7), 1,
      sym_gap_prompt,
    ACTIONS(34), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(36), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(38), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_test_file_repeat2,
    STATE(29), 1,
      sym_else_clause,
    STATE(7), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [38] = 7,
    ACTIONS(3), 1,
      anon_sym_POUND_ATif,
    ACTIONS(5), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      sym_gap_prompt,
    ACTIONS(44), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
    STATE(20), 2,
      sym_if_statement,
      sym_local_statement,
  [61] = 7,
    ACTIONS(7), 1,
      sym_gap_prompt,
    ACTIONS(36), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(46), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(48), 1,
      sym_comment,
    STATE(13), 1,
      aux_sym_test_file_repeat2,
    STATE(28), 1,
      sym_else_clause,
    STATE(10), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [84] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND_ATif,
    ACTIONS(5), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(42), 1,
      sym_gap_prompt,
    ACTIONS(44), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
    STATE(20), 2,
      sym_if_statement,
      sym_local_statement,
  [104] = 1,
    ACTIONS(50), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [114] = 5,
    ACTIONS(54), 1,
      sym_gap_prompt,
    ACTIONS(57), 1,
      sym_comment,
    STATE(24), 1,
      aux_sym_test_file_repeat2,
    ACTIONS(52), 2,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
    STATE(10), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [132] = 1,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [142] = 5,
    ACTIONS(7), 1,
      sym_gap_prompt,
    ACTIONS(62), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(64), 1,
      sym_comment,
    STATE(23), 1,
      aux_sym_test_file_repeat2,
    STATE(10), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [159] = 6,
    ACTIONS(36), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(42), 1,
      sym_gap_prompt,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_POUND_ATfi,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
    STATE(36), 1,
      sym_else_clause,
  [178] = 5,
    ACTIONS(7), 1,
      sym_gap_prompt,
    ACTIONS(68), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(70), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_test_file_repeat2,
    STATE(12), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
  [195] = 6,
    ACTIONS(36), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(42), 1,
      sym_gap_prompt,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(46), 1,
      anon_sym_POUND_ATfi,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
    STATE(28), 1,
      sym_else_clause,
  [214] = 1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [222] = 1,
    ACTIONS(74), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [230] = 1,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [238] = 1,
    ACTIONS(78), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [246] = 1,
    ACTIONS(15), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [254] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      sym_gap_prompt,
      sym_comment,
  [262] = 4,
    ACTIONS(42), 1,
      sym_gap_prompt,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_POUND_ATfi,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
  [275] = 4,
    ACTIONS(42), 1,
      sym_gap_prompt,
    ACTIONS(44), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_POUND_ATfi,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
  [288] = 3,
    ACTIONS(42), 1,
      sym_gap_prompt,
    ACTIONS(44), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_test_file_repeat2,
  [298] = 1,
    ACTIONS(84), 1,
      sym_test_case_output,
  [302] = 1,
    ACTIONS(86), 1,
      sym_gap_expression,
  [306] = 1,
    ACTIONS(88), 1,
      anon_sym_LF,
  [310] = 1,
    ACTIONS(66), 1,
      anon_sym_POUND_ATfi,
  [314] = 1,
    ACTIONS(46), 1,
      anon_sym_POUND_ATfi,
  [318] = 1,
    ACTIONS(90), 1,
      anon_sym_LF,
  [322] = 1,
    ACTIONS(92), 1,
      anon_sym_LF,
  [326] = 1,
    ACTIONS(94), 1,
      sym_test_case_input,
  [330] = 1,
    ACTIONS(96), 1,
      sym_test_case_output,
  [334] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
  [338] = 1,
    ACTIONS(100), 1,
      anon_sym_LF,
  [342] = 1,
    ACTIONS(102), 1,
      anon_sym_POUND_ATfi,
  [346] = 1,
    ACTIONS(104), 1,
      sym_test_case_input,
  [350] = 1,
    ACTIONS(106), 1,
      anon_sym_LF,
  [354] = 1,
    ACTIONS(108), 1,
      sym_gap_expression,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 84,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 132,
  [SMALL_STATE(12)] = 142,
  [SMALL_STATE(13)] = 159,
  [SMALL_STATE(14)] = 178,
  [SMALL_STATE(15)] = 195,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 222,
  [SMALL_STATE(18)] = 230,
  [SMALL_STATE(19)] = 238,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 254,
  [SMALL_STATE(22)] = 262,
  [SMALL_STATE(23)] = 275,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 298,
  [SMALL_STATE(26)] = 302,
  [SMALL_STATE(27)] = 306,
  [SMALL_STATE(28)] = 310,
  [SMALL_STATE(29)] = 314,
  [SMALL_STATE(30)] = 318,
  [SMALL_STATE(31)] = 322,
  [SMALL_STATE(32)] = 326,
  [SMALL_STATE(33)] = 330,
  [SMALL_STATE(34)] = 334,
  [SMALL_STATE(35)] = 338,
  [SMALL_STATE(36)] = 342,
  [SMALL_STATE(37)] = 346,
  [SMALL_STATE(38)] = 350,
  [SMALL_STATE(39)] = 354,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(26),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(39),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(37),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(37),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(24),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_statement, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_GAPtst_external_scanner_create(void);
void tree_sitter_GAPtst_external_scanner_destroy(void *);
bool tree_sitter_GAPtst_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_GAPtst_external_scanner_serialize(void *, char *);
void tree_sitter_GAPtst_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_GAPtst(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_GAPtst_external_scanner_create,
      tree_sitter_GAPtst_external_scanner_destroy,
      tree_sitter_GAPtst_external_scanner_scan,
      tree_sitter_GAPtst_external_scanner_serialize,
      tree_sitter_GAPtst_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
