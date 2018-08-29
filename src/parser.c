#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 41
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  anon_sym_SQUOTE = 10,
  aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 11,
  anon_sym_LBRACE = 12,
  anon_sym_COMMA = 13,
  anon_sym_RBRACE = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_PIPE = 17,
  sym_comment = 18,
  sym_program = 19,
  sym__expression = 20,
  sym_true = 21,
  sym_false = 22,
  sym_nil = 23,
  sym_charlist = 24,
  sym_tuple = 25,
  sym_list = 26,
  sym__simple_list = 27,
  sym__head_tail_list = 28,
  sym_head = 29,
  sym_tail = 30,
  aux_sym_program_repeat1 = 31,
  aux_sym_charlist_repeat1 = 32,
  aux_sym_tuple_repeat1 = 33,
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
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = "/\\\\'|[^']/",
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
  [sym_charlist] = "charlist",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym__simple_list] = "_simple_list",
  [sym__head_tail_list] = "_head_tail_list",
  [sym_head] = "head",
  [sym_tail] = "tail",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_charlist_repeat1] = "charlist_repeat1",
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = {
    .visible = false,
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
  [sym_charlist] = {
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
  [aux_sym_charlist_repeat1] = {
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
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(39);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 'n')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '|')
        ADVANCE(54);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
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
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '_')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'o')
        ADVANCE(15);
      if (lookahead == 'x')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_')
        ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(10);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '_')
        ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(13);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '\"')
        ADVANCE(20);
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead == 'f')
        ADVANCE(24);
      if (lookahead == 'n')
        ADVANCE(31);
      if (lookahead == 't')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '\"')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\"')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '\'')
        ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'a')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'l')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 's')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'i')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'l')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'r')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'u')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (lookahead == 'e')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(25);
      if (lookahead == '?')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(30);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      if (lookahead == 'a')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'l')
        ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 's')
        ADVANCE(44);
      END_STATE();
    case 44:
      if (lookahead == 'e')
        ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 46:
      if (lookahead == 'i')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'l')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 49:
      if (lookahead == 'r')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'u')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 56:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(57);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 'n')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(56);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == '\n')
        SKIP(56);
      END_STATE();
    case 58:
      if (lookahead == '#')
        ADVANCE(59);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(61);
      if (lookahead != 0)
        ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 62:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(63);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 'n')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 63:
      if (lookahead == '\n')
        SKIP(62);
      END_STATE();
    case 64:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        SKIP(65);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == 'f')
        ADVANCE(41);
      if (lookahead == 'n')
        ADVANCE(46);
      if (lookahead == 't')
        ADVANCE(49);
      if (lookahead == '{')
        ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(64);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 65:
      if (lookahead == '\n')
        SKIP(64);
      END_STATE();
    case 66:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(66);
      END_STATE();
    case 67:
      if (lookahead == '\n')
        SKIP(66);
      END_STATE();
    case 68:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(69);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(68);
      END_STATE();
    case 69:
      if (lookahead == '\n')
        SKIP(68);
      END_STATE();
    case 70:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(71);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == '|')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(70);
      END_STATE();
    case 71:
      if (lookahead == '\n')
        SKIP(70);
      END_STATE();
    case 72:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(73);
      if (lookahead == ']')
        ADVANCE(40);
      if (lookahead == '}')
        ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(72);
      END_STATE();
    case 73:
      if (lookahead == '\n')
        SKIP(72);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 68},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 70},
  [17] = {.lex_state = 70},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 58},
  [21] = {.lex_state = 62},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 68},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 70},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 62},
  [31] = {.lex_state = 68},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 64},
  [34] = {.lex_state = 70},
  [35] = {.lex_state = 64},
  [36] = {.lex_state = 64},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 56},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
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
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(8),
    [sym__expression] = STATE(10),
    [sym_true] = STATE(10),
    [sym_false] = STATE(10),
    [sym_nil] = STATE(10),
    [sym_charlist] = STATE(10),
    [sym_tuple] = STATE(10),
    [sym_list] = STATE(10),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [aux_sym_program_repeat1] = STATE(10),
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
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_integer] = ACTIONS(33),
    [sym_float] = ACTIONS(31),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_COLONtrue] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_COLONfalse] = ACTIONS(33),
    [sym_atom] = ACTIONS(33),
    [anon_sym_nil] = ACTIONS(31),
    [anon_sym_COLONnil] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(31),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_COMMA] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(31),
    [sym_comment] = ACTIONS(29),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_COLONtrue] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_COLONfalse] = ACTIONS(37),
    [sym_atom] = ACTIONS(37),
    [anon_sym_nil] = ACTIONS(35),
    [anon_sym_COLONnil] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [sym_comment] = ACTIONS(29),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_COLONtrue] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_COLONfalse] = ACTIONS(41),
    [sym_atom] = ACTIONS(41),
    [anon_sym_nil] = ACTIONS(39),
    [anon_sym_COLONnil] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_comment] = ACTIONS(29),
  },
  [5] = {
    [aux_sym_charlist_repeat1] = STATE(12),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(45),
    [sym_comment] = ACTIONS(47),
  },
  [6] = {
    [sym__expression] = STATE(14),
    [sym_true] = STATE(14),
    [sym_false] = STATE(14),
    [sym_nil] = STATE(14),
    [sym_charlist] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_list] = STATE(14),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(51),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(49),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [7] = {
    [sym__expression] = STATE(16),
    [sym_true] = STATE(16),
    [sym_false] = STATE(16),
    [sym_nil] = STATE(16),
    [sym_charlist] = STATE(16),
    [sym_tuple] = STATE(16),
    [sym_list] = STATE(16),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_head] = STATE(17),
    [sym_integer] = ACTIONS(55),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(55),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(59),
    [sym_comment] = ACTIONS(29),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_comment] = ACTIONS(29),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_integer] = ACTIONS(65),
    [sym_float] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(63),
    [anon_sym_COLONtrue] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(63),
    [anon_sym_COLONfalse] = ACTIONS(65),
    [sym_atom] = ACTIONS(65),
    [anon_sym_nil] = ACTIONS(63),
    [anon_sym_COLONnil] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(63),
    [anon_sym_COMMA] = ACTIONS(63),
    [anon_sym_RBRACE] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [anon_sym_PIPE] = ACTIONS(63),
    [sym_comment] = ACTIONS(29),
  },
  [10] = {
    [sym__expression] = STATE(18),
    [sym_true] = STATE(18),
    [sym_false] = STATE(18),
    [sym_nil] = STATE(18),
    [sym_charlist] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_list] = STATE(18),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_integer] = ACTIONS(69),
    [sym_float] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(69),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [11] = {
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
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [sym_comment] = ACTIONS(29),
  },
  [12] = {
    [aux_sym_charlist_repeat1] = STATE(20),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(79),
    [sym_comment] = ACTIONS(47),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_integer] = ACTIONS(83),
    [sym_float] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_COLONtrue] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_COLONfalse] = ACTIONS(83),
    [sym_atom] = ACTIONS(83),
    [anon_sym_nil] = ACTIONS(81),
    [anon_sym_COLONnil] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_comment] = ACTIONS(29),
  },
  [14] = {
    [aux_sym_tuple_repeat1] = STATE(23),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(87),
    [sym_comment] = ACTIONS(29),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_COLONtrue] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_COLONfalse] = ACTIONS(91),
    [sym_atom] = ACTIONS(91),
    [anon_sym_nil] = ACTIONS(89),
    [anon_sym_COLONnil] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_comment] = ACTIONS(29),
  },
  [16] = {
    [aux_sym_tuple_repeat1] = STATE(26),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_comment] = ACTIONS(29),
  },
  [17] = {
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_comment] = ACTIONS(29),
  },
  [18] = {
    [sym__expression] = STATE(18),
    [sym_true] = STATE(18),
    [sym_false] = STATE(18),
    [sym_nil] = STATE(18),
    [sym_charlist] = STATE(18),
    [sym_tuple] = STATE(18),
    [sym_list] = STATE(18),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [aux_sym_program_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_integer] = ACTIONS(103),
    [sym_float] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_COLONtrue] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_COLONfalse] = ACTIONS(118),
    [sym_atom] = ACTIONS(103),
    [anon_sym_nil] = ACTIONS(121),
    [anon_sym_COLONnil] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym_comment] = ACTIONS(29),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [sym_integer] = ACTIONS(138),
    [sym_float] = ACTIONS(136),
    [anon_sym_true] = ACTIONS(136),
    [anon_sym_COLONtrue] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(136),
    [anon_sym_COLONfalse] = ACTIONS(138),
    [sym_atom] = ACTIONS(138),
    [anon_sym_nil] = ACTIONS(136),
    [anon_sym_COLONnil] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(136),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [sym_comment] = ACTIONS(29),
  },
  [20] = {
    [aux_sym_charlist_repeat1] = STATE(20),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(47),
  },
  [21] = {
    [sym__expression] = STATE(29),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym_nil] = STATE(29),
    [sym_charlist] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_list] = STATE(29),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym_integer] = ACTIONS(153),
    [sym_float] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(151),
    [anon_sym_COLONtrue] = ACTIONS(153),
    [anon_sym_false] = ACTIONS(151),
    [anon_sym_COLONfalse] = ACTIONS(153),
    [sym_atom] = ACTIONS(153),
    [anon_sym_nil] = ACTIONS(151),
    [anon_sym_COLONnil] = ACTIONS(153),
    [anon_sym_SQUOTE] = ACTIONS(151),
    [anon_sym_LBRACE] = ACTIONS(151),
    [anon_sym_COMMA] = ACTIONS(151),
    [anon_sym_RBRACE] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_PIPE] = ACTIONS(151),
    [sym_comment] = ACTIONS(29),
  },
  [23] = {
    [aux_sym_tuple_repeat1] = STATE(31),
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_RBRACE] = ACTIONS(149),
    [sym_comment] = ACTIONS(29),
  },
  [24] = {
    [sym__expression] = STATE(29),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym_nil] = STATE(29),
    [sym_charlist] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_list] = STATE(29),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_comment] = ACTIONS(29),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym_integer] = ACTIONS(161),
    [sym_float] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(159),
    [anon_sym_COLONtrue] = ACTIONS(161),
    [anon_sym_false] = ACTIONS(159),
    [anon_sym_COLONfalse] = ACTIONS(161),
    [sym_atom] = ACTIONS(161),
    [anon_sym_nil] = ACTIONS(159),
    [anon_sym_COLONnil] = ACTIONS(161),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [anon_sym_PIPE] = ACTIONS(159),
    [sym_comment] = ACTIONS(29),
  },
  [26] = {
    [aux_sym_tuple_repeat1] = STATE(34),
    [anon_sym_COMMA] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_comment] = ACTIONS(29),
  },
  [27] = {
    [sym_list] = STATE(35),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_tail] = STATE(36),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_integer] = ACTIONS(167),
    [sym_float] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_COLONtrue] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_COLONfalse] = ACTIONS(167),
    [sym_atom] = ACTIONS(167),
    [anon_sym_nil] = ACTIONS(165),
    [anon_sym_COLONnil] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [sym_comment] = ACTIONS(29),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_comment] = ACTIONS(29),
  },
  [30] = {
    [sym__expression] = STATE(29),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym_nil] = STATE(29),
    [sym_charlist] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_list] = STATE(29),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [31] = {
    [aux_sym_tuple_repeat1] = STATE(31),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(169),
    [sym_comment] = ACTIONS(29),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(176),
    [sym_integer] = ACTIONS(178),
    [sym_float] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(176),
    [anon_sym_COLONtrue] = ACTIONS(178),
    [anon_sym_false] = ACTIONS(176),
    [anon_sym_COLONfalse] = ACTIONS(178),
    [sym_atom] = ACTIONS(178),
    [anon_sym_nil] = ACTIONS(176),
    [anon_sym_COLONnil] = ACTIONS(178),
    [anon_sym_SQUOTE] = ACTIONS(176),
    [anon_sym_LBRACE] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(176),
    [anon_sym_RBRACE] = ACTIONS(176),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(176),
    [anon_sym_PIPE] = ACTIONS(176),
    [sym_comment] = ACTIONS(29),
  },
  [33] = {
    [sym__expression] = STATE(29),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym_nil] = STATE(29),
    [sym_charlist] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_list] = STATE(29),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(180),
    [sym_comment] = ACTIONS(29),
  },
  [34] = {
    [aux_sym_tuple_repeat1] = STATE(34),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_comment] = ACTIONS(29),
  },
  [35] = {
    [anon_sym_RBRACK] = ACTIONS(182),
    [sym_comment] = ACTIONS(29),
  },
  [36] = {
    [anon_sym_RBRACK] = ACTIONS(184),
    [sym_comment] = ACTIONS(29),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym_integer] = ACTIONS(188),
    [sym_float] = ACTIONS(186),
    [anon_sym_true] = ACTIONS(186),
    [anon_sym_COLONtrue] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(186),
    [anon_sym_COLONfalse] = ACTIONS(188),
    [sym_atom] = ACTIONS(188),
    [anon_sym_nil] = ACTIONS(186),
    [anon_sym_COLONnil] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(186),
    [anon_sym_LBRACE] = ACTIONS(186),
    [anon_sym_COMMA] = ACTIONS(186),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(186),
    [anon_sym_RBRACK] = ACTIONS(186),
    [anon_sym_PIPE] = ACTIONS(186),
    [sym_comment] = ACTIONS(29),
  },
  [38] = {
    [sym__expression] = STATE(29),
    [sym_true] = STATE(29),
    [sym_false] = STATE(29),
    [sym_nil] = STATE(29),
    [sym_charlist] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_list] = STATE(29),
    [sym__simple_list] = STATE(9),
    [sym__head_tail_list] = STATE(9),
    [sym_integer] = ACTIONS(145),
    [sym_float] = ACTIONS(147),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [sym_atom] = ACTIONS(145),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_COLONnil] = ACTIONS(21),
    [anon_sym_SQUOTE] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_comment] = ACTIONS(29),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_integer] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_true] = ACTIONS(190),
    [anon_sym_COLONtrue] = ACTIONS(192),
    [anon_sym_false] = ACTIONS(190),
    [anon_sym_COLONfalse] = ACTIONS(192),
    [sym_atom] = ACTIONS(192),
    [anon_sym_nil] = ACTIONS(190),
    [anon_sym_COLONnil] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [sym_comment] = ACTIONS(29),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym_integer] = ACTIONS(196),
    [sym_float] = ACTIONS(194),
    [anon_sym_true] = ACTIONS(194),
    [anon_sym_COLONtrue] = ACTIONS(196),
    [anon_sym_false] = ACTIONS(194),
    [anon_sym_COLONfalse] = ACTIONS(196),
    [sym_atom] = ACTIONS(196),
    [anon_sym_nil] = ACTIONS(194),
    [anon_sym_COLONnil] = ACTIONS(196),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_COMMA] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [sym_comment] = ACTIONS(29),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(10),
  [9] = {.count = 1, .reusable = true}, SHIFT(10),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = true}, SHIFT(4),
  [21] = {.count = 1, .reusable = false}, SHIFT(4),
  [23] = {.count = 1, .reusable = true}, SHIFT(5),
  [25] = {.count = 1, .reusable = true}, SHIFT(6),
  [27] = {.count = 1, .reusable = true}, SHIFT(7),
  [29] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [31] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [33] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_nil, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_nil, 1),
  [43] = {.count = 1, .reusable = false}, SHIFT(11),
  [45] = {.count = 1, .reusable = false}, SHIFT(12),
  [47] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [49] = {.count = 1, .reusable = false}, SHIFT(14),
  [51] = {.count = 1, .reusable = true}, SHIFT(14),
  [53] = {.count = 1, .reusable = true}, SHIFT(13),
  [55] = {.count = 1, .reusable = false}, SHIFT(16),
  [57] = {.count = 1, .reusable = true}, SHIFT(16),
  [59] = {.count = 1, .reusable = true}, SHIFT(15),
  [61] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [65] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [69] = {.count = 1, .reusable = false}, SHIFT(18),
  [71] = {.count = 1, .reusable = true}, SHIFT(18),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [77] = {.count = 1, .reusable = false}, SHIFT(19),
  [79] = {.count = 1, .reusable = false}, SHIFT(20),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [85] = {.count = 1, .reusable = true}, SHIFT(21),
  [87] = {.count = 1, .reusable = true}, SHIFT(22),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(24),
  [95] = {.count = 1, .reusable = true}, SHIFT(25),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [99] = {.count = 1, .reusable = true}, SHIFT(27),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [103] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [106] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(18),
  [109] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [112] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [115] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [124] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [127] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [130] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [133] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [142] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(20),
  [145] = {.count = 1, .reusable = false}, SHIFT(29),
  [147] = {.count = 1, .reusable = true}, SHIFT(29),
  [149] = {.count = 1, .reusable = true}, SHIFT(28),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [155] = {.count = 1, .reusable = true}, SHIFT(30),
  [157] = {.count = 1, .reusable = true}, SHIFT(32),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [163] = {.count = 1, .reusable = true}, SHIFT(33),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(37),
  [173] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(38),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [180] = {.count = 1, .reusable = true}, SHIFT(39),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [184] = {.count = 1, .reusable = true}, SHIFT(40),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
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
