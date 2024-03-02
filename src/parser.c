#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
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
  anon_sym_POUND_ATexec = 6,
  sym_gap_prompt = 7,
  aux_sym_comment_token1 = 8,
  aux_sym_comment_token2 = 9,
  anon_sym_ = 10,
  sym_gap_expression = 11,
  sym_test_case_input = 12,
  sym_test_case_output = 13,
  sym_test_file = 14,
  sym_if_statement = 15,
  sym_else_clause = 16,
  sym_local_statement = 17,
  sym_exec_statement = 18,
  sym_test_case = 19,
  sym_comment = 20,
  aux_sym_test_file_repeat1 = 21,
  aux_sym_test_file_repeat2 = 22,
  aux_sym_if_statement_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_ATif] = "#@if",
  [anon_sym_POUND_ATfi] = "#@fi",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND_ATelse] = "#@else",
  [anon_sym_POUND_ATlocal] = "#@local",
  [anon_sym_POUND_ATexec] = "#@exec",
  [sym_gap_prompt] = "gap_prompt",
  [aux_sym_comment_token1] = "comment_token1",
  [aux_sym_comment_token2] = "comment_token2",
  [anon_sym_] = " ",
  [sym_gap_expression] = "gap_expression",
  [sym_test_case_input] = "test_case_input",
  [sym_test_case_output] = "test_case_output",
  [sym_test_file] = "test_file",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_local_statement] = "local_statement",
  [sym_exec_statement] = "exec_statement",
  [sym_test_case] = "test_case",
  [sym_comment] = "comment",
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
  [anon_sym_POUND_ATexec] = anon_sym_POUND_ATexec,
  [sym_gap_prompt] = sym_gap_prompt,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [anon_sym_] = anon_sym_,
  [sym_gap_expression] = sym_gap_expression,
  [sym_test_case_input] = sym_test_case_input,
  [sym_test_case_output] = sym_test_case_output,
  [sym_test_file] = sym_test_file,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_local_statement] = sym_local_statement,
  [sym_exec_statement] = sym_exec_statement,
  [sym_test_case] = sym_test_case,
  [sym_comment] = sym_comment,
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
  [anon_sym_POUND_ATexec] = {
    .visible = true,
    .named = false,
  },
  [sym_gap_prompt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [sym_exec_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_test_case] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      if (lookahead == 0) ADVANCE(31);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == 'g') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == '>') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(11);
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
      ACCEPT_TOKEN(anon_sym_POUND_ATexec);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_gap_prompt);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_gap_expression);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_gap_expression);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
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
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
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
    [anon_sym_POUND_ATexec] = ACTIONS(1),
    [sym_gap_prompt] = ACTIONS(1),
    [aux_sym_comment_token1] = ACTIONS(1),
    [aux_sym_comment_token2] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym_test_case_input] = ACTIONS(1),
    [sym_test_case_output] = ACTIONS(1),
  },
  [1] = {
    [sym_test_file] = STATE(32),
    [sym_if_statement] = STATE(2),
    [sym_local_statement] = STATE(2),
    [sym_exec_statement] = STATE(2),
    [sym_test_case] = STATE(2),
    [sym_comment] = STATE(4),
    [aux_sym_test_file_repeat1] = STATE(2),
    [aux_sym_test_file_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUND_ATif] = ACTIONS(5),
    [anon_sym_POUND_ATlocal] = ACTIONS(7),
    [anon_sym_POUND_ATexec] = ACTIONS(9),
    [sym_gap_prompt] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(15),
  },
  [2] = {
    [sym_if_statement] = STATE(3),
    [sym_local_statement] = STATE(3),
    [sym_exec_statement] = STATE(3),
    [sym_test_case] = STATE(3),
    [sym_comment] = STATE(5),
    [aux_sym_test_file_repeat1] = STATE(3),
    [aux_sym_test_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_POUND_ATif] = ACTIONS(5),
    [anon_sym_POUND_ATlocal] = ACTIONS(7),
    [anon_sym_POUND_ATexec] = ACTIONS(9),
    [sym_gap_prompt] = ACTIONS(11),
    [aux_sym_comment_token1] = ACTIONS(13),
    [aux_sym_comment_token2] = ACTIONS(15),
  },
  [3] = {
    [sym_if_statement] = STATE(3),
    [sym_local_statement] = STATE(3),
    [sym_exec_statement] = STATE(3),
    [sym_test_case] = STATE(3),
    [sym_comment] = STATE(6),
    [aux_sym_test_file_repeat1] = STATE(3),
    [aux_sym_test_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_POUND_ATif] = ACTIONS(21),
    [anon_sym_POUND_ATlocal] = ACTIONS(24),
    [anon_sym_POUND_ATexec] = ACTIONS(27),
    [sym_gap_prompt] = ACTIONS(30),
    [aux_sym_comment_token1] = ACTIONS(33),
    [aux_sym_comment_token2] = ACTIONS(36),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND_ATif,
    ACTIONS(7), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(9), 1,
      anon_sym_POUND_ATexec,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_gap_prompt,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    STATE(24), 3,
      sym_if_statement,
      sym_local_statement,
      sym_exec_statement,
  [31] = 9,
    ACTIONS(5), 1,
      anon_sym_POUND_ATif,
    ACTIONS(7), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(9), 1,
      anon_sym_POUND_ATexec,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      sym_gap_prompt,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    STATE(24), 3,
      sym_if_statement,
      sym_local_statement,
      sym_exec_statement,
  [62] = 8,
    ACTIONS(5), 1,
      anon_sym_POUND_ATif,
    ACTIONS(7), 1,
      anon_sym_POUND_ATlocal,
    ACTIONS(9), 1,
      anon_sym_POUND_ATexec,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      sym_gap_prompt,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    STATE(24), 3,
      sym_if_statement,
      sym_local_statement,
      sym_exec_statement,
  [90] = 4,
    ACTIONS(45), 1,
      aux_sym_comment_token1,
    ACTIONS(48), 1,
      aux_sym_comment_token2,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
  [110] = 8,
    ACTIONS(11), 1,
      sym_gap_prompt,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(51), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(53), 1,
      anon_sym_POUND_ATelse,
    STATE(29), 1,
      sym_else_clause,
    STATE(12), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(15), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [137] = 8,
    ACTIONS(11), 1,
      sym_gap_prompt,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(53), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(55), 1,
      anon_sym_POUND_ATfi,
    STATE(42), 1,
      sym_else_clause,
    STATE(8), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(18), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [164] = 2,
    ACTIONS(59), 1,
      aux_sym_comment_token2,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [178] = 2,
    ACTIONS(63), 1,
      aux_sym_comment_token2,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [192] = 6,
    ACTIONS(67), 1,
      sym_gap_prompt,
    ACTIONS(70), 1,
      aux_sym_comment_token1,
    ACTIONS(73), 1,
      aux_sym_comment_token2,
    ACTIONS(65), 2,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
    STATE(12), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(28), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [214] = 2,
    ACTIONS(78), 1,
      aux_sym_comment_token2,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [228] = 2,
    ACTIONS(82), 1,
      aux_sym_comment_token2,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATfi,
      anon_sym_POUND_ATelse,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [242] = 7,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      sym_gap_prompt,
    ACTIONS(53), 1,
      anon_sym_POUND_ATelse,
    ACTIONS(84), 1,
      anon_sym_POUND_ATfi,
    STATE(40), 1,
      sym_else_clause,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [265] = 6,
    ACTIONS(11), 1,
      sym_gap_prompt,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(86), 1,
      anon_sym_POUND_ATfi,
    STATE(12), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(26), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [286] = 6,
    ACTIONS(11), 1,
      sym_gap_prompt,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(88), 1,
      anon_sym_POUND_ATfi,
    STATE(16), 2,
      sym_test_case,
      aux_sym_if_statement_repeat1,
    STATE(27), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [307] = 7,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      sym_gap_prompt,
    ACTIONS(51), 1,
      anon_sym_POUND_ATfi,
    ACTIONS(53), 1,
      anon_sym_POUND_ATelse,
    STATE(29), 1,
      sym_else_clause,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [330] = 2,
    ACTIONS(92), 1,
      aux_sym_comment_token2,
    ACTIONS(90), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [342] = 2,
    ACTIONS(96), 1,
      aux_sym_comment_token2,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [354] = 2,
    ACTIONS(100), 1,
      aux_sym_comment_token2,
    ACTIONS(98), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [366] = 2,
    ACTIONS(104), 1,
      aux_sym_comment_token2,
    ACTIONS(102), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [378] = 2,
    ACTIONS(108), 1,
      aux_sym_comment_token2,
    ACTIONS(106), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [390] = 2,
    ACTIONS(110), 1,
      aux_sym_comment_token2,
    ACTIONS(19), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [402] = 2,
    ACTIONS(114), 1,
      aux_sym_comment_token2,
    ACTIONS(112), 6,
      ts_builtin_sym_end,
      anon_sym_POUND_ATif,
      anon_sym_POUND_ATlocal,
      anon_sym_POUND_ATexec,
      sym_gap_prompt,
      aux_sym_comment_token1,
  [414] = 5,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      sym_gap_prompt,
    ACTIONS(116), 1,
      anon_sym_POUND_ATfi,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [431] = 5,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      sym_gap_prompt,
    ACTIONS(86), 1,
      anon_sym_POUND_ATfi,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [448] = 4,
    ACTIONS(13), 1,
      aux_sym_comment_token1,
    ACTIONS(15), 1,
      aux_sym_comment_token2,
    ACTIONS(39), 1,
      sym_gap_prompt,
    STATE(7), 2,
      sym_comment,
      aux_sym_test_file_repeat2,
  [462] = 1,
    ACTIONS(84), 1,
      anon_sym_POUND_ATfi,
  [466] = 1,
    ACTIONS(118), 1,
      sym_test_case_output,
  [470] = 1,
    ACTIONS(120), 1,
      sym_test_case_input,
  [474] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [478] = 1,
    ACTIONS(124), 1,
      anon_sym_LF,
  [482] = 1,
    ACTIONS(126), 1,
      sym_gap_expression,
  [486] = 1,
    ACTIONS(128), 1,
      sym_gap_expression,
  [490] = 1,
    ACTIONS(130), 1,
      sym_test_case_output,
  [494] = 1,
    ACTIONS(132), 1,
      anon_sym_,
  [498] = 1,
    ACTIONS(134), 1,
      sym_gap_expression,
  [502] = 1,
    ACTIONS(136), 1,
      anon_sym_LF,
  [506] = 1,
    ACTIONS(138), 1,
      anon_sym_POUND_ATfi,
  [510] = 1,
    ACTIONS(140), 1,
      sym_test_case_input,
  [514] = 1,
    ACTIONS(51), 1,
      anon_sym_POUND_ATfi,
  [518] = 1,
    ACTIONS(142), 1,
      anon_sym_LF,
  [522] = 1,
    ACTIONS(144), 1,
      anon_sym_LF,
  [526] = 1,
    ACTIONS(146), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 31,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 214,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 307,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 366,
  [SMALL_STATE(23)] = 378,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 402,
  [SMALL_STATE(26)] = 414,
  [SMALL_STATE(27)] = 431,
  [SMALL_STATE(28)] = 448,
  [SMALL_STATE(29)] = 462,
  [SMALL_STATE(30)] = 466,
  [SMALL_STATE(31)] = 470,
  [SMALL_STATE(32)] = 474,
  [SMALL_STATE(33)] = 478,
  [SMALL_STATE(34)] = 482,
  [SMALL_STATE(35)] = 486,
  [SMALL_STATE(36)] = 490,
  [SMALL_STATE(37)] = 494,
  [SMALL_STATE(38)] = 498,
  [SMALL_STATE(39)] = 502,
  [SMALL_STATE(40)] = 506,
  [SMALL_STATE(41)] = 510,
  [SMALL_STATE(42)] = 514,
  [SMALL_STATE(43)] = 518,
  [SMALL_STATE(44)] = 522,
  [SMALL_STATE(45)] = 526,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(38),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(35),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(34),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(31),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(37),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2), SHIFT_REPEAT(13),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_test_file_repeat2, 2), SHIFT_REPEAT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(31),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(13),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(37),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test_case, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_statement, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exec_statement, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_statement, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_statement, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_test_file_repeat1, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
