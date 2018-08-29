#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 29
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
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
  anon_sym_LBRACE = 9,
  anon_sym_COMMA = 10,
  anon_sym_RBRACE = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  sym_comment = 14,
  sym_program = 15,
  sym__expression = 16,
  sym_true = 17,
  sym_false = 18,
  sym_tuple = 19,
  sym_list = 20,
  aux_sym_program_repeat1 = 21,
  aux_sym_tuple_repeat1 = 22,
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuple_repeat1] = {
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
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(34);
      if (lookahead == ']')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(41);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '_')
        ADVANCE(10);
      if (lookahead == 'b')
        ADVANCE(12);
      if (lookahead == 'o')
        ADVANCE(14);
      if (lookahead == 'x')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(9);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(5);
      if (lookahead == '_')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(12);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(15);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '\"')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == 'f')
        ADVANCE(23);
      if (lookahead == 't')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '\"')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\"')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'a')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'l')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 's')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '_')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '_')
        ADVANCE(24);
      if (lookahead == 'e')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '_')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      if (lookahead == 'a')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'l')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 's')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'e')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 41:
      if (lookahead == 'i')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'l')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 44:
      if (lookahead == 'r')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'u')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'e')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(51);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(41);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(50);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 51:
      if (lookahead == '\n')
        SKIP(50);
      END_STATE();
    case 52:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(53);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(41);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        SKIP(52);
      END_STATE();
    case 54:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(55);
      if (lookahead == ']')
        ADVANCE(35);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(41);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        SKIP(54);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        SKIP(56);
      END_STATE();
    case 58:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(59);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(58);
      END_STATE();
    case 59:
      if (lookahead == '\n')
        SKIP(58);
      END_STATE();
    case 60:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(61);
      if (lookahead == ']')
        ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(60);
      END_STATE();
    case 61:
      if (lookahead == '\n')
        SKIP(60);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(63);
      if (lookahead == ']')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '\n')
        SKIP(62);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 56},
  [7] = {.lex_state = 50},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 58},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 60},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 62},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 58},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(6),
    [sym__expression] = STATE(7),
    [sym_true] = STATE(7),
    [sym_false] = STATE(7),
    [sym_tuple] = STATE(7),
    [sym_list] = STATE(7),
    [aux_sym_program_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(7),
    [sym_nil] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_COLONtrue] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_COLONfalse] = ACTIONS(27),
    [sym_atom] = ACTIONS(27),
    [sym_nil] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_COMMA] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(23),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_COLONtrue] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_COLONfalse] = ACTIONS(31),
    [sym_atom] = ACTIONS(31),
    [sym_nil] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_comment] = ACTIONS(23),
  },
  [4] = {
    [sym__expression] = STATE(9),
    [sym_true] = STATE(9),
    [sym_false] = STATE(9),
    [sym_tuple] = STATE(9),
    [sym_list] = STATE(9),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(33),
    [sym_nil] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [5] = {
    [sym__expression] = STATE(11),
    [sym_true] = STATE(11),
    [sym_false] = STATE(11),
    [sym_tuple] = STATE(11),
    [sym_list] = STATE(11),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(39),
    [sym_nil] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(43),
    [sym_comment] = ACTIONS(23),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_comment] = ACTIONS(23),
  },
  [7] = {
    [sym__expression] = STATE(12),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(49),
    [sym_nil] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(53),
    [anon_sym_true] = ACTIONS(53),
    [anon_sym_COLONtrue] = ACTIONS(55),
    [anon_sym_false] = ACTIONS(53),
    [anon_sym_COLONfalse] = ACTIONS(55),
    [sym_atom] = ACTIONS(55),
    [sym_nil] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(53),
    [anon_sym_COMMA] = ACTIONS(53),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym_comment] = ACTIONS(23),
  },
  [9] = {
    [aux_sym_tuple_repeat1] = STATE(15),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(59),
    [sym_comment] = ACTIONS(23),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_COLONtrue] = ACTIONS(63),
    [anon_sym_false] = ACTIONS(61),
    [anon_sym_COLONfalse] = ACTIONS(63),
    [sym_atom] = ACTIONS(63),
    [sym_nil] = ACTIONS(61),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(61),
    [anon_sym_RBRACK] = ACTIONS(61),
    [sym_comment] = ACTIONS(23),
  },
  [11] = {
    [aux_sym_tuple_repeat1] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(67),
    [sym_comment] = ACTIONS(23),
  },
  [12] = {
    [sym__expression] = STATE(12),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [aux_sym_program_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_integer] = ACTIONS(71),
    [sym_float] = ACTIONS(74),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_COLONtrue] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_COLONfalse] = ACTIONS(86),
    [sym_atom] = ACTIONS(71),
    [sym_nil] = ACTIONS(74),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_comment] = ACTIONS(23),
  },
  [13] = {
    [sym__expression] = STATE(20),
    [sym_true] = STATE(20),
    [sym_false] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(95),
    [sym_nil] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_COLONtrue] = ACTIONS(103),
    [anon_sym_false] = ACTIONS(101),
    [anon_sym_COLONfalse] = ACTIONS(103),
    [sym_atom] = ACTIONS(103),
    [sym_nil] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym_comment] = ACTIONS(23),
  },
  [15] = {
    [aux_sym_tuple_repeat1] = STATE(22),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(23),
  },
  [16] = {
    [sym__expression] = STATE(20),
    [sym_true] = STATE(20),
    [sym_false] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(95),
    [sym_nil] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_comment] = ACTIONS(23),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_integer] = ACTIONS(111),
    [sym_float] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_COLONtrue] = ACTIONS(111),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_COLONfalse] = ACTIONS(111),
    [sym_atom] = ACTIONS(111),
    [sym_nil] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(109),
    [anon_sym_COMMA] = ACTIONS(109),
    [anon_sym_RBRACE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym_comment] = ACTIONS(23),
  },
  [18] = {
    [aux_sym_tuple_repeat1] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_comment] = ACTIONS(23),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_COLONtrue] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_COLONfalse] = ACTIONS(117),
    [sym_atom] = ACTIONS(117),
    [sym_nil] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_comment] = ACTIONS(23),
  },
  [20] = {
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RBRACE] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_comment] = ACTIONS(23),
  },
  [21] = {
    [sym__expression] = STATE(20),
    [sym_true] = STATE(20),
    [sym_false] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(95),
    [sym_nil] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [22] = {
    [aux_sym_tuple_repeat1] = STATE(22),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(119),
    [sym_comment] = ACTIONS(23),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(126),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(126),
    [anon_sym_COLONtrue] = ACTIONS(128),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_COLONfalse] = ACTIONS(128),
    [sym_atom] = ACTIONS(128),
    [sym_nil] = ACTIONS(126),
    [anon_sym_LBRACE] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [anon_sym_RBRACE] = ACTIONS(126),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(126),
    [sym_comment] = ACTIONS(23),
  },
  [24] = {
    [sym__expression] = STATE(20),
    [sym_true] = STATE(20),
    [sym_false] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(95),
    [sym_nil] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(130),
    [sym_comment] = ACTIONS(23),
  },
  [25] = {
    [aux_sym_tuple_repeat1] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_comment] = ACTIONS(23),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_integer] = ACTIONS(134),
    [sym_float] = ACTIONS(132),
    [anon_sym_true] = ACTIONS(132),
    [anon_sym_COLONtrue] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(132),
    [anon_sym_COLONfalse] = ACTIONS(134),
    [sym_atom] = ACTIONS(134),
    [sym_nil] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(132),
    [anon_sym_RBRACK] = ACTIONS(132),
    [sym_comment] = ACTIONS(23),
  },
  [27] = {
    [sym__expression] = STATE(20),
    [sym_true] = STATE(20),
    [sym_false] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_list] = STATE(20),
    [sym_integer] = ACTIONS(95),
    [sym_float] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(95),
    [sym_nil] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_integer] = ACTIONS(138),
    [sym_float] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_COLONtrue] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(136),
    [anon_sym_COLONfalse] = ACTIONS(138),
    [sym_atom] = ACTIONS(138),
    [sym_nil] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [sym_comment] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(7),
  [9] = {.count = 1, .reusable = true}, SHIFT(7),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(4),
  [21] = {.count = 1, .reusable = true}, SHIFT(5),
  [23] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [33] = {.count = 1, .reusable = false}, SHIFT(9),
  [35] = {.count = 1, .reusable = true}, SHIFT(9),
  [37] = {.count = 1, .reusable = true}, SHIFT(8),
  [39] = {.count = 1, .reusable = false}, SHIFT(11),
  [41] = {.count = 1, .reusable = true}, SHIFT(11),
  [43] = {.count = 1, .reusable = true}, SHIFT(10),
  [45] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [49] = {.count = 1, .reusable = false}, SHIFT(12),
  [51] = {.count = 1, .reusable = true}, SHIFT(12),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [57] = {.count = 1, .reusable = true}, SHIFT(13),
  [59] = {.count = 1, .reusable = true}, SHIFT(14),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [65] = {.count = 1, .reusable = true}, SHIFT(16),
  [67] = {.count = 1, .reusable = true}, SHIFT(17),
  [69] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(12),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [80] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [86] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [92] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [95] = {.count = 1, .reusable = false}, SHIFT(20),
  [97] = {.count = 1, .reusable = true}, SHIFT(20),
  [99] = {.count = 1, .reusable = true}, SHIFT(19),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [105] = {.count = 1, .reusable = true}, SHIFT(21),
  [107] = {.count = 1, .reusable = true}, SHIFT(23),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [113] = {.count = 1, .reusable = true}, SHIFT(24),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [121] = {.count = 1, .reusable = true}, SHIFT(26),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(27),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_list, 4),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_list, 4),
  [130] = {.count = 1, .reusable = true}, SHIFT(28),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_list, 5),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_list, 5),
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
