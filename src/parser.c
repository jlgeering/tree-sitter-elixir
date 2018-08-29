#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 36
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  anon_sym_nil = 8,
  anon_sym_COLONnil = 9,
  anon_sym_LBRACE = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_PIPE = 15,
  sym_comment = 16,
  sym_program = 17,
  sym__expression = 18,
  sym_true = 19,
  sym_false = 20,
  sym_nil = 21,
  sym_tuple = 22,
  sym_list = 23,
  sym__simple_list = 24,
  sym__head_tail_list = 25,
  sym_head = 26,
  sym_tail = 27,
  aux_sym_program_repeat1 = 28,
  aux_sym_tuple_repeat1 = 29,
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
  [anon_sym_nil] = "nil",
  [anon_sym_COLONnil] = ":nil",
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
  [sym_nil] = "nil",
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
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLONnil] = {
    .visible = true,
    .named = false,
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
  [sym_nil] = {
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
        ADVANCE(37);
      if (lookahead == '\\')
        SKIP(38);
      if (lookahead == ']')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'n')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(54);
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
      if (lookahead == 'n')
        ADVANCE(30);
      if (lookahead == 't')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
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
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'a')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'l')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 's')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'i')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'l')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'r')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'u')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (lookahead == 'e')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(24);
      if (lookahead == '?')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 40:
      if (lookahead == 'a')
        ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == 'l')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 's')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'e')
        ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 45:
      if (lookahead == 'i')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'l')
        ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 48:
      if (lookahead == 'r')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'u')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'e')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        SKIP(56);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'n')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(52);
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
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        SKIP(58);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'n')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(57);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 58:
      if (lookahead == '\n')
        SKIP(57);
      END_STATE();
    case 59:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '0')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(18);
      if (lookahead == '[')
        ADVANCE(37);
      if (lookahead == '\\')
        SKIP(60);
      if (lookahead == ']')
        ADVANCE(39);
      if (lookahead == 'f')
        ADVANCE(40);
      if (lookahead == 'n')
        ADVANCE(45);
      if (lookahead == 't')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(59);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == '\n')
        SKIP(59);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(62);
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
      if (lookahead == '}')
        ADVANCE(54);
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
    case 65:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(66);
      if (lookahead == ']')
        ADVANCE(39);
      if (lookahead == '|')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(65);
      END_STATE();
    case 66:
      if (lookahead == '\n')
        SKIP(65);
      END_STATE();
    case 67:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '\\')
        SKIP(68);
      if (lookahead == ']')
        ADVANCE(39);
      if (lookahead == '}')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(67);
      END_STATE();
    case 68:
      if (lookahead == '\n')
        SKIP(67);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 55},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 59},
  [7] = {.lex_state = 61},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 55},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 63},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 65},
  [14] = {.lex_state = 65},
  [15] = {.lex_state = 55},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 63},
  [19] = {.lex_state = 59},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 65},
  [22] = {.lex_state = 55},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 63},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 65},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_COLONnil] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym__expression] = STATE(9),
    [sym_true] = STATE(9),
    [sym_false] = STATE(9),
    [sym_nil] = STATE(9),
    [sym_tuple] = STATE(9),
    [sym_list] = STATE(9),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [aux_sym_program_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_integer] = ACTIONS(31),
    [sym_float] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_COLONtrue] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_COLONfalse] = ACTIONS(31),
    [sym_atom] = ACTIONS(31),
    [anon_sym_nil] = ACTIONS(29),
    [anon_sym_COLONnil] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_comment] = ACTIONS(27),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_integer] = ACTIONS(35),
    [sym_float] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_COLONtrue] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_COLONfalse] = ACTIONS(35),
    [sym_atom] = ACTIONS(35),
    [anon_sym_nil] = ACTIONS(33),
    [anon_sym_COLONnil] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(33),
    [anon_sym_COMMA] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [anon_sym_PIPE] = ACTIONS(33),
    [sym_comment] = ACTIONS(27),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_COLONtrue] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_COLONfalse] = ACTIONS(39),
    [sym_atom] = ACTIONS(39),
    [anon_sym_nil] = ACTIONS(37),
    [anon_sym_COLONnil] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_comment] = ACTIONS(27),
  },
  [5] = {
    [sym__expression] = STATE(11),
    [sym_true] = STATE(11),
    [sym_false] = STATE(11),
    [sym_nil] = STATE(11),
    [sym_tuple] = STATE(11),
    [sym_list] = STATE(11),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(41),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [6] = {
    [sym__expression] = STATE(13),
    [sym_true] = STATE(13),
    [sym_false] = STATE(13),
    [sym_nil] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_list] = STATE(13),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_head] = STATE(14),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(47),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym_comment] = ACTIONS(27),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_comment] = ACTIONS(27),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_integer] = ACTIONS(57),
    [sym_float] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(55),
    [anon_sym_COLONtrue] = ACTIONS(57),
    [anon_sym_false] = ACTIONS(55),
    [anon_sym_COLONfalse] = ACTIONS(57),
    [sym_atom] = ACTIONS(57),
    [anon_sym_nil] = ACTIONS(55),
    [anon_sym_COLONnil] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(55),
    [anon_sym_COMMA] = ACTIONS(55),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(55),
    [anon_sym_RBRACK] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(55),
    [sym_comment] = ACTIONS(27),
  },
  [9] = {
    [sym__expression] = STATE(15),
    [sym_true] = STATE(15),
    [sym_false] = STATE(15),
    [sym_nil] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_list] = STATE(15),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_integer] = ACTIONS(61),
    [sym_float] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(61),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_integer] = ACTIONS(67),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_COLONtrue] = ACTIONS(67),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_COLONfalse] = ACTIONS(67),
    [sym_atom] = ACTIONS(67),
    [anon_sym_nil] = ACTIONS(65),
    [anon_sym_COLONnil] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_PIPE] = ACTIONS(65),
    [sym_comment] = ACTIONS(27),
  },
  [11] = {
    [aux_sym_tuple_repeat1] = STATE(18),
    [anon_sym_COMMA] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [sym_comment] = ACTIONS(27),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_integer] = ACTIONS(75),
    [sym_float] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_COLONtrue] = ACTIONS(75),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_COLONfalse] = ACTIONS(75),
    [sym_atom] = ACTIONS(75),
    [anon_sym_nil] = ACTIONS(73),
    [anon_sym_COLONnil] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_comment] = ACTIONS(27),
  },
  [13] = {
    [aux_sym_tuple_repeat1] = STATE(21),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_comment] = ACTIONS(27),
  },
  [14] = {
    [anon_sym_PIPE] = ACTIONS(83),
    [sym_comment] = ACTIONS(27),
  },
  [15] = {
    [sym__expression] = STATE(15),
    [sym_true] = STATE(15),
    [sym_false] = STATE(15),
    [sym_nil] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_list] = STATE(15),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [aux_sym_program_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_integer] = ACTIONS(87),
    [sym_float] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_COLONtrue] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_COLONfalse] = ACTIONS(102),
    [sym_atom] = ACTIONS(87),
    [anon_sym_nil] = ACTIONS(105),
    [anon_sym_COLONnil] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(114),
    [sym_comment] = ACTIONS(27),
  },
  [16] = {
    [sym__expression] = STATE(24),
    [sym_true] = STATE(24),
    [sym_false] = STATE(24),
    [sym_nil] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_list] = STATE(24),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(117),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [sym_integer] = ACTIONS(125),
    [sym_float] = ACTIONS(123),
    [anon_sym_true] = ACTIONS(123),
    [anon_sym_COLONtrue] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(123),
    [anon_sym_COLONfalse] = ACTIONS(125),
    [sym_atom] = ACTIONS(125),
    [anon_sym_nil] = ACTIONS(123),
    [anon_sym_COLONnil] = ACTIONS(125),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_RBRACE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_PIPE] = ACTIONS(123),
    [sym_comment] = ACTIONS(27),
  },
  [18] = {
    [aux_sym_tuple_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RBRACE] = ACTIONS(121),
    [sym_comment] = ACTIONS(27),
  },
  [19] = {
    [sym__expression] = STATE(24),
    [sym_true] = STATE(24),
    [sym_false] = STATE(24),
    [sym_nil] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_list] = STATE(24),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(117),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_comment] = ACTIONS(27),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_integer] = ACTIONS(133),
    [sym_float] = ACTIONS(131),
    [anon_sym_true] = ACTIONS(131),
    [anon_sym_COLONtrue] = ACTIONS(133),
    [anon_sym_false] = ACTIONS(131),
    [anon_sym_COLONfalse] = ACTIONS(133),
    [sym_atom] = ACTIONS(133),
    [anon_sym_nil] = ACTIONS(131),
    [anon_sym_COLONnil] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [anon_sym_PIPE] = ACTIONS(131),
    [sym_comment] = ACTIONS(27),
  },
  [21] = {
    [aux_sym_tuple_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym_comment] = ACTIONS(27),
  },
  [22] = {
    [sym_list] = STATE(30),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_tail] = STATE(31),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_integer] = ACTIONS(139),
    [sym_float] = ACTIONS(137),
    [anon_sym_true] = ACTIONS(137),
    [anon_sym_COLONtrue] = ACTIONS(139),
    [anon_sym_false] = ACTIONS(137),
    [anon_sym_COLONfalse] = ACTIONS(139),
    [sym_atom] = ACTIONS(139),
    [anon_sym_nil] = ACTIONS(137),
    [anon_sym_COLONnil] = ACTIONS(139),
    [anon_sym_LBRACE] = ACTIONS(137),
    [anon_sym_COMMA] = ACTIONS(137),
    [anon_sym_RBRACE] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [anon_sym_PIPE] = ACTIONS(137),
    [sym_comment] = ACTIONS(27),
  },
  [24] = {
    [anon_sym_COMMA] = ACTIONS(141),
    [anon_sym_RBRACE] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_comment] = ACTIONS(27),
  },
  [25] = {
    [sym__expression] = STATE(24),
    [sym_true] = STATE(24),
    [sym_false] = STATE(24),
    [sym_nil] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_list] = STATE(24),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(117),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [26] = {
    [aux_sym_tuple_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(141),
    [sym_comment] = ACTIONS(27),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_integer] = ACTIONS(150),
    [sym_float] = ACTIONS(148),
    [anon_sym_true] = ACTIONS(148),
    [anon_sym_COLONtrue] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(148),
    [anon_sym_COLONfalse] = ACTIONS(150),
    [sym_atom] = ACTIONS(150),
    [anon_sym_nil] = ACTIONS(148),
    [anon_sym_COLONnil] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_PIPE] = ACTIONS(148),
    [sym_comment] = ACTIONS(27),
  },
  [28] = {
    [sym__expression] = STATE(24),
    [sym_true] = STATE(24),
    [sym_false] = STATE(24),
    [sym_nil] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_list] = STATE(24),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(117),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(152),
    [sym_comment] = ACTIONS(27),
  },
  [29] = {
    [aux_sym_tuple_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_comment] = ACTIONS(27),
  },
  [30] = {
    [anon_sym_RBRACK] = ACTIONS(154),
    [sym_comment] = ACTIONS(27),
  },
  [31] = {
    [anon_sym_RBRACK] = ACTIONS(156),
    [sym_comment] = ACTIONS(27),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(158),
    [sym_integer] = ACTIONS(160),
    [sym_float] = ACTIONS(158),
    [anon_sym_true] = ACTIONS(158),
    [anon_sym_COLONtrue] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(158),
    [anon_sym_COLONfalse] = ACTIONS(160),
    [sym_atom] = ACTIONS(160),
    [anon_sym_nil] = ACTIONS(158),
    [anon_sym_COLONnil] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(158),
    [anon_sym_RBRACE] = ACTIONS(158),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(158),
    [anon_sym_PIPE] = ACTIONS(158),
    [sym_comment] = ACTIONS(27),
  },
  [33] = {
    [sym__expression] = STATE(24),
    [sym_true] = STATE(24),
    [sym_false] = STATE(24),
    [sym_nil] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_list] = STATE(24),
    [sym__simple_list] = STATE(8),
    [sym__head_tail_list] = STATE(8),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(119),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(117),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_integer] = ACTIONS(164),
    [sym_float] = ACTIONS(162),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_COLONtrue] = ACTIONS(164),
    [anon_sym_false] = ACTIONS(162),
    [anon_sym_COLONfalse] = ACTIONS(164),
    [sym_atom] = ACTIONS(164),
    [anon_sym_nil] = ACTIONS(162),
    [anon_sym_COLONnil] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(162),
    [anon_sym_RBRACE] = ACTIONS(162),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(162),
    [anon_sym_PIPE] = ACTIONS(162),
    [sym_comment] = ACTIONS(27),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym_integer] = ACTIONS(168),
    [sym_float] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_COLONtrue] = ACTIONS(168),
    [anon_sym_false] = ACTIONS(166),
    [anon_sym_COLONfalse] = ACTIONS(168),
    [sym_atom] = ACTIONS(168),
    [anon_sym_nil] = ACTIONS(166),
    [anon_sym_COLONnil] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_RBRACE] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(166),
    [anon_sym_PIPE] = ACTIONS(166),
    [sym_comment] = ACTIONS(27),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(9),
  [9] = {.count = 1, .reusable = true}, SHIFT(9),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(4),
  [21] = {.count = 1, .reusable = false}, SHIFT(4),
  [23] = {.count = 1, .reusable = true}, SHIFT(5),
  [25] = {.count = 1, .reusable = true}, SHIFT(6),
  [27] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_nil, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_nil, 1),
  [41] = {.count = 1, .reusable = false}, SHIFT(11),
  [43] = {.count = 1, .reusable = true}, SHIFT(11),
  [45] = {.count = 1, .reusable = true}, SHIFT(10),
  [47] = {.count = 1, .reusable = false}, SHIFT(13),
  [49] = {.count = 1, .reusable = true}, SHIFT(13),
  [51] = {.count = 1, .reusable = true}, SHIFT(12),
  [53] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [55] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [61] = {.count = 1, .reusable = false}, SHIFT(15),
  [63] = {.count = 1, .reusable = true}, SHIFT(15),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [67] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [69] = {.count = 1, .reusable = true}, SHIFT(16),
  [71] = {.count = 1, .reusable = true}, SHIFT(17),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 2),
  [77] = {.count = 1, .reusable = true}, SHIFT(19),
  [79] = {.count = 1, .reusable = true}, SHIFT(20),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [83] = {.count = 1, .reusable = true}, SHIFT(22),
  [85] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [87] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [90] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(15),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [96] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [99] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [102] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [105] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [108] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [111] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [117] = {.count = 1, .reusable = false}, SHIFT(24),
  [119] = {.count = 1, .reusable = true}, SHIFT(24),
  [121] = {.count = 1, .reusable = true}, SHIFT(23),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [127] = {.count = 1, .reusable = true}, SHIFT(25),
  [129] = {.count = 1, .reusable = true}, SHIFT(27),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [135] = {.count = 1, .reusable = true}, SHIFT(28),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [141] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(32),
  [145] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(33),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [152] = {.count = 1, .reusable = true}, SHIFT(34),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [156] = {.count = 1, .reusable = true}, SHIFT(35),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
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
