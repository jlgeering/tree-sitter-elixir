#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 42
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_integer = 1,
  sym_float = 2,
  anon_sym_true = 3,
  anon_sym_COLONtrue = 4,
  anon_sym_false = 5,
  anon_sym_COLONfalse = 6,
  aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH = 7,
  anon_sym_COLON_BANG = 8,
  anon_sym_COLON_BANG_EQ = 9,
  anon_sym_COLON_BANG_EQ_EQ = 10,
  anon_sym_COLON_AMP = 11,
  anon_sym_COLON_AMP_AMP = 12,
  anon_sym_COLON_AMP_AMP_AMP = 13,
  anon_sym_COLON_STAR = 14,
  anon_sym_COLON_PLUS = 15,
  anon_sym_COLON_PLUS_PLUS = 16,
  anon_sym_COLON_DASH = 17,
  anon_sym_COLON_DASH_DASH = 18,
  anon_sym_COLON_DOT = 19,
  anon_sym_COLON_DOT_DOT = 20,
  anon_sym_COLON_SLASH = 21,
  anon_sym_COLON_COLON_COLON = 22,
  anon_sym_COLON_LT = 23,
  anon_sym_COLON_LT_DASH = 24,
  anon_sym_COLON_LT_LT_LT = 25,
  anon_sym_COLON_LT_LT_TILDE = 26,
  anon_sym_COLON_LT_EQ = 27,
  anon_sym_COLON_LT_GT = 28,
  anon_sym_COLON_LT_PIPE_GT = 29,
  anon_sym_COLON_LT_TILDE = 30,
  anon_sym_COLON_LT_TILDE_GT = 31,
  anon_sym_COLON_EQ = 32,
  anon_sym_COLON_EQ_EQ = 33,
  anon_sym_COLON_EQ_EQ_EQ = 34,
  anon_sym_COLON_EQ_GT = 35,
  anon_sym_COLON_EQ_TILDE = 36,
  anon_sym_COLON_GT = 37,
  anon_sym_COLON_GT_EQ = 38,
  anon_sym_COLON_GT_GT_GT = 39,
  anon_sym_COLON_AT = 40,
  anon_sym_COLON_BSLASH_BSLASH = 41,
  anon_sym_COLON_CARET = 42,
  anon_sym_COLON_PIPE = 43,
  anon_sym_COLON_PIPE_GT = 44,
  anon_sym_COLON_PIPE_PIPE = 45,
  anon_sym_COLON_PIPE_PIPE_PIPE = 46,
  anon_sym_COLON_TILDE_GT = 47,
  anon_sym_COLON_TILDE_GT_GT = 48,
  anon_sym_COLON_TILDE_TILDE_TILDE = 49,
  anon_sym_nil = 50,
  anon_sym_COLONnil = 51,
  anon_sym_SQUOTE = 52,
  aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH = 53,
  anon_sym_LBRACE = 54,
  anon_sym_COMMA = 55,
  anon_sym_RBRACE = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  anon_sym_PIPE = 59,
  sym_comment = 60,
  sym_program = 61,
  sym__expression = 62,
  sym_true = 63,
  sym_false = 64,
  sym_atom = 65,
  sym__operator_atom = 66,
  sym_nil = 67,
  sym_charlist = 68,
  sym_tuple = 69,
  sym_list = 70,
  sym__simple_list = 71,
  sym__head_tail_list = 72,
  sym_head = 73,
  sym_tail = 74,
  aux_sym_program_repeat1 = 75,
  aux_sym_charlist_repeat1 = 76,
  aux_sym_tuple_repeat1 = 77,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_COLONtrue] = ":true",
  [anon_sym_false] = "false",
  [anon_sym_COLONfalse] = ":false",
  [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = "/:\\w([@\\w])*(!|\\?)?|:'.*'|:\".*\"/",
  [anon_sym_COLON_BANG] = ":!",
  [anon_sym_COLON_BANG_EQ] = ":!=",
  [anon_sym_COLON_BANG_EQ_EQ] = ":!==",
  [anon_sym_COLON_AMP] = ":&",
  [anon_sym_COLON_AMP_AMP] = ":&&",
  [anon_sym_COLON_AMP_AMP_AMP] = ":&&&",
  [anon_sym_COLON_STAR] = ":*",
  [anon_sym_COLON_PLUS] = ":+",
  [anon_sym_COLON_PLUS_PLUS] = ":++",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_COLON_DASH_DASH] = ":--",
  [anon_sym_COLON_DOT] = ":.",
  [anon_sym_COLON_DOT_DOT] = ":..",
  [anon_sym_COLON_SLASH] = ":/",
  [anon_sym_COLON_COLON_COLON] = ":::",
  [anon_sym_COLON_LT] = ":<",
  [anon_sym_COLON_LT_DASH] = ":<-",
  [anon_sym_COLON_LT_LT_LT] = ":<<<",
  [anon_sym_COLON_LT_LT_TILDE] = ":<<~",
  [anon_sym_COLON_LT_EQ] = ":<=",
  [anon_sym_COLON_LT_GT] = ":<>",
  [anon_sym_COLON_LT_PIPE_GT] = ":<|>",
  [anon_sym_COLON_LT_TILDE] = ":<~",
  [anon_sym_COLON_LT_TILDE_GT] = ":<~>",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_COLON_EQ_EQ] = ":==",
  [anon_sym_COLON_EQ_EQ_EQ] = ":===",
  [anon_sym_COLON_EQ_GT] = ":=>",
  [anon_sym_COLON_EQ_TILDE] = ":=~",
  [anon_sym_COLON_GT] = ":>",
  [anon_sym_COLON_GT_EQ] = ":>=",
  [anon_sym_COLON_GT_GT_GT] = ":>>>",
  [anon_sym_COLON_AT] = ":@",
  [anon_sym_COLON_BSLASH_BSLASH] = ":\\\\",
  [anon_sym_COLON_CARET] = ":^",
  [anon_sym_COLON_PIPE] = ":|",
  [anon_sym_COLON_PIPE_GT] = ":|>",
  [anon_sym_COLON_PIPE_PIPE] = ":||",
  [anon_sym_COLON_PIPE_PIPE_PIPE] = ":|||",
  [anon_sym_COLON_TILDE_GT] = ":~>",
  [anon_sym_COLON_TILDE_GT_GT] = ":~>>",
  [anon_sym_COLON_TILDE_TILDE_TILDE] = ":~~~",
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
  [sym_atom] = "atom",
  [sym__operator_atom] = "_operator_atom",
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
  [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AMP_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_LT_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PIPE_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_TILDE_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_TILDE_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_TILDE_TILDE_TILDE] = {
    .visible = true,
    .named = false,
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
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__operator_atom] = {
    .visible = false,
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
        ADVANCE(87);
      if (lookahead == '\\')
        SKIP(88);
      if (lookahead == ']')
        ADVANCE(89);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'n')
        ADVANCE(95);
      if (lookahead == 't')
        ADVANCE(98);
      if (lookahead == '{')
        ADVANCE(102);
      if (lookahead == '|')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(104);
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
      if (lookahead == '!')
        ADVANCE(20);
      if (lookahead == '\"')
        ADVANCE(23);
      if (lookahead == '&')
        ADVANCE(25);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '*')
        ADVANCE(30);
      if (lookahead == '+')
        ADVANCE(31);
      if (lookahead == '-')
        ADVANCE(33);
      if (lookahead == '.')
        ADVANCE(35);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(38);
      if (lookahead == '<')
        ADVANCE(40);
      if (lookahead == '=')
        ADVANCE(51);
      if (lookahead == '>')
        ADVANCE(56);
      if (lookahead == '@')
        ADVANCE(60);
      if (lookahead == '\\')
        ADVANCE(61);
      if (lookahead == '^')
        ADVANCE(63);
      if (lookahead == 'f')
        ADVANCE(64);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 't')
        ADVANCE(74);
      if (lookahead == '|')
        ADVANCE(78);
      if (lookahead == '~')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_BANG);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ);
      if (lookahead == '=')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON_BANG_EQ_EQ);
      END_STATE();
    case 23:
      if (lookahead == '\"')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\"')
        ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_AMP);
      if (lookahead == '&')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP);
      if (lookahead == '&')
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON_AMP_AMP_AMP);
      END_STATE();
    case 28:
      if (lookahead == '\'')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '\'')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_STAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      if (lookahead == '+')
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      if (lookahead == '-')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON_DASH_DASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_DOT);
      if (lookahead == '.')
        ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_SLASH);
      END_STATE();
    case 38:
      if (lookahead == ':')
        ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON_COLON_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON_LT);
      if (lookahead == '-')
        ADVANCE(41);
      if (lookahead == '<')
        ADVANCE(42);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '|')
        ADVANCE(47);
      if (lookahead == '~')
        ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_LT_DASH);
      END_STATE();
    case 42:
      if (lookahead == '<')
        ADVANCE(43);
      if (lookahead == '~')
        ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_LT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON_LT_LT_TILDE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COLON_LT_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COLON_LT_GT);
      END_STATE();
    case 47:
      if (lookahead == '>')
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON_LT_PIPE_GT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE);
      if (lookahead == '>')
        ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON_LT_TILDE_GT);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      if (lookahead == '=')
        ADVANCE(52);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '~')
        ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ);
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_EQ_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON_EQ_TILDE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_GT);
      if (lookahead == '=')
        ADVANCE(57);
      if (lookahead == '>')
        ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COLON_GT_EQ);
      END_STATE();
    case 58:
      if (lookahead == '>')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COLON_GT_GT_GT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON_AT);
      END_STATE();
    case 61:
      if (lookahead == '\\')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON_BSLASH_BSLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON_CARET);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'a')
        ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 's')
        ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'e')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLONfalse);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'i')
        ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'l')
        ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COLONnil);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'r')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'u')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (lookahead == 'e')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLONtrue);
      if (lookahead == '!')
        ADVANCE(65);
      if (lookahead == '?')
        ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(70);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE);
      if (lookahead == '>')
        ADVANCE(79);
      if (lookahead == '|')
        ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE);
      if (lookahead == '|')
        ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON_PIPE_PIPE_PIPE);
      END_STATE();
    case 82:
      if (lookahead == '>')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT);
      if (lookahead == '>')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_GT_GT);
      END_STATE();
    case 85:
      if (lookahead == '~')
        ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON_TILDE_TILDE_TILDE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 88:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      if (lookahead == 'a')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'l')
        ADVANCE(92);
      END_STATE();
    case 92:
      if (lookahead == 's')
        ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 95:
      if (lookahead == 'i')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 'l')
        ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 98:
      if (lookahead == 'r')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'u')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'e')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 105:
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
        ADVANCE(87);
      if (lookahead == '\\')
        SKIP(106);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'n')
        ADVANCE(95);
      if (lookahead == 't')
        ADVANCE(98);
      if (lookahead == '{')
        ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(105);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 106:
      if (lookahead == '\n')
        SKIP(105);
      END_STATE();
    case 107:
      if (lookahead == '#')
        ADVANCE(108);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(110);
      if (lookahead != 0)
        ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 111:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(87);
      if (lookahead == '\\')
        SKIP(112);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'n')
        ADVANCE(95);
      if (lookahead == 't')
        ADVANCE(98);
      if (lookahead == '{')
        ADVANCE(102);
      if (lookahead == '}')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(111);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        SKIP(111);
      END_STATE();
    case 113:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(87);
      if (lookahead == '\\')
        SKIP(114);
      if (lookahead == ']')
        ADVANCE(89);
      if (lookahead == 'f')
        ADVANCE(90);
      if (lookahead == 'n')
        ADVANCE(95);
      if (lookahead == 't')
        ADVANCE(98);
      if (lookahead == '{')
        ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(113);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 114:
      if (lookahead == '\n')
        SKIP(113);
      END_STATE();
    case 115:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(115);
      END_STATE();
    case 116:
      if (lookahead == '\n')
        SKIP(115);
      END_STATE();
    case 117:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(118);
      if (lookahead == '}')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(117);
      END_STATE();
    case 118:
      if (lookahead == '\n')
        SKIP(117);
      END_STATE();
    case 119:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(120);
      if (lookahead == ']')
        ADVANCE(89);
      if (lookahead == '|')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      END_STATE();
    case 120:
      if (lookahead == '\n')
        SKIP(119);
      END_STATE();
    case 121:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(122);
      if (lookahead == ']')
        ADVANCE(89);
      if (lookahead == '}')
        ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(121);
      END_STATE();
    case 122:
      if (lookahead == '\n')
        SKIP(121);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 105},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 107},
  [7] = {.lex_state = 111},
  [8] = {.lex_state = 113},
  [9] = {.lex_state = 115},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 105},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 107},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 117},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 119},
  [18] = {.lex_state = 119},
  [19] = {.lex_state = 105},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 107},
  [22] = {.lex_state = 111},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 117},
  [25] = {.lex_state = 113},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 119},
  [28] = {.lex_state = 105},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 121},
  [31] = {.lex_state = 111},
  [32] = {.lex_state = 117},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 113},
  [35] = {.lex_state = 119},
  [36] = {.lex_state = 113},
  [37] = {.lex_state = 113},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 105},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
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
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(3),
    [anon_sym_COLON_BANG] = ACTIONS(3),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(3),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_AMP] = ACTIONS(3),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(3),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(1),
    [anon_sym_COLON_STAR] = ACTIONS(1),
    [anon_sym_COLON_PLUS] = ACTIONS(3),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(3),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(1),
    [anon_sym_COLON_DOT] = ACTIONS(3),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON_SLASH] = ACTIONS(1),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_LT] = ACTIONS(3),
    [anon_sym_COLON_LT_DASH] = ACTIONS(1),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(1),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(1),
    [anon_sym_COLON_LT_EQ] = ACTIONS(1),
    [anon_sym_COLON_LT_GT] = ACTIONS(1),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(1),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(3),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(3),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(3),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ_GT] = ACTIONS(1),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(1),
    [anon_sym_COLON_GT] = ACTIONS(3),
    [anon_sym_COLON_GT_EQ] = ACTIONS(1),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_AT] = ACTIONS(1),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_COLON_CARET] = ACTIONS(1),
    [anon_sym_COLON_PIPE] = ACTIONS(3),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(1),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(3),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(3),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(1),
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
    [sym_program] = STATE(9),
    [sym__expression] = STATE(11),
    [sym_true] = STATE(11),
    [sym_false] = STATE(11),
    [sym_atom] = STATE(11),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(11),
    [sym_charlist] = STATE(11),
    [sym_tuple] = STATE(11),
    [sym_list] = STATE(11),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [aux_sym_program_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_integer] = ACTIONS(7),
    [sym_float] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(35),
    [sym_integer] = ACTIONS(37),
    [sym_float] = ACTIONS(35),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_COLONtrue] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(35),
    [anon_sym_COLONfalse] = ACTIONS(37),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(37),
    [anon_sym_COLON_BANG] = ACTIONS(37),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(37),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(35),
    [anon_sym_COLON_AMP] = ACTIONS(37),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(37),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(35),
    [anon_sym_COLON_STAR] = ACTIONS(35),
    [anon_sym_COLON_PLUS] = ACTIONS(37),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(35),
    [anon_sym_COLON_DASH] = ACTIONS(37),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(35),
    [anon_sym_COLON_DOT] = ACTIONS(37),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(35),
    [anon_sym_COLON_SLASH] = ACTIONS(35),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(35),
    [anon_sym_COLON_LT] = ACTIONS(37),
    [anon_sym_COLON_LT_DASH] = ACTIONS(35),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(35),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(35),
    [anon_sym_COLON_LT_EQ] = ACTIONS(35),
    [anon_sym_COLON_LT_GT] = ACTIONS(35),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(35),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(37),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ] = ACTIONS(37),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(37),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(35),
    [anon_sym_COLON_EQ_GT] = ACTIONS(35),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(35),
    [anon_sym_COLON_GT] = ACTIONS(37),
    [anon_sym_COLON_GT_EQ] = ACTIONS(35),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(35),
    [anon_sym_COLON_AT] = ACTIONS(35),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(35),
    [anon_sym_COLON_CARET] = ACTIONS(35),
    [anon_sym_COLON_PIPE] = ACTIONS(37),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(35),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(35),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(37),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(35),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(35),
    [anon_sym_nil] = ACTIONS(35),
    [anon_sym_COLONnil] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [anon_sym_LBRACE] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
    [anon_sym_RBRACE] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [sym_comment] = ACTIONS(33),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_integer] = ACTIONS(41),
    [sym_float] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(39),
    [anon_sym_COLONtrue] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(39),
    [anon_sym_COLONfalse] = ACTIONS(41),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(41),
    [anon_sym_COLON_BANG] = ACTIONS(41),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(41),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(39),
    [anon_sym_COLON_AMP] = ACTIONS(41),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(41),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(39),
    [anon_sym_COLON_STAR] = ACTIONS(39),
    [anon_sym_COLON_PLUS] = ACTIONS(41),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(39),
    [anon_sym_COLON_DASH] = ACTIONS(41),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(39),
    [anon_sym_COLON_DOT] = ACTIONS(41),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(39),
    [anon_sym_COLON_SLASH] = ACTIONS(39),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(39),
    [anon_sym_COLON_LT] = ACTIONS(41),
    [anon_sym_COLON_LT_DASH] = ACTIONS(39),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(39),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(39),
    [anon_sym_COLON_LT_EQ] = ACTIONS(39),
    [anon_sym_COLON_LT_GT] = ACTIONS(39),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(39),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(41),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(39),
    [anon_sym_COLON_EQ] = ACTIONS(41),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(41),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(39),
    [anon_sym_COLON_EQ_GT] = ACTIONS(39),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(39),
    [anon_sym_COLON_GT] = ACTIONS(41),
    [anon_sym_COLON_GT_EQ] = ACTIONS(39),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(39),
    [anon_sym_COLON_AT] = ACTIONS(39),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(39),
    [anon_sym_COLON_CARET] = ACTIONS(39),
    [anon_sym_COLON_PIPE] = ACTIONS(41),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(39),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(41),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(39),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(39),
    [anon_sym_nil] = ACTIONS(39),
    [anon_sym_COLONnil] = ACTIONS(41),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [sym_comment] = ACTIONS(33),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(43),
    [sym_integer] = ACTIONS(45),
    [sym_float] = ACTIONS(43),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_COLONtrue] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_COLONfalse] = ACTIONS(45),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_COLON_BANG] = ACTIONS(45),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(45),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(43),
    [anon_sym_COLON_AMP] = ACTIONS(45),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(45),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(43),
    [anon_sym_COLON_STAR] = ACTIONS(43),
    [anon_sym_COLON_PLUS] = ACTIONS(45),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(43),
    [anon_sym_COLON_DASH] = ACTIONS(45),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(43),
    [anon_sym_COLON_DOT] = ACTIONS(45),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(43),
    [anon_sym_COLON_SLASH] = ACTIONS(43),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(43),
    [anon_sym_COLON_LT] = ACTIONS(45),
    [anon_sym_COLON_LT_DASH] = ACTIONS(43),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(43),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(43),
    [anon_sym_COLON_LT_EQ] = ACTIONS(43),
    [anon_sym_COLON_LT_GT] = ACTIONS(43),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(43),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(45),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(43),
    [anon_sym_COLON_EQ] = ACTIONS(45),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(45),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(43),
    [anon_sym_COLON_EQ_GT] = ACTIONS(43),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(43),
    [anon_sym_COLON_GT] = ACTIONS(45),
    [anon_sym_COLON_GT_EQ] = ACTIONS(43),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(43),
    [anon_sym_COLON_AT] = ACTIONS(43),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(43),
    [anon_sym_COLON_CARET] = ACTIONS(43),
    [anon_sym_COLON_PIPE] = ACTIONS(45),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(43),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(43),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(45),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(43),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(43),
    [anon_sym_nil] = ACTIONS(43),
    [anon_sym_COLONnil] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(43),
    [anon_sym_LBRACE] = ACTIONS(43),
    [anon_sym_COMMA] = ACTIONS(43),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(43),
    [sym_comment] = ACTIONS(33),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_integer] = ACTIONS(49),
    [sym_float] = ACTIONS(47),
    [anon_sym_true] = ACTIONS(47),
    [anon_sym_COLONtrue] = ACTIONS(49),
    [anon_sym_false] = ACTIONS(47),
    [anon_sym_COLONfalse] = ACTIONS(49),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(49),
    [anon_sym_COLON_BANG] = ACTIONS(49),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(49),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(47),
    [anon_sym_COLON_AMP] = ACTIONS(49),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(49),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(47),
    [anon_sym_COLON_STAR] = ACTIONS(47),
    [anon_sym_COLON_PLUS] = ACTIONS(49),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(47),
    [anon_sym_COLON_DASH] = ACTIONS(49),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(47),
    [anon_sym_COLON_DOT] = ACTIONS(49),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(47),
    [anon_sym_COLON_SLASH] = ACTIONS(47),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(47),
    [anon_sym_COLON_LT] = ACTIONS(49),
    [anon_sym_COLON_LT_DASH] = ACTIONS(47),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(47),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(47),
    [anon_sym_COLON_LT_EQ] = ACTIONS(47),
    [anon_sym_COLON_LT_GT] = ACTIONS(47),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(47),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(49),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(47),
    [anon_sym_COLON_EQ] = ACTIONS(49),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(49),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(47),
    [anon_sym_COLON_EQ_GT] = ACTIONS(47),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(47),
    [anon_sym_COLON_GT] = ACTIONS(49),
    [anon_sym_COLON_GT_EQ] = ACTIONS(47),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(47),
    [anon_sym_COLON_AT] = ACTIONS(47),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(47),
    [anon_sym_COLON_CARET] = ACTIONS(47),
    [anon_sym_COLON_PIPE] = ACTIONS(49),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(47),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(49),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(47),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(47),
    [anon_sym_nil] = ACTIONS(47),
    [anon_sym_COLONnil] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(47),
    [anon_sym_LBRACE] = ACTIONS(47),
    [anon_sym_COMMA] = ACTIONS(47),
    [anon_sym_RBRACE] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_comment] = ACTIONS(33),
  },
  [6] = {
    [aux_sym_charlist_repeat1] = STATE(13),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(53),
    [sym_comment] = ACTIONS(55),
  },
  [7] = {
    [sym__expression] = STATE(15),
    [sym_true] = STATE(15),
    [sym_false] = STATE(15),
    [sym_atom] = STATE(15),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(15),
    [sym_charlist] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_list] = STATE(15),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_integer] = ACTIONS(57),
    [sym_float] = ACTIONS(59),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [8] = {
    [sym__expression] = STATE(17),
    [sym_true] = STATE(17),
    [sym_false] = STATE(17),
    [sym_atom] = STATE(17),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(17),
    [sym_charlist] = STATE(17),
    [sym_tuple] = STATE(17),
    [sym_list] = STATE(17),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_head] = STATE(18),
    [sym_integer] = ACTIONS(63),
    [sym_float] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(67),
    [sym_comment] = ACTIONS(33),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_comment] = ACTIONS(33),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_COLONtrue] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(71),
    [anon_sym_COLONfalse] = ACTIONS(73),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(73),
    [anon_sym_COLON_BANG] = ACTIONS(73),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(73),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(71),
    [anon_sym_COLON_AMP] = ACTIONS(73),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(73),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(71),
    [anon_sym_COLON_STAR] = ACTIONS(71),
    [anon_sym_COLON_PLUS] = ACTIONS(73),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(71),
    [anon_sym_COLON_DASH] = ACTIONS(73),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(71),
    [anon_sym_COLON_DOT] = ACTIONS(73),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(71),
    [anon_sym_COLON_SLASH] = ACTIONS(71),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(71),
    [anon_sym_COLON_LT] = ACTIONS(73),
    [anon_sym_COLON_LT_DASH] = ACTIONS(71),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(71),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(71),
    [anon_sym_COLON_LT_EQ] = ACTIONS(71),
    [anon_sym_COLON_LT_GT] = ACTIONS(71),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(71),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(73),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(71),
    [anon_sym_COLON_EQ] = ACTIONS(73),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(73),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(71),
    [anon_sym_COLON_EQ_GT] = ACTIONS(71),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(71),
    [anon_sym_COLON_GT] = ACTIONS(73),
    [anon_sym_COLON_GT_EQ] = ACTIONS(71),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(71),
    [anon_sym_COLON_AT] = ACTIONS(71),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(71),
    [anon_sym_COLON_CARET] = ACTIONS(71),
    [anon_sym_COLON_PIPE] = ACTIONS(73),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(71),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(73),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(71),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(73),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(71),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(71),
    [anon_sym_nil] = ACTIONS(71),
    [anon_sym_COLONnil] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [sym_comment] = ACTIONS(33),
  },
  [11] = {
    [sym__expression] = STATE(19),
    [sym_true] = STATE(19),
    [sym_false] = STATE(19),
    [sym_atom] = STATE(19),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(19),
    [sym_charlist] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_list] = STATE(19),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_integer] = ACTIONS(77),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_integer] = ACTIONS(83),
    [sym_float] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_COLONtrue] = ACTIONS(83),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_COLONfalse] = ACTIONS(83),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(83),
    [anon_sym_COLON_BANG] = ACTIONS(83),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(83),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(81),
    [anon_sym_COLON_AMP] = ACTIONS(83),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(83),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(81),
    [anon_sym_COLON_STAR] = ACTIONS(81),
    [anon_sym_COLON_PLUS] = ACTIONS(83),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(81),
    [anon_sym_COLON_DASH] = ACTIONS(83),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(81),
    [anon_sym_COLON_DOT] = ACTIONS(83),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(81),
    [anon_sym_COLON_SLASH] = ACTIONS(81),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(81),
    [anon_sym_COLON_LT] = ACTIONS(83),
    [anon_sym_COLON_LT_DASH] = ACTIONS(81),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(81),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(81),
    [anon_sym_COLON_LT_EQ] = ACTIONS(81),
    [anon_sym_COLON_LT_GT] = ACTIONS(81),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(81),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(83),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(81),
    [anon_sym_COLON_EQ] = ACTIONS(83),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(83),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(81),
    [anon_sym_COLON_EQ_GT] = ACTIONS(81),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(81),
    [anon_sym_COLON_GT] = ACTIONS(83),
    [anon_sym_COLON_GT_EQ] = ACTIONS(81),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(81),
    [anon_sym_COLON_AT] = ACTIONS(81),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(81),
    [anon_sym_COLON_CARET] = ACTIONS(81),
    [anon_sym_COLON_PIPE] = ACTIONS(83),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(81),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(83),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(81),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(83),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(81),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(81),
    [anon_sym_nil] = ACTIONS(81),
    [anon_sym_COLONnil] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [sym_comment] = ACTIONS(33),
  },
  [13] = {
    [aux_sym_charlist_repeat1] = STATE(21),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(87),
    [sym_comment] = ACTIONS(55),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_integer] = ACTIONS(91),
    [sym_float] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_COLONtrue] = ACTIONS(91),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_COLONfalse] = ACTIONS(91),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(91),
    [anon_sym_COLON_BANG] = ACTIONS(91),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(91),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(89),
    [anon_sym_COLON_AMP] = ACTIONS(91),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(91),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(89),
    [anon_sym_COLON_STAR] = ACTIONS(89),
    [anon_sym_COLON_PLUS] = ACTIONS(91),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(89),
    [anon_sym_COLON_DASH] = ACTIONS(91),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(89),
    [anon_sym_COLON_DOT] = ACTIONS(91),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(89),
    [anon_sym_COLON_SLASH] = ACTIONS(89),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(89),
    [anon_sym_COLON_LT] = ACTIONS(91),
    [anon_sym_COLON_LT_DASH] = ACTIONS(89),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(89),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(89),
    [anon_sym_COLON_LT_EQ] = ACTIONS(89),
    [anon_sym_COLON_LT_GT] = ACTIONS(89),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(89),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(91),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(89),
    [anon_sym_COLON_EQ] = ACTIONS(91),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(91),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(89),
    [anon_sym_COLON_EQ_GT] = ACTIONS(89),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(89),
    [anon_sym_COLON_GT] = ACTIONS(91),
    [anon_sym_COLON_GT_EQ] = ACTIONS(89),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(89),
    [anon_sym_COLON_AT] = ACTIONS(89),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(89),
    [anon_sym_COLON_CARET] = ACTIONS(89),
    [anon_sym_COLON_PIPE] = ACTIONS(91),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(89),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(91),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(89),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(91),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(89),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(89),
    [anon_sym_nil] = ACTIONS(89),
    [anon_sym_COLONnil] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_PIPE] = ACTIONS(89),
    [sym_comment] = ACTIONS(33),
  },
  [15] = {
    [aux_sym_tuple_repeat1] = STATE(24),
    [anon_sym_COMMA] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(95),
    [sym_comment] = ACTIONS(33),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_integer] = ACTIONS(99),
    [sym_float] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_COLONtrue] = ACTIONS(99),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_COLONfalse] = ACTIONS(99),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(99),
    [anon_sym_COLON_BANG] = ACTIONS(99),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(99),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_COLON_AMP] = ACTIONS(99),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(99),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(97),
    [anon_sym_COLON_STAR] = ACTIONS(97),
    [anon_sym_COLON_PLUS] = ACTIONS(99),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(97),
    [anon_sym_COLON_DASH] = ACTIONS(99),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(97),
    [anon_sym_COLON_DOT] = ACTIONS(99),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(97),
    [anon_sym_COLON_SLASH] = ACTIONS(97),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(97),
    [anon_sym_COLON_LT] = ACTIONS(99),
    [anon_sym_COLON_LT_DASH] = ACTIONS(97),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(97),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(97),
    [anon_sym_COLON_LT_EQ] = ACTIONS(97),
    [anon_sym_COLON_LT_GT] = ACTIONS(97),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(97),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(99),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(97),
    [anon_sym_COLON_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_COLON_EQ_GT] = ACTIONS(97),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(97),
    [anon_sym_COLON_GT] = ACTIONS(99),
    [anon_sym_COLON_GT_EQ] = ACTIONS(97),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(97),
    [anon_sym_COLON_AT] = ACTIONS(97),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(97),
    [anon_sym_COLON_CARET] = ACTIONS(97),
    [anon_sym_COLON_PIPE] = ACTIONS(99),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(97),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(99),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(97),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(97),
    [anon_sym_nil] = ACTIONS(97),
    [anon_sym_COLONnil] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_comment] = ACTIONS(33),
  },
  [17] = {
    [aux_sym_tuple_repeat1] = STATE(27),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_comment] = ACTIONS(33),
  },
  [18] = {
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_comment] = ACTIONS(33),
  },
  [19] = {
    [sym__expression] = STATE(19),
    [sym_true] = STATE(19),
    [sym_false] = STATE(19),
    [sym_atom] = STATE(19),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(19),
    [sym_charlist] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_list] = STATE(19),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [aux_sym_program_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_integer] = ACTIONS(111),
    [sym_float] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(117),
    [anon_sym_COLONtrue] = ACTIONS(120),
    [anon_sym_false] = ACTIONS(123),
    [anon_sym_COLONfalse] = ACTIONS(126),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(129),
    [anon_sym_COLON_BANG] = ACTIONS(129),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(129),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(132),
    [anon_sym_COLON_AMP] = ACTIONS(129),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(129),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(132),
    [anon_sym_COLON_STAR] = ACTIONS(132),
    [anon_sym_COLON_PLUS] = ACTIONS(129),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(132),
    [anon_sym_COLON_DASH] = ACTIONS(129),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(132),
    [anon_sym_COLON_DOT] = ACTIONS(129),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(132),
    [anon_sym_COLON_SLASH] = ACTIONS(132),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(132),
    [anon_sym_COLON_LT] = ACTIONS(129),
    [anon_sym_COLON_LT_DASH] = ACTIONS(132),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(132),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(132),
    [anon_sym_COLON_LT_EQ] = ACTIONS(132),
    [anon_sym_COLON_LT_GT] = ACTIONS(132),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(132),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(129),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(132),
    [anon_sym_COLON_EQ] = ACTIONS(129),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(129),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(132),
    [anon_sym_COLON_EQ_GT] = ACTIONS(132),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(132),
    [anon_sym_COLON_GT] = ACTIONS(129),
    [anon_sym_COLON_GT_EQ] = ACTIONS(132),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(132),
    [anon_sym_COLON_AT] = ACTIONS(132),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(132),
    [anon_sym_COLON_CARET] = ACTIONS(132),
    [anon_sym_COLON_PIPE] = ACTIONS(129),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(132),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(129),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(132),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(129),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(132),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(132),
    [anon_sym_nil] = ACTIONS(135),
    [anon_sym_COLONnil] = ACTIONS(138),
    [anon_sym_SQUOTE] = ACTIONS(141),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_comment] = ACTIONS(33),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(150),
    [sym_integer] = ACTIONS(152),
    [sym_float] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(150),
    [anon_sym_COLONtrue] = ACTIONS(152),
    [anon_sym_false] = ACTIONS(150),
    [anon_sym_COLONfalse] = ACTIONS(152),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(152),
    [anon_sym_COLON_BANG] = ACTIONS(152),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(152),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(150),
    [anon_sym_COLON_AMP] = ACTIONS(152),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(152),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(150),
    [anon_sym_COLON_STAR] = ACTIONS(150),
    [anon_sym_COLON_PLUS] = ACTIONS(152),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(150),
    [anon_sym_COLON_DASH] = ACTIONS(152),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(150),
    [anon_sym_COLON_DOT] = ACTIONS(152),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(150),
    [anon_sym_COLON_SLASH] = ACTIONS(150),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(150),
    [anon_sym_COLON_LT] = ACTIONS(152),
    [anon_sym_COLON_LT_DASH] = ACTIONS(150),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(150),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(150),
    [anon_sym_COLON_LT_EQ] = ACTIONS(150),
    [anon_sym_COLON_LT_GT] = ACTIONS(150),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(150),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(152),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(152),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(152),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ_GT] = ACTIONS(150),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(150),
    [anon_sym_COLON_GT] = ACTIONS(152),
    [anon_sym_COLON_GT_EQ] = ACTIONS(150),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(150),
    [anon_sym_COLON_AT] = ACTIONS(150),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(150),
    [anon_sym_COLON_CARET] = ACTIONS(150),
    [anon_sym_COLON_PIPE] = ACTIONS(152),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(150),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(152),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(150),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(152),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(150),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(150),
    [anon_sym_nil] = ACTIONS(150),
    [anon_sym_COLONnil] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_RBRACE] = ACTIONS(150),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(150),
    [anon_sym_PIPE] = ACTIONS(150),
    [sym_comment] = ACTIONS(33),
  },
  [21] = {
    [aux_sym_charlist_repeat1] = STATE(21),
    [anon_sym_SQUOTE] = ACTIONS(154),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(156),
    [sym_comment] = ACTIONS(55),
  },
  [22] = {
    [sym__expression] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_list] = STATE(30),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [sym_integer] = ACTIONS(167),
    [sym_float] = ACTIONS(165),
    [anon_sym_true] = ACTIONS(165),
    [anon_sym_COLONtrue] = ACTIONS(167),
    [anon_sym_false] = ACTIONS(165),
    [anon_sym_COLONfalse] = ACTIONS(167),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(167),
    [anon_sym_COLON_BANG] = ACTIONS(167),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(167),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(165),
    [anon_sym_COLON_AMP] = ACTIONS(167),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(167),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(165),
    [anon_sym_COLON_STAR] = ACTIONS(165),
    [anon_sym_COLON_PLUS] = ACTIONS(167),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(165),
    [anon_sym_COLON_DASH] = ACTIONS(167),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(165),
    [anon_sym_COLON_DOT] = ACTIONS(167),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(165),
    [anon_sym_COLON_SLASH] = ACTIONS(165),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(165),
    [anon_sym_COLON_LT] = ACTIONS(167),
    [anon_sym_COLON_LT_DASH] = ACTIONS(165),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(165),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(165),
    [anon_sym_COLON_LT_EQ] = ACTIONS(165),
    [anon_sym_COLON_LT_GT] = ACTIONS(165),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(165),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(167),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(165),
    [anon_sym_COLON_EQ] = ACTIONS(167),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(167),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(165),
    [anon_sym_COLON_EQ_GT] = ACTIONS(165),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(165),
    [anon_sym_COLON_GT] = ACTIONS(167),
    [anon_sym_COLON_GT_EQ] = ACTIONS(165),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(165),
    [anon_sym_COLON_AT] = ACTIONS(165),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(165),
    [anon_sym_COLON_CARET] = ACTIONS(165),
    [anon_sym_COLON_PIPE] = ACTIONS(167),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(165),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(165),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(167),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(165),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(165),
    [anon_sym_nil] = ACTIONS(165),
    [anon_sym_COLONnil] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_RBRACE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [anon_sym_PIPE] = ACTIONS(165),
    [sym_comment] = ACTIONS(33),
  },
  [24] = {
    [aux_sym_tuple_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(169),
    [anon_sym_RBRACE] = ACTIONS(163),
    [sym_comment] = ACTIONS(33),
  },
  [25] = {
    [sym__expression] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_list] = STATE(30),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(171),
    [sym_comment] = ACTIONS(33),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym_integer] = ACTIONS(175),
    [sym_float] = ACTIONS(173),
    [anon_sym_true] = ACTIONS(173),
    [anon_sym_COLONtrue] = ACTIONS(175),
    [anon_sym_false] = ACTIONS(173),
    [anon_sym_COLONfalse] = ACTIONS(175),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(175),
    [anon_sym_COLON_BANG] = ACTIONS(175),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(175),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(173),
    [anon_sym_COLON_AMP] = ACTIONS(175),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(175),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(173),
    [anon_sym_COLON_STAR] = ACTIONS(173),
    [anon_sym_COLON_PLUS] = ACTIONS(175),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(173),
    [anon_sym_COLON_DASH] = ACTIONS(175),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(173),
    [anon_sym_COLON_DOT] = ACTIONS(175),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(173),
    [anon_sym_COLON_SLASH] = ACTIONS(173),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(173),
    [anon_sym_COLON_LT] = ACTIONS(175),
    [anon_sym_COLON_LT_DASH] = ACTIONS(173),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(173),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(173),
    [anon_sym_COLON_LT_EQ] = ACTIONS(173),
    [anon_sym_COLON_LT_GT] = ACTIONS(173),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(173),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(175),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(173),
    [anon_sym_COLON_EQ] = ACTIONS(175),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(175),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(173),
    [anon_sym_COLON_EQ_GT] = ACTIONS(173),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(173),
    [anon_sym_COLON_GT] = ACTIONS(175),
    [anon_sym_COLON_GT_EQ] = ACTIONS(173),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(173),
    [anon_sym_COLON_AT] = ACTIONS(173),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(173),
    [anon_sym_COLON_CARET] = ACTIONS(173),
    [anon_sym_COLON_PIPE] = ACTIONS(175),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(173),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(175),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(175),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(173),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(173),
    [anon_sym_nil] = ACTIONS(173),
    [anon_sym_COLONnil] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [sym_comment] = ACTIONS(33),
  },
  [27] = {
    [aux_sym_tuple_repeat1] = STATE(35),
    [anon_sym_COMMA] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(171),
    [sym_comment] = ACTIONS(33),
  },
  [28] = {
    [sym_list] = STATE(36),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_tail] = STATE(37),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [sym_integer] = ACTIONS(181),
    [sym_float] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(179),
    [anon_sym_COLONtrue] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(179),
    [anon_sym_COLONfalse] = ACTIONS(181),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(181),
    [anon_sym_COLON_BANG] = ACTIONS(181),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(181),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(179),
    [anon_sym_COLON_AMP] = ACTIONS(181),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(181),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(179),
    [anon_sym_COLON_STAR] = ACTIONS(179),
    [anon_sym_COLON_PLUS] = ACTIONS(181),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(179),
    [anon_sym_COLON_DASH] = ACTIONS(181),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(179),
    [anon_sym_COLON_DOT] = ACTIONS(181),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(179),
    [anon_sym_COLON_SLASH] = ACTIONS(179),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(179),
    [anon_sym_COLON_LT] = ACTIONS(181),
    [anon_sym_COLON_LT_DASH] = ACTIONS(179),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(179),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(179),
    [anon_sym_COLON_LT_EQ] = ACTIONS(179),
    [anon_sym_COLON_LT_GT] = ACTIONS(179),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(179),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(181),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(179),
    [anon_sym_COLON_EQ] = ACTIONS(181),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(181),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(179),
    [anon_sym_COLON_EQ_GT] = ACTIONS(179),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(179),
    [anon_sym_COLON_GT] = ACTIONS(181),
    [anon_sym_COLON_GT_EQ] = ACTIONS(179),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(179),
    [anon_sym_COLON_AT] = ACTIONS(179),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(179),
    [anon_sym_COLON_CARET] = ACTIONS(179),
    [anon_sym_COLON_PIPE] = ACTIONS(181),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(179),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(181),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(179),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(181),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(179),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(179),
    [anon_sym_nil] = ACTIONS(179),
    [anon_sym_COLONnil] = ACTIONS(181),
    [anon_sym_SQUOTE] = ACTIONS(179),
    [anon_sym_LBRACE] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
    [anon_sym_RBRACE] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [anon_sym_PIPE] = ACTIONS(179),
    [sym_comment] = ACTIONS(33),
  },
  [30] = {
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym_comment] = ACTIONS(33),
  },
  [31] = {
    [sym__expression] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_list] = STATE(30),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [32] = {
    [aux_sym_tuple_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_RBRACE] = ACTIONS(183),
    [sym_comment] = ACTIONS(33),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [sym_integer] = ACTIONS(192),
    [sym_float] = ACTIONS(190),
    [anon_sym_true] = ACTIONS(190),
    [anon_sym_COLONtrue] = ACTIONS(192),
    [anon_sym_false] = ACTIONS(190),
    [anon_sym_COLONfalse] = ACTIONS(192),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(192),
    [anon_sym_COLON_BANG] = ACTIONS(192),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(192),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(190),
    [anon_sym_COLON_AMP] = ACTIONS(192),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(192),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(190),
    [anon_sym_COLON_STAR] = ACTIONS(190),
    [anon_sym_COLON_PLUS] = ACTIONS(192),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(190),
    [anon_sym_COLON_DASH] = ACTIONS(192),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(190),
    [anon_sym_COLON_DOT] = ACTIONS(192),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(190),
    [anon_sym_COLON_SLASH] = ACTIONS(190),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(190),
    [anon_sym_COLON_LT] = ACTIONS(192),
    [anon_sym_COLON_LT_DASH] = ACTIONS(190),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(190),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(190),
    [anon_sym_COLON_LT_EQ] = ACTIONS(190),
    [anon_sym_COLON_LT_GT] = ACTIONS(190),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(190),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(192),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(190),
    [anon_sym_COLON_EQ] = ACTIONS(192),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(192),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(190),
    [anon_sym_COLON_EQ_GT] = ACTIONS(190),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(190),
    [anon_sym_COLON_GT] = ACTIONS(192),
    [anon_sym_COLON_GT_EQ] = ACTIONS(190),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(190),
    [anon_sym_COLON_AT] = ACTIONS(190),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(190),
    [anon_sym_COLON_CARET] = ACTIONS(190),
    [anon_sym_COLON_PIPE] = ACTIONS(192),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(190),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(192),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(190),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(192),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(190),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(190),
    [anon_sym_nil] = ACTIONS(190),
    [anon_sym_COLONnil] = ACTIONS(192),
    [anon_sym_SQUOTE] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(190),
    [anon_sym_RBRACE] = ACTIONS(190),
    [anon_sym_LBRACK] = ACTIONS(190),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_PIPE] = ACTIONS(190),
    [sym_comment] = ACTIONS(33),
  },
  [34] = {
    [sym__expression] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_list] = STATE(30),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RBRACK] = ACTIONS(194),
    [sym_comment] = ACTIONS(33),
  },
  [35] = {
    [aux_sym_tuple_repeat1] = STATE(35),
    [anon_sym_COMMA] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym_comment] = ACTIONS(33),
  },
  [36] = {
    [anon_sym_RBRACK] = ACTIONS(196),
    [sym_comment] = ACTIONS(33),
  },
  [37] = {
    [anon_sym_RBRACK] = ACTIONS(198),
    [sym_comment] = ACTIONS(33),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym_integer] = ACTIONS(202),
    [sym_float] = ACTIONS(200),
    [anon_sym_true] = ACTIONS(200),
    [anon_sym_COLONtrue] = ACTIONS(202),
    [anon_sym_false] = ACTIONS(200),
    [anon_sym_COLONfalse] = ACTIONS(202),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(202),
    [anon_sym_COLON_BANG] = ACTIONS(202),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(202),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(200),
    [anon_sym_COLON_AMP] = ACTIONS(202),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(202),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(200),
    [anon_sym_COLON_STAR] = ACTIONS(200),
    [anon_sym_COLON_PLUS] = ACTIONS(202),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(200),
    [anon_sym_COLON_DASH] = ACTIONS(202),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(200),
    [anon_sym_COLON_DOT] = ACTIONS(202),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(200),
    [anon_sym_COLON_SLASH] = ACTIONS(200),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(200),
    [anon_sym_COLON_LT] = ACTIONS(202),
    [anon_sym_COLON_LT_DASH] = ACTIONS(200),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(200),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(200),
    [anon_sym_COLON_LT_EQ] = ACTIONS(200),
    [anon_sym_COLON_LT_GT] = ACTIONS(200),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(200),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(202),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(200),
    [anon_sym_COLON_EQ] = ACTIONS(202),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(202),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(200),
    [anon_sym_COLON_EQ_GT] = ACTIONS(200),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(200),
    [anon_sym_COLON_GT] = ACTIONS(202),
    [anon_sym_COLON_GT_EQ] = ACTIONS(200),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(200),
    [anon_sym_COLON_AT] = ACTIONS(200),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(200),
    [anon_sym_COLON_CARET] = ACTIONS(200),
    [anon_sym_COLON_PIPE] = ACTIONS(202),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(200),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(202),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(200),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(202),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(200),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(200),
    [anon_sym_nil] = ACTIONS(200),
    [anon_sym_COLONnil] = ACTIONS(202),
    [anon_sym_SQUOTE] = ACTIONS(200),
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(200),
    [anon_sym_RBRACK] = ACTIONS(200),
    [anon_sym_PIPE] = ACTIONS(200),
    [sym_comment] = ACTIONS(33),
  },
  [39] = {
    [sym__expression] = STATE(30),
    [sym_true] = STATE(30),
    [sym_false] = STATE(30),
    [sym_atom] = STATE(30),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(30),
    [sym_charlist] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_list] = STATE(30),
    [sym__simple_list] = STATE(10),
    [sym__head_tail_list] = STATE(10),
    [sym_integer] = ACTIONS(159),
    [sym_float] = ACTIONS(161),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_COLONtrue] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(15),
    [anon_sym_COLONfalse] = ACTIONS(17),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(19),
    [anon_sym_COLON_BANG] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(19),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(19),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(21),
    [anon_sym_COLON_STAR] = ACTIONS(21),
    [anon_sym_COLON_PLUS] = ACTIONS(19),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(21),
    [anon_sym_COLON_DASH] = ACTIONS(19),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(21),
    [anon_sym_COLON_DOT] = ACTIONS(19),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(21),
    [anon_sym_COLON_SLASH] = ACTIONS(21),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(21),
    [anon_sym_COLON_LT] = ACTIONS(19),
    [anon_sym_COLON_LT_DASH] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(21),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(21),
    [anon_sym_COLON_LT_EQ] = ACTIONS(21),
    [anon_sym_COLON_LT_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(19),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(19),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(21),
    [anon_sym_COLON_EQ_GT] = ACTIONS(21),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(21),
    [anon_sym_COLON_GT] = ACTIONS(19),
    [anon_sym_COLON_GT_EQ] = ACTIONS(21),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_AT] = ACTIONS(21),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(21),
    [anon_sym_COLON_CARET] = ACTIONS(21),
    [anon_sym_COLON_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(21),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(19),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(21),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(19),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(21),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(21),
    [anon_sym_nil] = ACTIONS(23),
    [anon_sym_COLONnil] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_comment] = ACTIONS(33),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(204),
    [sym_integer] = ACTIONS(206),
    [sym_float] = ACTIONS(204),
    [anon_sym_true] = ACTIONS(204),
    [anon_sym_COLONtrue] = ACTIONS(206),
    [anon_sym_false] = ACTIONS(204),
    [anon_sym_COLONfalse] = ACTIONS(206),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(206),
    [anon_sym_COLON_BANG] = ACTIONS(206),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(206),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(204),
    [anon_sym_COLON_AMP] = ACTIONS(206),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(206),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(204),
    [anon_sym_COLON_STAR] = ACTIONS(204),
    [anon_sym_COLON_PLUS] = ACTIONS(206),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(204),
    [anon_sym_COLON_DASH] = ACTIONS(206),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(204),
    [anon_sym_COLON_DOT] = ACTIONS(206),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(204),
    [anon_sym_COLON_SLASH] = ACTIONS(204),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(204),
    [anon_sym_COLON_LT] = ACTIONS(206),
    [anon_sym_COLON_LT_DASH] = ACTIONS(204),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(204),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(204),
    [anon_sym_COLON_LT_EQ] = ACTIONS(204),
    [anon_sym_COLON_LT_GT] = ACTIONS(204),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(204),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(206),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(204),
    [anon_sym_COLON_EQ] = ACTIONS(206),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(206),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(204),
    [anon_sym_COLON_EQ_GT] = ACTIONS(204),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(204),
    [anon_sym_COLON_GT] = ACTIONS(206),
    [anon_sym_COLON_GT_EQ] = ACTIONS(204),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(204),
    [anon_sym_COLON_AT] = ACTIONS(204),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(204),
    [anon_sym_COLON_CARET] = ACTIONS(204),
    [anon_sym_COLON_PIPE] = ACTIONS(206),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(204),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(206),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(204),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(206),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(204),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(204),
    [anon_sym_nil] = ACTIONS(204),
    [anon_sym_COLONnil] = ACTIONS(206),
    [anon_sym_SQUOTE] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(204),
    [sym_comment] = ACTIONS(33),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym_integer] = ACTIONS(210),
    [sym_float] = ACTIONS(208),
    [anon_sym_true] = ACTIONS(208),
    [anon_sym_COLONtrue] = ACTIONS(210),
    [anon_sym_false] = ACTIONS(208),
    [anon_sym_COLONfalse] = ACTIONS(210),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(210),
    [anon_sym_COLON_BANG] = ACTIONS(210),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(210),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(208),
    [anon_sym_COLON_AMP] = ACTIONS(210),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(210),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(208),
    [anon_sym_COLON_STAR] = ACTIONS(208),
    [anon_sym_COLON_PLUS] = ACTIONS(210),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(208),
    [anon_sym_COLON_DASH] = ACTIONS(210),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(208),
    [anon_sym_COLON_DOT] = ACTIONS(210),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(208),
    [anon_sym_COLON_SLASH] = ACTIONS(208),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(208),
    [anon_sym_COLON_LT] = ACTIONS(210),
    [anon_sym_COLON_LT_DASH] = ACTIONS(208),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(208),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(208),
    [anon_sym_COLON_LT_EQ] = ACTIONS(208),
    [anon_sym_COLON_LT_GT] = ACTIONS(208),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(208),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(210),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(208),
    [anon_sym_COLON_EQ] = ACTIONS(210),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(210),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(208),
    [anon_sym_COLON_EQ_GT] = ACTIONS(208),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(208),
    [anon_sym_COLON_GT] = ACTIONS(210),
    [anon_sym_COLON_GT_EQ] = ACTIONS(208),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(208),
    [anon_sym_COLON_AT] = ACTIONS(208),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(208),
    [anon_sym_COLON_CARET] = ACTIONS(208),
    [anon_sym_COLON_PIPE] = ACTIONS(210),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(208),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(210),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(208),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(210),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(208),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(208),
    [anon_sym_nil] = ACTIONS(208),
    [anon_sym_COLONnil] = ACTIONS(210),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [sym_comment] = ACTIONS(33),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(11),
  [9] = {.count = 1, .reusable = true}, SHIFT(11),
  [11] = {.count = 1, .reusable = true}, SHIFT(2),
  [13] = {.count = 1, .reusable = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true}, SHIFT(3),
  [17] = {.count = 1, .reusable = false}, SHIFT(3),
  [19] = {.count = 1, .reusable = false}, SHIFT(4),
  [21] = {.count = 1, .reusable = true}, SHIFT(4),
  [23] = {.count = 1, .reusable = true}, SHIFT(5),
  [25] = {.count = 1, .reusable = false}, SHIFT(5),
  [27] = {.count = 1, .reusable = true}, SHIFT(6),
  [29] = {.count = 1, .reusable = true}, SHIFT(7),
  [31] = {.count = 1, .reusable = true}, SHIFT(8),
  [33] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [41] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [43] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [45] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [47] = {.count = 1, .reusable = true}, REDUCE(sym_nil, 1),
  [49] = {.count = 1, .reusable = false}, REDUCE(sym_nil, 1),
  [51] = {.count = 1, .reusable = false}, SHIFT(12),
  [53] = {.count = 1, .reusable = false}, SHIFT(13),
  [55] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [57] = {.count = 1, .reusable = false}, SHIFT(15),
  [59] = {.count = 1, .reusable = true}, SHIFT(15),
  [61] = {.count = 1, .reusable = true}, SHIFT(14),
  [63] = {.count = 1, .reusable = false}, SHIFT(17),
  [65] = {.count = 1, .reusable = true}, SHIFT(17),
  [67] = {.count = 1, .reusable = true}, SHIFT(16),
  [69] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(19),
  [79] = {.count = 1, .reusable = true}, SHIFT(19),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [85] = {.count = 1, .reusable = false}, SHIFT(20),
  [87] = {.count = 1, .reusable = false}, SHIFT(21),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [93] = {.count = 1, .reusable = true}, SHIFT(22),
  [95] = {.count = 1, .reusable = true}, SHIFT(23),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 2),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 2),
  [101] = {.count = 1, .reusable = true}, SHIFT(25),
  [103] = {.count = 1, .reusable = true}, SHIFT(26),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(28),
  [109] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [111] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [114] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(19),
  [117] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [120] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [123] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [126] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [154] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(21),
  [159] = {.count = 1, .reusable = false}, SHIFT(30),
  [161] = {.count = 1, .reusable = true}, SHIFT(30),
  [163] = {.count = 1, .reusable = true}, SHIFT(29),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [169] = {.count = 1, .reusable = true}, SHIFT(31),
  [171] = {.count = 1, .reusable = true}, SHIFT(33),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [177] = {.count = 1, .reusable = true}, SHIFT(34),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [183] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(38),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(39),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [194] = {.count = 1, .reusable = true}, SHIFT(40),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [198] = {.count = 1, .reusable = true}, SHIFT(41),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [210] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
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
