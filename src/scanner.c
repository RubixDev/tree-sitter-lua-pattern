#include <tree_sitter/parser.h>

enum TokenType {
  END,
};

void *tree_sitter_lua_pattern_external_scanner_create() { return NULL; }
void tree_sitter_lua_pattern_external_scanner_destroy(void *p) {}
void tree_sitter_lua_pattern_external_scanner_reset(void *p) {}
unsigned tree_sitter_lua_pattern_external_scanner_serialize(void *p,
                                                            char *buffer) {
  return 0;
}
void tree_sitter_lua_pattern_external_scanner_deserialize(void *p,
                                                          const char *b,
                                                          unsigned n) {}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

bool tree_sitter_lua_pattern_external_scanner_scan(void *payload,
                                                   TSLexer *lexer,
                                                   const bool *valid_symbols) {
  if (valid_symbols[END] && lexer->lookahead == '$') {
    // skip trailing newlines
    for (;;) {
      advance(lexer);
      if (lexer->lookahead == '\n') {
        continue;
      } else if (lexer->lookahead == '\r') {
        advance(lexer);
        // '\r' must be followed by '\n'
        if (lexer->lookahead == '\n') {
          continue;
        } else {
          return false;
        }
      } else {
        break;
      }
    }

    if (lexer->eof(lexer)) {
      lexer->result_symbol = END;
      return true;
    }
  }

  return false;
}
