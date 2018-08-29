#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 35
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  anon_sym_PIPE = 14,
  sym_comment = 15,
  sym_program = 16,
  sym__expression = 17,
  sym_true = 18,
  sym_false = 19,
  sym_tuple = 20,
  sym_list = 21,
  sym__simple_list = 22,
  sym__head_tail_list = 23,
  sym_head = 24,
  sym_tail = 25,
  aux_sym_program_repeat1 = 26,
  aux_sym_tuple_repeat1 = 27,
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
  [anon_sym_PIPE] = "|",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__expression] = "_expression",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym__simple_list] = "_simple_list",
  [sym__head_tail_list] = "_head_tail_list",
  [sym_head] = "head",
  [sym_tail] = "tail",
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
  [anon_sym_PIPE] = {
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
  [sym__simple_list] = {
    .visible = false,
    .named = true,
  },
  [sym__head_tail_list] = {
    .visible = false,
    .named = true,
  },
  [sym_head] = {
    .visible = true,
    .named = true,
  },
  [sym_tail] = {
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
      if (lookahead == '|')
        ADVANCE(49);
      if (lookahead == '}')
        ADVANCE(50);
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
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
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
        SKIP(52);
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
        SKIP(51);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 52:
      if (lookahead == '\n')
        SKIP(51);
      END_STATE();
    case 53:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(54);
      if (lookahead == 'f')
        ADVANCE(36);
      if (lookahead == 'n')
        ADVANCE(41);
      if (lookahead == 't')
        ADVANCE(44);
      if (lookahead == '{')
        ADVANCE(48);
      if (lookahead == '}')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(53);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 54:
      if (lookahead == '\n')
        SKIP(53);
      END_STATE();
    case 55:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(33);
      if (lookahead == '\\')
        SKIP(56);
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
        SKIP(55);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 56:
      if (lookahead == '\n')
        SKIP(55);
      END_STATE();
    case 57:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      END_STATE();
    case 58:
      if (lookahead == '\n')
        SKIP(57);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == '}')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      END_STATE();
    case 60:
      if (lookahead == '\n')
        SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(62);
      if (lookahead == ']')
        ADVANCE(35);
      if (lookahead == '|')
        ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      END_STATE();
    case 62:
      if (lookahead == '\n')
        SKIP(61);
      END_STATE();
    case 63:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(64);
      if (lookahead == ']')
        ADVANCE(35);
      if (lookahead == '}')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(63);
      END_STATE();
    case 64:
      if (lookahead == '\n')
        SKIP(63);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 55},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 59},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 61},
  [13] = {.lex_state = 61},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 59},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 61},
  [21] = {.lex_state = 51},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 63},
  [24] = {.lex_state = 53},
  [25] = {.lex_state = 59},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 55},
  [28] = {.lex_state = 61},
  [29] = {.lex_state = 55},
  [30] = {.lex_state = 55},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
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
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(6),
    [sym__expression] = STATE(8),
    [sym_true] = STATE(8),
    [sym_false] = STATE(8),
    [sym_tuple] = STATE(8),
    [sym_list] = STATE(8),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [aux_sym_program_repeat1] = STATE(8),
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
    [anon_sym_PIPE] = ACTIONS(25),
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
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_comment] = ACTIONS(23),
  },
  [4] = {
    [sym__expression] = STATE(10),
    [sym_true] = STATE(10),
    [sym_false] = STATE(10),
    [sym_tuple] = STATE(10),
    [sym_list] = STATE(10),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
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
    [sym__expression] = STATE(12),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [sym_head] = STATE(13),
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
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_COLONtrue] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_COLONfalse] = ACTIONS(49),
    [sym_atom] = ACTIONS(49),
    [sym_nil] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_comment] = ACTIONS(23),
  },
  [8] = {
    [sym__expression] = STATE(14),
    [sym_true] = STATE(14),
    [sym_false] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_list] = STATE(14),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_integer] = ACTIONS(53),
    [sym_float] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(53),
    [sym_nil] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_integer] = ACTIONS(59),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(57),
    [anon_sym_COLONtrue] = ACTIONS(59),
    [anon_sym_false] = ACTIONS(57),
    [anon_sym_COLONfalse] = ACTIONS(59),
    [sym_atom] = ACTIONS(59),
    [sym_nil] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_PIPE] = ACTIONS(57),
    [sym_comment] = ACTIONS(23),
  },
  [10] = {
    [aux_sym_tuple_repeat1] = STATE(17),
    [anon_sym_COMMA] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(63),
    [sym_comment] = ACTIONS(23),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_integer] = ACTIONS(67),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_COLONtrue] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_COLONfalse] = ACTIONS(67),
    [sym_atom] = ACTIONS(67),
    [sym_nil] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [sym_comment] = ACTIONS(23),
  },
  [12] = {
    [aux_sym_tuple_repeat1] = STATE(20),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_comment] = ACTIONS(23),
  },
  [13] = {
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_comment] = ACTIONS(23),
  },
  [14] = {
    [sym__expression] = STATE(14),
    [sym_true] = STATE(14),
    [sym_false] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_list] = STATE(14),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [aux_sym_program_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_COLONtrue] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_COLONfalse] = ACTIONS(94),
    [sym_atom] = ACTIONS(79),
    [sym_nil] = ACTIONS(82),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_comment] = ACTIONS(23),
  },
  [15] = {
    [sym__expression] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(103),
    [sym_nil] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [16] = {
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
    [anon_sym_PIPE] = ACTIONS(109),
    [sym_comment] = ACTIONS(23),
  },
  [17] = {
    [aux_sym_tuple_repeat1] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(107),
    [sym_comment] = ACTIONS(23),
  },
  [18] = {
    [sym__expression] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(103),
    [sym_nil] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_comment] = ACTIONS(23),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_integer] = ACTIONS(119),
    [sym_float] = ACTIONS(117),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_COLONtrue] = ACTIONS(119),
    [anon_sym_false] = ACTIONS(117),
    [anon_sym_COLONfalse] = ACTIONS(119),
    [sym_atom] = ACTIONS(119),
    [sym_nil] = ACTIONS(117),
    [anon_sym_LBRACE] = ACTIONS(117),
    [anon_sym_COMMA] = ACTIONS(117),
    [anon_sym_RBRACE] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_RBRACK] = ACTIONS(117),
    [anon_sym_PIPE] = ACTIONS(117),
    [sym_comment] = ACTIONS(23),
  },
  [20] = {
    [aux_sym_tuple_repeat1] = STATE(28),
    [anon_sym_COMMA] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_comment] = ACTIONS(23),
  },
  [21] = {
    [sym_list] = STATE(29),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [sym_tail] = STATE(30),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_integer] = ACTIONS(125),
    [sym_float] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_COLONtrue] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(123),
    [anon_sym_COLONfalse] = ACTIONS(125),
    [sym_atom] = ACTIONS(125),
    [sym_nil] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [sym_comment] = ACTIONS(23),
  },
  [23] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_comment] = ACTIONS(23),
  },
  [24] = {
    [sym__expression] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(103),
    [sym_nil] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [25] = {
    [aux_sym_tuple_repeat1] = STATE(25),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(127),
    [sym_comment] = ACTIONS(23),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [sym_integer] = ACTIONS(136),
    [sym_float] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_COLONtrue] = ACTIONS(136),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_COLONfalse] = ACTIONS(136),
    [sym_atom] = ACTIONS(136),
    [sym_nil] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [sym_comment] = ACTIONS(23),
  },
  [27] = {
    [sym__expression] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(103),
    [sym_nil] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(138),
    [sym_comment] = ACTIONS(23),
  },
  [28] = {
    [aux_sym_tuple_repeat1] = STATE(28),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_comment] = ACTIONS(23),
  },
  [29] = {
    [anon_sym_RBRACK] = ACTIONS(140),
    [sym_comment] = ACTIONS(23),
  },
  [30] = {
    [anon_sym_RBRACK] = ACTIONS(142),
    [sym_comment] = ACTIONS(23),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_integer] = ACTIONS(146),
    [sym_float] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(144),
    [anon_sym_COLONtrue] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(144),
    [anon_sym_COLONfalse] = ACTIONS(146),
    [sym_atom] = ACTIONS(146),
    [sym_nil] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(144),
    [sym_comment] = ACTIONS(23),
  },
  [32] = {
    [sym__expression] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__simple_list] = STATE(7),
    [sym__head_tail_list] = STATE(7),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(103),
    [sym_nil] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_comment] = ACTIONS(23),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_integer] = ACTIONS(150),
    [sym_float] = ACTIONS(148),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_COLONtrue] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(148),
    [anon_sym_COLONfalse] = ACTIONS(150),
    [sym_atom] = ACTIONS(150),
    [sym_nil] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_comment] = ACTIONS(23),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_integer] = ACTIONS(154),
    [sym_float] = ACTIONS(152),
    [anon_sym_true] = ACTIONS(152),
    [anon_sym_COLONtrue] = ACTIONS(154),
    [anon_sym_false] = ACTIONS(152),
    [anon_sym_COLONfalse] = ACTIONS(154),
    [sym_atom] = ACTIONS(154),
    [sym_nil] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(152),
    [anon_sym_RBRACK] = ACTIONS(152),
    [anon_sym_PIPE] = ACTIONS(152),
    [sym_comment] = ACTIONS(23),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(8),
  [9] = {.count = 1, .reusable = true}, SHIFT(8),
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
  [33] = {.count = 1, .reusable = false}, SHIFT(10),
  [35] = {.count = 1, .reusable = true}, SHIFT(10),
  [37] = {.count = 1, .reusable = true}, SHIFT(9),
  [39] = {.count = 1, .reusable = false}, SHIFT(12),
  [41] = {.count = 1, .reusable = true}, SHIFT(12),
  [43] = {.count = 1, .reusable = true}, SHIFT(11),
  [45] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [51] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [53] = {.count = 1, .reusable = false}, SHIFT(14),
  [55] = {.count = 1, .reusable = true}, SHIFT(14),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [61] = {.count = 1, .reusable = true}, SHIFT(15),
  [63] = {.count = 1, .reusable = true}, SHIFT(16),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 2),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 2),
  [69] = {.count = 1, .reusable = true}, SHIFT(18),
  [71] = {.count = 1, .reusable = true}, SHIFT(19),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(21),
  [77] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [79] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(14),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [94] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [97] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [100] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [103] = {.count = 1, .reusable = false}, SHIFT(23),
  [105] = {.count = 1, .reusable = true}, SHIFT(23),
  [107] = {.count = 1, .reusable = true}, SHIFT(22),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [113] = {.count = 1, .reusable = true}, SHIFT(24),
  [115] = {.count = 1, .reusable = true}, SHIFT(26),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [121] = {.count = 1, .reusable = true}, SHIFT(27),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [129] = {.count = 1, .reusable = true}, SHIFT(31),
  [131] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(32),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [138] = {.count = 1, .reusable = true}, SHIFT(33),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [142] = {.count = 1, .reusable = true}, SHIFT(34),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
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
