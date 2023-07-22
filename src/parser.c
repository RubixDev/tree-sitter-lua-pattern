#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_CARET = 1,
  sym_any = 2,
  sym_class = 3,
  sym_backreference = 4,
  sym_escaped = 5,
  sym_quantifier = 6,
  sym_char = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  sym_balanced = 12,
  anon_sym_PERCENTf = 13,
  anon_sym_DASH = 14,
  sym_set_char = 15,
  sym_end = 16,
  sym_pattern = 17,
  aux_sym__pattern = 18,
  sym_start = 19,
  sym_set = 20,
  sym_group = 21,
  sym_frontier = 22,
  sym_set_range = 23,
  aux_sym_set_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CARET] = "^",
  [sym_any] = "any",
  [sym_class] = "class",
  [sym_backreference] = "backreference",
  [sym_escaped] = "escaped",
  [sym_quantifier] = "quantifier",
  [sym_char] = "char",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_balanced] = "balanced",
  [anon_sym_PERCENTf] = "%f",
  [anon_sym_DASH] = "-",
  [sym_set_char] = "set_char",
  [sym_end] = "end",
  [sym_pattern] = "pattern",
  [aux_sym__pattern] = "_pattern",
  [sym_start] = "start",
  [sym_set] = "set",
  [sym_group] = "group",
  [sym_frontier] = "frontier",
  [sym_set_range] = "set_range",
  [aux_sym_set_repeat1] = "set_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CARET] = anon_sym_CARET,
  [sym_any] = sym_any,
  [sym_class] = sym_class,
  [sym_backreference] = sym_backreference,
  [sym_escaped] = sym_escaped,
  [sym_quantifier] = sym_quantifier,
  [sym_char] = sym_char,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_balanced] = sym_balanced,
  [anon_sym_PERCENTf] = anon_sym_PERCENTf,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_set_char] = sym_set_char,
  [sym_end] = sym_end,
  [sym_pattern] = sym_pattern,
  [aux_sym__pattern] = aux_sym__pattern,
  [sym_start] = sym_start,
  [sym_set] = sym_set,
  [sym_group] = sym_group,
  [sym_frontier] = sym_frontier,
  [sym_set_range] = sym_set_range,
  [aux_sym_set_repeat1] = aux_sym_set_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [sym_any] = {
    .visible = true,
    .named = true,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [sym_backreference] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_balanced] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_set_char] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__pattern] = {
    .visible = false,
    .named = false,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_frontier] = {
    .visible = true,
    .named = true,
  },
  [sym_set_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_set_repeat1] = {
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
  [7] = 2,
  [8] = 8,
  [9] = 8,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 12,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 13,
  [24] = 14,
  [25] = 11,
  [26] = 26,
  [27] = 13,
  [28] = 14,
  [29] = 22,
  [30] = 16,
  [31] = 18,
  [32] = 12,
  [33] = 26,
  [34] = 34,
  [35] = 34,
  [36] = 34,
  [37] = 34,
  [38] = 38,
  [39] = 39,
  [40] = 39,
  [41] = 38,
  [42] = 42,
  [43] = 39,
  [44] = 42,
  [45] = 38,
  [46] = 42,
  [47] = 47,
  [48] = 42,
  [49] = 39,
  [50] = 38,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
};

static inline bool sym_class_character_set_1(int32_t c) {
  return (c < 'Z'
    ? (c < 'P'
      ? (c < 'G'
        ? (c < 'C'
          ? c == 'A'
          : c <= 'D')
        : (c <= 'G' || c == 'L'))
      : (c <= 'P' || (c < 'U'
        ? c == 'S'
        : (c <= 'U' || (c >= 'W' && c <= 'X')))))
    : (c <= 'Z' || (c < 's'
      ? (c < 'l'
        ? (c < 'g'
          ? (c >= 'a' && c <= 'd')
          : c <= 'g')
        : (c <= 'l' || c == 'p'))
      : (c <= 's' || (c < 'w'
        ? c == 'u'
        : (c <= 'x' || c == 'z'))))));
}

static inline bool sym_class_character_set_2(int32_t c) {
  return (c < 'a'
    ? (c < 'P'
      ? (c < 'G'
        ? (c < 'C'
          ? c == 'A'
          : c <= 'D')
        : (c <= 'G' || c == 'L'))
      : (c <= 'P' || (c < 'W'
        ? (c < 'U'
          ? c == 'S'
          : c <= 'U')
        : (c <= 'X' || c == 'Z'))))
    : (c <= 'a' || (c < 's'
      ? (c < 'l'
        ? (c < 'g'
          ? (c >= 'c' && c <= 'd')
          : c <= 'g')
        : (c <= 'l' || c == 'p'))
      : (c <= 's' || (c < 'w'
        ? c == 'u'
        : (c <= 'x' || c == 'z'))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(8)
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?') ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (sym_class_character_set_1(lookahead)) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 8:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 9:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') ADVANCE(20);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '?') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_any);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_class);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_backreference);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_escaped);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_escaped);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_quantifier);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_balanced);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_PERCENTf);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_set_char);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_set_char);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead == '^') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_set_char);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead == '%') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_set_char);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ']') ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_set_char);
      if (sym_class_character_set_2(lookahead)) ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9, .external_lex_state = 1},
  [2] = {.lex_state = 10, .external_lex_state = 1},
  [3] = {.lex_state = 10, .external_lex_state = 1},
  [4] = {.lex_state = 10, .external_lex_state = 1},
  [5] = {.lex_state = 10, .external_lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 11, .external_lex_state = 1},
  [12] = {.lex_state = 11, .external_lex_state = 1},
  [13] = {.lex_state = 11, .external_lex_state = 1},
  [14] = {.lex_state = 11, .external_lex_state = 1},
  [15] = {.lex_state = 10, .external_lex_state = 1},
  [16] = {.lex_state = 10, .external_lex_state = 1},
  [17] = {.lex_state = 10, .external_lex_state = 1},
  [18] = {.lex_state = 10, .external_lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 10, .external_lex_state = 1},
  [22] = {.lex_state = 10, .external_lex_state = 1},
  [23] = {.lex_state = 10, .external_lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 10, .external_lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
};

enum {
  ts_external_token_end = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_end] = sym_end,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_end] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [sym_any] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [sym_backreference] = ACTIONS(1),
    [sym_escaped] = ACTIONS(1),
    [sym_quantifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_balanced] = ACTIONS(1),
    [anon_sym_PERCENTf] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_end] = ACTIONS(1),
  },
  [1] = {
    [sym_pattern] = STATE(59),
    [aux_sym__pattern] = STATE(3),
    [sym_start] = STATE(4),
    [sym_set] = STATE(11),
    [sym_group] = STATE(3),
    [sym_frontier] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(5),
    [sym_any] = ACTIONS(7),
    [sym_class] = ACTIONS(9),
    [sym_backreference] = ACTIONS(9),
    [sym_escaped] = ACTIONS(7),
    [sym_char] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_balanced] = ACTIONS(9),
    [anon_sym_PERCENTf] = ACTIONS(15),
    [sym_end] = ACTIONS(17),
  },
  [2] = {
    [aux_sym__pattern] = STATE(2),
    [sym_set] = STATE(11),
    [sym_group] = STATE(2),
    [sym_frontier] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_any] = ACTIONS(21),
    [sym_class] = ACTIONS(24),
    [sym_backreference] = ACTIONS(24),
    [sym_escaped] = ACTIONS(21),
    [sym_char] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(30),
    [sym_balanced] = ACTIONS(24),
    [anon_sym_PERCENTf] = ACTIONS(33),
    [sym_end] = ACTIONS(19),
  },
  [3] = {
    [aux_sym__pattern] = STATE(2),
    [sym_set] = STATE(11),
    [sym_group] = STATE(2),
    [sym_frontier] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_any] = ACTIONS(7),
    [sym_class] = ACTIONS(38),
    [sym_backreference] = ACTIONS(38),
    [sym_escaped] = ACTIONS(7),
    [sym_char] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_balanced] = ACTIONS(38),
    [anon_sym_PERCENTf] = ACTIONS(15),
    [sym_end] = ACTIONS(40),
  },
  [4] = {
    [aux_sym__pattern] = STATE(5),
    [sym_set] = STATE(11),
    [sym_group] = STATE(5),
    [sym_frontier] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_any] = ACTIONS(7),
    [sym_class] = ACTIONS(42),
    [sym_backreference] = ACTIONS(42),
    [sym_escaped] = ACTIONS(7),
    [sym_char] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_balanced] = ACTIONS(42),
    [anon_sym_PERCENTf] = ACTIONS(15),
    [sym_end] = ACTIONS(40),
  },
  [5] = {
    [aux_sym__pattern] = STATE(2),
    [sym_set] = STATE(11),
    [sym_group] = STATE(2),
    [sym_frontier] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_any] = ACTIONS(7),
    [sym_class] = ACTIONS(38),
    [sym_backreference] = ACTIONS(38),
    [sym_escaped] = ACTIONS(7),
    [sym_char] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym_balanced] = ACTIONS(38),
    [anon_sym_PERCENTf] = ACTIONS(15),
    [sym_end] = ACTIONS(46),
  },
  [6] = {
    [aux_sym__pattern] = STATE(7),
    [sym_set] = STATE(25),
    [sym_group] = STATE(7),
    [sym_frontier] = STATE(7),
    [sym_any] = ACTIONS(48),
    [sym_class] = ACTIONS(50),
    [sym_backreference] = ACTIONS(50),
    [sym_escaped] = ACTIONS(48),
    [sym_char] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(56),
    [sym_balanced] = ACTIONS(50),
    [anon_sym_PERCENTf] = ACTIONS(58),
  },
  [7] = {
    [aux_sym__pattern] = STATE(7),
    [sym_set] = STATE(25),
    [sym_group] = STATE(7),
    [sym_frontier] = STATE(7),
    [sym_any] = ACTIONS(60),
    [sym_class] = ACTIONS(63),
    [sym_backreference] = ACTIONS(63),
    [sym_escaped] = ACTIONS(60),
    [sym_char] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_RPAREN] = ACTIONS(72),
    [sym_balanced] = ACTIONS(63),
    [anon_sym_PERCENTf] = ACTIONS(74),
  },
  [8] = {
    [aux_sym__pattern] = STATE(6),
    [sym_set] = STATE(25),
    [sym_group] = STATE(6),
    [sym_frontier] = STATE(6),
    [sym_any] = ACTIONS(48),
    [sym_class] = ACTIONS(77),
    [sym_backreference] = ACTIONS(77),
    [sym_escaped] = ACTIONS(48),
    [sym_char] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(79),
    [sym_balanced] = ACTIONS(77),
    [anon_sym_PERCENTf] = ACTIONS(58),
  },
  [9] = {
    [aux_sym__pattern] = STATE(10),
    [sym_set] = STATE(25),
    [sym_group] = STATE(10),
    [sym_frontier] = STATE(10),
    [sym_any] = ACTIONS(48),
    [sym_class] = ACTIONS(81),
    [sym_backreference] = ACTIONS(81),
    [sym_escaped] = ACTIONS(48),
    [sym_char] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(83),
    [sym_balanced] = ACTIONS(81),
    [anon_sym_PERCENTf] = ACTIONS(58),
  },
  [10] = {
    [aux_sym__pattern] = STATE(7),
    [sym_set] = STATE(25),
    [sym_group] = STATE(7),
    [sym_frontier] = STATE(7),
    [sym_any] = ACTIONS(48),
    [sym_class] = ACTIONS(50),
    [sym_backreference] = ACTIONS(50),
    [sym_escaped] = ACTIONS(48),
    [sym_char] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(54),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym_balanced] = ACTIONS(50),
    [anon_sym_PERCENTf] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(91), 1,
      sym_quantifier,
    ACTIONS(87), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(89), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [19] = 2,
    ACTIONS(93), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(95), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_quantifier,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [36] = 2,
    ACTIONS(97), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(99), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_quantifier,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [53] = 2,
    ACTIONS(101), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(103), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_quantifier,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [70] = 2,
    ACTIONS(93), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(95), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [86] = 2,
    ACTIONS(105), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(107), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [102] = 2,
    ACTIONS(101), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(103), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [118] = 2,
    ACTIONS(109), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(111), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [134] = 1,
    ACTIONS(95), 11,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_quantifier,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [148] = 1,
    ACTIONS(99), 11,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_quantifier,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [162] = 2,
    ACTIONS(113), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(115), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [178] = 2,
    ACTIONS(19), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(72), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [194] = 2,
    ACTIONS(97), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(99), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [210] = 1,
    ACTIONS(103), 11,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_quantifier,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [224] = 2,
    ACTIONS(117), 1,
      sym_quantifier,
    ACTIONS(89), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [240] = 2,
    ACTIONS(119), 2,
      sym_end,
      ts_builtin_sym_end,
    ACTIONS(121), 9,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [256] = 1,
    ACTIONS(99), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [269] = 1,
    ACTIONS(103), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [282] = 1,
    ACTIONS(72), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [295] = 1,
    ACTIONS(107), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [308] = 1,
    ACTIONS(111), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [321] = 1,
    ACTIONS(95), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [334] = 1,
    ACTIONS(121), 10,
      sym_any,
      sym_class,
      sym_backreference,
      sym_escaped,
      sym_char,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_balanced,
      anon_sym_PERCENTf,
  [347] = 5,
    ACTIONS(123), 1,
      anon_sym_CARET,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(125), 2,
      sym_class,
      sym_escaped,
    STATE(43), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [365] = 5,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(131), 1,
      anon_sym_CARET,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(133), 2,
      sym_class,
      sym_escaped,
    STATE(39), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [383] = 5,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(137), 1,
      anon_sym_CARET,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 2,
      sym_class,
      sym_escaped,
    STATE(40), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [401] = 5,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(143), 1,
      anon_sym_CARET,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(145), 2,
      sym_class,
      sym_escaped,
    STATE(49), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [419] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [434] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [449] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [464] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [479] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(159), 2,
      sym_class,
      sym_escaped,
    STATE(38), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [494] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [509] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(163), 2,
      sym_class,
      sym_escaped,
    STATE(41), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [524] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [539] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(167), 2,
      sym_class,
      sym_escaped,
    STATE(45), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [554] = 4,
    ACTIONS(172), 1,
      anon_sym_RBRACK,
    ACTIONS(174), 1,
      sym_set_char,
    ACTIONS(169), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [569] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(177), 2,
      sym_class,
      sym_escaped,
    STATE(50), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [584] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [599] = 4,
    ACTIONS(129), 1,
      sym_set_char,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(149), 2,
      sym_class,
      sym_escaped,
    STATE(47), 2,
      sym_set_range,
      aux_sym_set_repeat1,
  [614] = 2,
    ACTIONS(185), 1,
      anon_sym_DASH,
    ACTIONS(183), 4,
      sym_class,
      sym_escaped,
      anon_sym_RBRACK,
      sym_set_char,
  [624] = 1,
    ACTIONS(187), 4,
      sym_class,
      sym_escaped,
      anon_sym_RBRACK,
      sym_set_char,
  [631] = 2,
    ACTIONS(189), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_set,
  [638] = 2,
    ACTIONS(191), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_set,
  [645] = 1,
    ACTIONS(193), 1,
      sym_set_char,
  [649] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
  [653] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [657] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
  [661] = 1,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 19,
  [SMALL_STATE(13)] = 36,
  [SMALL_STATE(14)] = 53,
  [SMALL_STATE(15)] = 70,
  [SMALL_STATE(16)] = 86,
  [SMALL_STATE(17)] = 102,
  [SMALL_STATE(18)] = 118,
  [SMALL_STATE(19)] = 134,
  [SMALL_STATE(20)] = 148,
  [SMALL_STATE(21)] = 162,
  [SMALL_STATE(22)] = 178,
  [SMALL_STATE(23)] = 194,
  [SMALL_STATE(24)] = 210,
  [SMALL_STATE(25)] = 224,
  [SMALL_STATE(26)] = 240,
  [SMALL_STATE(27)] = 256,
  [SMALL_STATE(28)] = 269,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 295,
  [SMALL_STATE(31)] = 308,
  [SMALL_STATE(32)] = 321,
  [SMALL_STATE(33)] = 334,
  [SMALL_STATE(34)] = 347,
  [SMALL_STATE(35)] = 365,
  [SMALL_STATE(36)] = 383,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 419,
  [SMALL_STATE(39)] = 434,
  [SMALL_STATE(40)] = 449,
  [SMALL_STATE(41)] = 464,
  [SMALL_STATE(42)] = 479,
  [SMALL_STATE(43)] = 494,
  [SMALL_STATE(44)] = 509,
  [SMALL_STATE(45)] = 524,
  [SMALL_STATE(46)] = 539,
  [SMALL_STATE(47)] = 554,
  [SMALL_STATE(48)] = 569,
  [SMALL_STATE(49)] = 584,
  [SMALL_STATE(50)] = 599,
  [SMALL_STATE(51)] = 614,
  [SMALL_STATE(52)] = 624,
  [SMALL_STATE(53)] = 631,
  [SMALL_STATE(54)] = 638,
  [SMALL_STATE(55)] = 645,
  [SMALL_STATE(56)] = 649,
  [SMALL_STATE(57)] = 653,
  [SMALL_STATE(58)] = 657,
  [SMALL_STATE(59)] = 661,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(36),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(9),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(54),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(25),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(7),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(37),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(8),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__pattern, 2), SHIFT_REPEAT(53),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pattern, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pattern, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_frontier, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_frontier, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_start, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(47),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_set_repeat1, 2), SHIFT_REPEAT(51),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_set_repeat1, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_set_range, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_lua_pattern_external_scanner_create(void);
void tree_sitter_lua_pattern_external_scanner_destroy(void *);
bool tree_sitter_lua_pattern_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_lua_pattern_external_scanner_serialize(void *, char *);
void tree_sitter_lua_pattern_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lua_pattern(void) {
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
      tree_sitter_lua_pattern_external_scanner_create,
      tree_sitter_lua_pattern_external_scanner_destroy,
      tree_sitter_lua_pattern_external_scanner_scan,
      tree_sitter_lua_pattern_external_scanner_serialize,
      tree_sitter_lua_pattern_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
