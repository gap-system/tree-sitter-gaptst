#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_gap_prompt = 1,
  sym_comment = 2,
  sym_test_case_input = 3,
  sym_test_case_output = 4,
  sym_test_file = 5,
  sym_test_case = 6,
  aux_sym_test_file_repeat1 = 7,
  aux_sym_test_file_repeat2 = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_gap_prompt] = "gap_prompt",
  [sym_comment] = "comment",
  [sym_test_case_input] = "test_case_input",
  [sym_test_case_output] = "test_case_output",
  [sym_test_file] = "test_file",
  [sym_test_case] = "test_case",
  [aux_sym_test_file_repeat1] = "test_file_repeat1",
  [aux_sym_test_file_repeat2] = "test_file_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_gap_prompt] = sym_gap_prompt,
  [sym_comment] = sym_comment,
  [sym_test_case_input] = sym_test_case_input,
  [sym_test_case_output] = sym_test_case_output,
  [sym_test_file] = sym_test_file,
  [sym_test_case] = sym_test_case,
  [aux_sym_test_file_repeat1] = aux_sym_test_file_repeat1,
  [aux_sym_test_file_repeat2] = aux_sym_test_file_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_gap_prompt] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '#') ADVANCE(1);
      if (lookahead == 'g') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(4);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_gap_prompt);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
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
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0, .external_lex_state = 3},
  [14] = {.lex_state = 0, .external_lex_state = 2},
  [15] = {.lex_state = 0, .external_lex_state = 3},
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
    [ts_external_token_test_case_input] = true,
  },
  [3] = {
    [ts_external_token_test_case_output] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_gap_prompt] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_test_case_input] = ACTIONS(1),
    [sym_test_case_output] = ACTIONS(1),
  },
  [1] = {
    [sym_test_file] = STATE(12),
    [sym_test_case] = STATE(2),
    [aux_sym_test_file_repeat2] = STATE(8),
    [sym_gap_prompt] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_test_case] = STATE(3),
    [aux_sym_test_file_repeat1] = STATE(3),
    [aux_sym_test_file_repeat2] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_gap_prompt] = ACTIONS(3),
    [sym_comment] = ACTIONS(9),
  },
  [3] = {
    [sym_test_case] = STATE(4),
    [aux_sym_test_file_repeat1] = STATE(4),
    [aux_sym_test_file_repeat2] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_gap_prompt] = ACTIONS(3),
    [sym_comment] = ACTIONS(13),
  },
  [4] = {
    [sym_test_case] = STATE(4),
    [aux_sym_test_file_repeat1] = STATE(4),
    [aux_sym_test_file_repeat2] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_gap_prompt] = ACTIONS(17),
    [sym_comment] = ACTIONS(20),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_gap_prompt,
    ACTIONS(25), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_test_file_repeat2,
  [13] = 3,
    ACTIONS(29), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_test_file_repeat2,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_gap_prompt,
  [24] = 4,
    ACTIONS(23), 1,
      sym_gap_prompt,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_test_file_repeat2,
  [37] = 3,
    ACTIONS(23), 1,
      sym_gap_prompt,
    ACTIONS(25), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_test_file_repeat2,
  [47] = 1,
    ACTIONS(34), 3,
      ts_builtin_sym_end,
      sym_gap_prompt,
      sym_comment,
  [53] = 1,
    ACTIONS(36), 3,
      ts_builtin_sym_end,
      sym_gap_prompt,
      sym_comment,
  [59] = 1,
    ACTIONS(38), 1,
      sym_test_case_input,
  [63] = 1,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
  [67] = 1,
    ACTIONS(42), 1,
      sym_test_case_output,
  [71] = 1,
    ACTIONS(44), 1,
      sym_test_case_input,
  [75] = 1,
    ACTIONS(46), 1,
      sym_test_case_output,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 13,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 53,
  [SMALL_STATE(11)] = 59,
  [SMALL_STATE(12)] = 63,
  [SMALL_STATE(13)] = 67,
  [SMALL_STATE(14)] = 71,
  [SMALL_STATE(15)] = 75,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(11),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat1, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_test_file_repeat2, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_file, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test_case, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
