#include "tree_sitter/parser.h"
#include <stdio.h>
#include <wctype.h>

enum TokenType { TEST_CASE_INPUT, TEST_CASE_OUTPUT };

const bool DEBUG_MODE = false;
const char *GAP_PROMPT = "gap> ";

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static inline bool advance_word(TSLexer *lexer, const char *word) {
  for (size_t i = 0; word[i] != '\0'; ++i) {
    if (lexer->lookahead != word[i])
      return false;
    advance(lexer);
    if (DEBUG_MODE)
      printf("%c", lexer->lookahead);
  }
  return true;
}

bool tree_sitter_GAPtst_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  bool new_line = false;
  bool last_seen_semicolon = false;
  bool inside_comment = false;
  bool has_content = false;
  bool empty_line_before = false;
  if (DEBUG_MODE) {
    printf("START\n");
    printf("%d", valid_symbols[TEST_CASE_INPUT]);
    printf("%d", valid_symbols[TEST_CASE_OUTPUT]);
    printf("\n%c", lexer->lookahead);
  }

  if (valid_symbols[TEST_CASE_INPUT] && !valid_symbols[TEST_CASE_OUTPUT]) {
    new_line = false;
    last_seen_semicolon = false;
    inside_comment = false;
    has_content = false;
    while (lexer->lookahead) {
      if (new_line) {
        lexer->mark_end(lexer);
        if (lexer->lookahead == '>') {
          new_line = false;
          skip(lexer);
          if (DEBUG_MODE)
            printf("%c", lexer->lookahead);
          if (lexer->lookahead == ' ') {
            skip(lexer);
            if (DEBUG_MODE)
              printf("%c", lexer->lookahead);
            continue;
          }
        }
        // New line without '> ' prompt, must be start
        // of `test_case_output`
        // Check if properly terminated input, otherwise no match
        lexer->result_symbol = TEST_CASE_INPUT;
        if (DEBUG_MODE) {
          printf("\n%d\n", last_seen_semicolon || !has_content);
          printf("\nENDING\n");
        }
        return last_seen_semicolon || !has_content;
      } else if (lexer->lookahead == '\n') {
        new_line = true;
        inside_comment = false;
      } else if (lexer->lookahead == ';') {
        last_seen_semicolon = true;
        has_content = true;
      } else if (lexer->lookahead == '#') {
        inside_comment = true;
      } else if (!inside_comment && !iswspace(lexer->lookahead)) {
        last_seen_semicolon = false;
        has_content = true;
      }
      advance(lexer);
      if (DEBUG_MODE)
        printf("%c", lexer->lookahead);
    }
    // Ran out of input
    lexer->mark_end(lexer);
    lexer->result_symbol = TEST_CASE_INPUT;
    if (DEBUG_MODE) {
      printf("\n%d\n", last_seen_semicolon || !has_content);
      printf("\nENDING\n");
    }
    return last_seen_semicolon || !has_content;
  } else if (valid_symbols[TEST_CASE_OUTPUT]) {
    new_line = true;
    empty_line_before = false;
    while (lexer->lookahead) {
      if (empty_line_before && lexer->lookahead == '#') {
        lexer->mark_end(lexer);
        lexer->result_symbol = TEST_CASE_OUTPUT;
        if (DEBUG_MODE) {
          printf("\n%d\n", true);
          printf("\nENDING\n");
        }
        return true;
      } else if (lexer->lookahead == '\n') {
        if (new_line) {
          empty_line_before = true;
        }
        new_line = true;
      } else if (new_line) {
        new_line = false;
        empty_line_before = false;
        if (lexer->lookahead == GAP_PROMPT[0]) {
          lexer->mark_end(lexer);
          if (advance_word(lexer, GAP_PROMPT)) {
            lexer->result_symbol = TEST_CASE_OUTPUT;
            if (DEBUG_MODE) {
              printf("\n%d\n", true);
              printf("\nENDING\n");
            }
            return true;
          }
          continue;
        }
      }
      advance(lexer);
      if (DEBUG_MODE)
        printf("%c", lexer->lookahead);
    }
    // Ran out of input
    lexer->mark_end(lexer);
    lexer->result_symbol = TEST_CASE_OUTPUT;
    if (DEBUG_MODE) {
      printf("\n%d\n", true);
      printf("\nENDING\n");
    }
    return true;
  }
  if (DEBUG_MODE) {
    printf("\n%d\n", false);
    printf("\nENDING\n");
  }
  return false;
}

unsigned tree_sitter_GAPtst_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  return 0;
}
void tree_sitter_GAPtst_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {}
void *tree_sitter_GAPtst_external_scanner_create() { return NULL; }
void tree_sitter_GAPtst_external_scanner_destroy(void *payload) {}
