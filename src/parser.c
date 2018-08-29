#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 19
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
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
  sym_comment = 12,
  sym_program = 13,
  sym__expression = 14,
  sym_true = 15,
  sym_false = 16,
  sym_tuple = 17,
  aux_sym_program_repeat1 = 18,
  aux_sym_tuple_repeat1 = 19,
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
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_tuple] = "tuple",
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
      if (lookahead == '\\')
        SKIP(33);
      if (lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
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
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 34:
      if (lookahead == 'a')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'l')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 's')
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'e')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 39:
      if (lookahead == 'i')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'l')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 42:
      if (lookahead == 'r')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'u')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(49);
      if (lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(48);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 49:
      if (lookahead == '\n')
        SKIP(48);
      END_STATE();
    case 50:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '\\')
        SKIP(51);
      if (lookahead == 'f')
        ADVANCE(34);
      if (lookahead == 'n')
        ADVANCE(39);
      if (lookahead == 't')
        ADVANCE(42);
      if (lookahead == '{')
        ADVANCE(46);
      if (lookahead == '}')
        ADVANCE(47);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(52);
      END_STATE();
    case 53:
      if (lookahead == '\n')
        SKIP(52);
      END_STATE();
    case 54:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(55);
      if (lookahead == '}')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(54);
      END_STATE();
    case 55:
      if (lookahead == '\n')
        SKIP(54);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 48},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 50},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 48},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 54},
  [9] = {.lex_state = 48},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 54},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 48},
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
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(5),
    [sym__expression] = STATE(6),
    [sym_true] = STATE(6),
    [sym_false] = STATE(6),
    [sym_tuple] = STATE(6),
    [aux_sym_program_repeat1] = STATE(6),
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
    [sym_comment] = ACTIONS(21),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_COLONtrue] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_COLONfalse] = ACTIONS(25),
    [sym_atom] = ACTIONS(25),
    [sym_nil] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [sym_comment] = ACTIONS(21),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_integer] = ACTIONS(29),
    [sym_float] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_COLONtrue] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_COLONfalse] = ACTIONS(29),
    [sym_atom] = ACTIONS(29),
    [sym_nil] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [sym_comment] = ACTIONS(21),
  },
  [4] = {
    [sym__expression] = STATE(8),
    [sym_true] = STATE(8),
    [sym_false] = STATE(8),
    [sym_tuple] = STATE(8),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(31),
    [sym_nil] = ACTIONS(33),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(35),
    [sym_comment] = ACTIONS(21),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(21),
  },
  [6] = {
    [sym__expression] = STATE(9),
    [sym_true] = STATE(9),
    [sym_false] = STATE(9),
    [sym_tuple] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(41),
    [sym_nil] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_COLONtrue] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_COLONfalse] = ACTIONS(47),
    [sym_atom] = ACTIONS(47),
    [sym_nil] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [sym_comment] = ACTIONS(21),
  },
  [8] = {
    [aux_sym_tuple_repeat1] = STATE(12),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(51),
    [sym_comment] = ACTIONS(21),
  },
  [9] = {
    [sym__expression] = STATE(9),
    [sym_true] = STATE(9),
    [sym_false] = STATE(9),
    [sym_tuple] = STATE(9),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(58),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_COLONtrue] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(67),
    [anon_sym_COLONfalse] = ACTIONS(70),
    [sym_atom] = ACTIONS(55),
    [sym_nil] = ACTIONS(58),
    [anon_sym_LBRACE] = ACTIONS(73),
    [sym_comment] = ACTIONS(21),
  },
  [10] = {
    [sym__expression] = STATE(14),
    [sym_true] = STATE(14),
    [sym_false] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_integer] = ACTIONS(76),
    [sym_float] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(76),
    [sym_nil] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(80),
    [sym_comment] = ACTIONS(21),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_integer] = ACTIONS(84),
    [sym_float] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_COLONtrue] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_COLONfalse] = ACTIONS(84),
    [sym_atom] = ACTIONS(84),
    [sym_nil] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_COMMA] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [sym_comment] = ACTIONS(21),
  },
  [12] = {
    [aux_sym_tuple_repeat1] = STATE(16),
    [anon_sym_COMMA] = ACTIONS(86),
    [anon_sym_RBRACE] = ACTIONS(80),
    [sym_comment] = ACTIONS(21),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_integer] = ACTIONS(90),
    [sym_float] = ACTIONS(88),
    [anon_sym_true] = ACTIONS(88),
    [anon_sym_COLONtrue] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(88),
    [anon_sym_COLONfalse] = ACTIONS(90),
    [sym_atom] = ACTIONS(90),
    [sym_nil] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [sym_comment] = ACTIONS(21),
  },
  [14] = {
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(21),
  },
  [15] = {
    [sym__expression] = STATE(14),
    [sym_true] = STATE(14),
    [sym_false] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_integer] = ACTIONS(76),
    [sym_float] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(76),
    [sym_nil] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(21),
  },
  [16] = {
    [aux_sym_tuple_repeat1] = STATE(16),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(92),
    [sym_comment] = ACTIONS(21),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [sym_float] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_COLONtrue] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_COLONfalse] = ACTIONS(101),
    [sym_atom] = ACTIONS(101),
    [sym_nil] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [sym_comment] = ACTIONS(21),
  },
  [18] = {
    [sym__expression] = STATE(14),
    [sym_true] = STATE(14),
    [sym_false] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_integer] = ACTIONS(76),
    [sym_float] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(76),
    [sym_nil] = ACTIONS(78),
    [anon_sym_LBRACE] = ACTIONS(19),
    [sym_comment] = ACTIONS(21),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(6),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(4),
  [21] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [31] = {.count = 1, .reusable = false}, SHIFT(8),
  [33] = {.count = 1, .reusable = true}, SHIFT(8),
  [35] = {.count = 1, .reusable = true}, SHIFT(7),
  [37] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(9),
  [43] = {.count = 1, .reusable = true}, SHIFT(9),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [49] = {.count = 1, .reusable = true}, SHIFT(10),
  [51] = {.count = 1, .reusable = true}, SHIFT(11),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [55] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [70] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [76] = {.count = 1, .reusable = false}, SHIFT(14),
  [78] = {.count = 1, .reusable = true}, SHIFT(14),
  [80] = {.count = 1, .reusable = true}, SHIFT(13),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [86] = {.count = 1, .reusable = true}, SHIFT(15),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [92] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [94] = {.count = 1, .reusable = true}, SHIFT(17),
  [96] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(18),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
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
