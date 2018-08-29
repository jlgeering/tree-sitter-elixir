#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 7
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_integer = 1,
  sym_float = 2,
  anon_sym_true = 3,
  anon_sym_COLONtrue = 4,
  anon_sym_false = 5,
  anon_sym_COLONfalse = 6,
  sym_atom = 7,
  sym_nil = 8,
  sym_comment = 9,
  sym_program = 10,
  sym_true = 11,
  sym_false = 12,
  aux_sym_program_repeat1 = 13,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_COLONtrue] = ":true",
  [anon_sym_false] = "false",
  [anon_sym_COLONfalse] = ":false",
  [sym_atom] = "atom",
  [sym_nil] = "nil",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym_true] = "true",
  [sym_false] = "false",
  [aux_sym_program_repeat1] = "program_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONtrue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONfalse] = {
    .visible = true,
    .named = false,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(17);
      if (lookahead == '\\')
        SKIP(32);
      if (lookahead == 'f')
        ADVANCE(33);
      if (lookahead == 'n')
        ADVANCE(38);
      if (lookahead == 't')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '_')
        ADVANCE(9);
      if (lookahead == 'b')
        ADVANCE(11);
      if (lookahead == 'o')
        ADVANCE(13);
      if (lookahead == 'x')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(4);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(8);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(4);
      if (lookahead == '_')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(11);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(12);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\"')
        ADVANCE(18);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == 'f')
        ADVANCE(22);
      if (lookahead == 't')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == '\"')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\"')
        ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'l')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 's')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'r')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'u')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(23);
      if (lookahead == 'e')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 33:
      if (lookahead == 'a')
        ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'l')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 's')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'e')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 38:
      if (lookahead == 'i')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'l')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 41:
      if (lookahead == 'r')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'u')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 45:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(45);
      END_STATE();
    case 46:
      if (lookahead == '\n')
        SKIP(45);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 45},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_integer] = ACTIONS(3),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_COLONtrue] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLONfalse] = ACTIONS(3),
    [sym_atom] = ACTIONS(3),
    [sym_nil] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(4),
    [sym_true] = STATE(5),
    [sym_false] = STATE(5),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(7),
    [sym_nil] = ACTIONS(9),
    [sym_comment] = ACTIONS(19),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_COLONtrue] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_COLONfalse] = ACTIONS(23),
    [sym_atom] = ACTIONS(23),
    [sym_nil] = ACTIONS(21),
    [sym_comment] = ACTIONS(19),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_COLONtrue] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_COLONfalse] = ACTIONS(27),
    [sym_atom] = ACTIONS(27),
    [sym_nil] = ACTIONS(25),
    [sym_comment] = ACTIONS(19),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_comment] = ACTIONS(19),
  },
  [5] = {
    [sym_true] = STATE(6),
    [sym_false] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(33),
    [sym_nil] = ACTIONS(35),
    [sym_comment] = ACTIONS(19),
  },
  [6] = {
    [sym_true] = STATE(6),
    [sym_false] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(42),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_COLONtrue] = ACTIONS(48),
    [anon_sym_false] = ACTIONS(51),
    [anon_sym_COLONfalse] = ACTIONS(54),
    [sym_atom] = ACTIONS(39),
    [sym_nil] = ACTIONS(42),
    [sym_comment] = ACTIONS(19),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [29] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(6),
  [35] = {.count = 1, .reusable = true}, SHIFT(6),
  [37] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [39] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [48] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
