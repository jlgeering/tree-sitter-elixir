#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 57
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 65
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
  anon_sym_LT_LT = 54,
  anon_sym_COMMA = 55,
  anon_sym_GT_GT = 56,
  anon_sym_COLON_COLON = 57,
  sym_binary_options = 58,
  anon_sym_LBRACE = 59,
  anon_sym_RBRACE = 60,
  anon_sym_LBRACK = 61,
  anon_sym_RBRACK = 62,
  anon_sym_PIPE = 63,
  sym_comment = 64,
  sym_program = 65,
  sym__expression = 66,
  sym_true = 67,
  sym_false = 68,
  sym_atom = 69,
  sym__operator_atom = 70,
  sym_nil = 71,
  sym_charlist = 72,
  sym_binary = 73,
  sym_binary_segment = 74,
  sym_tuple = 75,
  sym_list = 76,
  sym__simple_list = 77,
  sym__head_tail_list = 78,
  sym_head = 79,
  sym_tail = 80,
  aux_sym_program_repeat1 = 81,
  aux_sym_charlist_repeat1 = 82,
  aux_sym_binary_repeat1 = 83,
  aux_sym_tuple_repeat1 = 84,
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
  [anon_sym_LT_LT] = "<<",
  [anon_sym_COMMA] = ",",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_COLON_COLON] = "::",
  [sym_binary_options] = "binary_options",
  [anon_sym_LBRACE] = "{",
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
  [sym_binary] = "binary",
  [sym_binary_segment] = "binary_segment",
  [sym_tuple] = "tuple",
  [sym_list] = "list",
  [sym__simple_list] = "_simple_list",
  [sym__head_tail_list] = "_head_tail_list",
  [sym_head] = "head",
  [sym_tail] = "tail",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_charlist_repeat1] = "charlist_repeat1",
  [aux_sym_binary_repeat1] = "binary_repeat1",
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
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_options] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
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
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_segment] = {
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
  [aux_sym_binary_repeat1] = {
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
      if (lookahead == '<')
        ADVANCE(87);
      if (lookahead == '>')
        ADVANCE(89);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(92);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == 'f')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '}')
        ADVANCE(108);
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
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
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
      if (lookahead == '<')
        ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 89:
      if (lookahead == '>')
        ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 92:
      if (lookahead == '\n')
        SKIP(0);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 94:
      if (lookahead == 'a')
        ADVANCE(95);
      END_STATE();
    case 95:
      if (lookahead == 'l')
        ADVANCE(96);
      END_STATE();
    case 96:
      if (lookahead == 's')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'e')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 99:
      if (lookahead == 'i')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'l')
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 102:
      if (lookahead == 'r')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'u')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 109:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(110);
      if (lookahead == '<')
        ADVANCE(87);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(112);
      if (lookahead == 'f')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(109);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 110:
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
        ADVANCE(111);
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
    case 111:
      if (lookahead == ':')
        ADVANCE(39);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        SKIP(109);
      END_STATE();
    case 113:
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
        ADVANCE(110);
      if (lookahead == '<')
        ADVANCE(87);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(114);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == 'f')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '}')
        ADVANCE(108);
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
      if (lookahead == '#')
        ADVANCE(116);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      if (lookahead == '\'')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH);
      END_STATE();
    case 119:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(120);
      if (lookahead == '>')
        ADVANCE(89);
      if (lookahead == '\\')
        SKIP(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(121);
      if (lookahead == 'b')
        ADVANCE(13);
      if (lookahead == 'o')
        ADVANCE(15);
      if (lookahead == 'x')
        ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 121:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(122);
      END_STATE();
    case 123:
      if (lookahead == '\n')
        SKIP(119);
      END_STATE();
    case 124:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(110);
      if (lookahead == '<')
        ADVANCE(87);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(125);
      if (lookahead == 'f')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(124);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 125:
      if (lookahead == '\n')
        SKIP(124);
      END_STATE();
    case 126:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '0')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(110);
      if (lookahead == '<')
        ADVANCE(87);
      if (lookahead == '[')
        ADVANCE(91);
      if (lookahead == '\\')
        SKIP(127);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == 'f')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(99);
      if (lookahead == 't')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(126);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(12);
      END_STATE();
    case 127:
      if (lookahead == '\n')
        SKIP(126);
      END_STATE();
    case 128:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(128);
      END_STATE();
    case 129:
      if (lookahead == '\n')
        SKIP(128);
      END_STATE();
    case 130:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(131);
      if (lookahead == '>')
        ADVANCE(89);
      if (lookahead == '\\')
        SKIP(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(130);
      END_STATE();
    case 131:
      if (lookahead == ':')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        SKIP(130);
      END_STATE();
    case 134:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(135);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(134);
      END_STATE();
    case 135:
      if (lookahead == '\n')
        SKIP(134);
      END_STATE();
    case 136:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(137);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '|')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(136);
      END_STATE();
    case 137:
      if (lookahead == '\n')
        SKIP(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\\')
        SKIP(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(138);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 139:
      if (lookahead == '\n')
        SKIP(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_binary_options);
      if (lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(4);
      if (lookahead == '\\')
        SKIP(142);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '}')
        ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(141);
      END_STATE();
    case 142:
      if (lookahead == '\n')
        SKIP(141);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 109},
  [2] = {.lex_state = 113},
  [3] = {.lex_state = 113},
  [4] = {.lex_state = 113},
  [5] = {.lex_state = 113},
  [6] = {.lex_state = 115},
  [7] = {.lex_state = 119},
  [8] = {.lex_state = 124},
  [9] = {.lex_state = 126},
  [10] = {.lex_state = 128},
  [11] = {.lex_state = 113},
  [12] = {.lex_state = 109},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 115},
  [15] = {.lex_state = 130},
  [16] = {.lex_state = 113},
  [17] = {.lex_state = 130},
  [18] = {.lex_state = 113},
  [19] = {.lex_state = 134},
  [20] = {.lex_state = 113},
  [21] = {.lex_state = 136},
  [22] = {.lex_state = 136},
  [23] = {.lex_state = 109},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 115},
  [26] = {.lex_state = 138},
  [27] = {.lex_state = 119},
  [28] = {.lex_state = 113},
  [29] = {.lex_state = 130},
  [30] = {.lex_state = 124},
  [31] = {.lex_state = 113},
  [32] = {.lex_state = 134},
  [33] = {.lex_state = 126},
  [34] = {.lex_state = 113},
  [35] = {.lex_state = 136},
  [36] = {.lex_state = 109},
  [37] = {.lex_state = 130},
  [38] = {.lex_state = 113},
  [39] = {.lex_state = 130},
  [40] = {.lex_state = 119},
  [41] = {.lex_state = 130},
  [42] = {.lex_state = 113},
  [43] = {.lex_state = 141},
  [44] = {.lex_state = 124},
  [45] = {.lex_state = 134},
  [46] = {.lex_state = 113},
  [47] = {.lex_state = 126},
  [48] = {.lex_state = 136},
  [49] = {.lex_state = 126},
  [50] = {.lex_state = 126},
  [51] = {.lex_state = 113},
  [52] = {.lex_state = 109},
  [53] = {.lex_state = 113},
  [54] = {.lex_state = 109},
  [55] = {.lex_state = 113},
  [56] = {.lex_state = 113},
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
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(10),
    [sym__expression] = STATE(12),
    [sym_true] = STATE(12),
    [sym_false] = STATE(12),
    [sym_atom] = STATE(12),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(12),
    [sym_charlist] = STATE(12),
    [sym_binary] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_list] = STATE(12),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [aux_sym_program_repeat1] = STATE(12),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [2] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_integer] = ACTIONS(39),
    [sym_float] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_COLONtrue] = ACTIONS(39),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_COLONfalse] = ACTIONS(39),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(39),
    [anon_sym_COLON_BANG] = ACTIONS(39),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(39),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(37),
    [anon_sym_COLON_AMP] = ACTIONS(39),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(39),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(37),
    [anon_sym_COLON_STAR] = ACTIONS(37),
    [anon_sym_COLON_PLUS] = ACTIONS(39),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(37),
    [anon_sym_COLON_DASH] = ACTIONS(39),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(37),
    [anon_sym_COLON_DOT] = ACTIONS(39),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(37),
    [anon_sym_COLON_SLASH] = ACTIONS(37),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(37),
    [anon_sym_COLON_LT] = ACTIONS(39),
    [anon_sym_COLON_LT_DASH] = ACTIONS(37),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(37),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(37),
    [anon_sym_COLON_LT_EQ] = ACTIONS(37),
    [anon_sym_COLON_LT_GT] = ACTIONS(37),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(37),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(39),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ] = ACTIONS(39),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(39),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(37),
    [anon_sym_COLON_EQ_GT] = ACTIONS(37),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(37),
    [anon_sym_COLON_GT] = ACTIONS(39),
    [anon_sym_COLON_GT_EQ] = ACTIONS(37),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(37),
    [anon_sym_COLON_AT] = ACTIONS(37),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(37),
    [anon_sym_COLON_CARET] = ACTIONS(37),
    [anon_sym_COLON_PIPE] = ACTIONS(39),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(37),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(39),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(37),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(39),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(37),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(37),
    [anon_sym_nil] = ACTIONS(37),
    [anon_sym_COLONnil] = ACTIONS(39),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_LT_LT] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [sym_comment] = ACTIONS(35),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(41),
    [sym_integer] = ACTIONS(43),
    [sym_float] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_COLONtrue] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_COLONfalse] = ACTIONS(43),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_COLON_BANG] = ACTIONS(43),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(43),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(41),
    [anon_sym_COLON_AMP] = ACTIONS(43),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(43),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(41),
    [anon_sym_COLON_STAR] = ACTIONS(41),
    [anon_sym_COLON_PLUS] = ACTIONS(43),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(41),
    [anon_sym_COLON_DASH] = ACTIONS(43),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(41),
    [anon_sym_COLON_DOT] = ACTIONS(43),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(41),
    [anon_sym_COLON_SLASH] = ACTIONS(41),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(41),
    [anon_sym_COLON_LT] = ACTIONS(43),
    [anon_sym_COLON_LT_DASH] = ACTIONS(41),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(41),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(41),
    [anon_sym_COLON_LT_EQ] = ACTIONS(41),
    [anon_sym_COLON_LT_GT] = ACTIONS(41),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(41),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(43),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(41),
    [anon_sym_COLON_EQ] = ACTIONS(43),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(43),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(41),
    [anon_sym_COLON_EQ_GT] = ACTIONS(41),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(41),
    [anon_sym_COLON_GT] = ACTIONS(43),
    [anon_sym_COLON_GT_EQ] = ACTIONS(41),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(41),
    [anon_sym_COLON_AT] = ACTIONS(41),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(41),
    [anon_sym_COLON_CARET] = ACTIONS(41),
    [anon_sym_COLON_PIPE] = ACTIONS(43),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(41),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(43),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(41),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(43),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(41),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(41),
    [anon_sym_nil] = ACTIONS(41),
    [anon_sym_COLONnil] = ACTIONS(43),
    [anon_sym_SQUOTE] = ACTIONS(41),
    [anon_sym_LT_LT] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [sym_comment] = ACTIONS(35),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(45),
    [sym_integer] = ACTIONS(47),
    [sym_float] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(45),
    [anon_sym_COLONtrue] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(45),
    [anon_sym_COLONfalse] = ACTIONS(47),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_COLON_BANG] = ACTIONS(47),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(47),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(45),
    [anon_sym_COLON_AMP] = ACTIONS(47),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(47),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(45),
    [anon_sym_COLON_STAR] = ACTIONS(45),
    [anon_sym_COLON_PLUS] = ACTIONS(47),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(45),
    [anon_sym_COLON_DASH] = ACTIONS(47),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(45),
    [anon_sym_COLON_DOT] = ACTIONS(47),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(45),
    [anon_sym_COLON_SLASH] = ACTIONS(45),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(45),
    [anon_sym_COLON_LT] = ACTIONS(47),
    [anon_sym_COLON_LT_DASH] = ACTIONS(45),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(45),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(45),
    [anon_sym_COLON_LT_EQ] = ACTIONS(45),
    [anon_sym_COLON_LT_GT] = ACTIONS(45),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(45),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(47),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(45),
    [anon_sym_COLON_EQ] = ACTIONS(47),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(47),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(45),
    [anon_sym_COLON_EQ_GT] = ACTIONS(45),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(45),
    [anon_sym_COLON_GT] = ACTIONS(47),
    [anon_sym_COLON_GT_EQ] = ACTIONS(45),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(45),
    [anon_sym_COLON_AT] = ACTIONS(45),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(45),
    [anon_sym_COLON_CARET] = ACTIONS(45),
    [anon_sym_COLON_PIPE] = ACTIONS(47),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(45),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(47),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(45),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(47),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(45),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(45),
    [anon_sym_nil] = ACTIONS(45),
    [anon_sym_COLONnil] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(45),
    [anon_sym_LT_LT] = ACTIONS(45),
    [anon_sym_COMMA] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(45),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_LBRACK] = ACTIONS(45),
    [anon_sym_RBRACK] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(45),
    [sym_comment] = ACTIONS(35),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_integer] = ACTIONS(51),
    [sym_float] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(49),
    [anon_sym_COLONtrue] = ACTIONS(51),
    [anon_sym_false] = ACTIONS(49),
    [anon_sym_COLONfalse] = ACTIONS(51),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(51),
    [anon_sym_COLON_BANG] = ACTIONS(51),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(51),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(49),
    [anon_sym_COLON_AMP] = ACTIONS(51),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(51),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(49),
    [anon_sym_COLON_STAR] = ACTIONS(49),
    [anon_sym_COLON_PLUS] = ACTIONS(51),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(49),
    [anon_sym_COLON_DASH] = ACTIONS(51),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(49),
    [anon_sym_COLON_DOT] = ACTIONS(51),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(49),
    [anon_sym_COLON_SLASH] = ACTIONS(49),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(49),
    [anon_sym_COLON_LT] = ACTIONS(51),
    [anon_sym_COLON_LT_DASH] = ACTIONS(49),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(49),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(49),
    [anon_sym_COLON_LT_EQ] = ACTIONS(49),
    [anon_sym_COLON_LT_GT] = ACTIONS(49),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(49),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(51),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(49),
    [anon_sym_COLON_EQ] = ACTIONS(51),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(51),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(49),
    [anon_sym_COLON_EQ_GT] = ACTIONS(49),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(49),
    [anon_sym_COLON_GT] = ACTIONS(51),
    [anon_sym_COLON_GT_EQ] = ACTIONS(49),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(49),
    [anon_sym_COLON_AT] = ACTIONS(49),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(49),
    [anon_sym_COLON_CARET] = ACTIONS(49),
    [anon_sym_COLON_PIPE] = ACTIONS(51),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(49),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(51),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(49),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(51),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(49),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(49),
    [anon_sym_nil] = ACTIONS(49),
    [anon_sym_COLONnil] = ACTIONS(51),
    [anon_sym_SQUOTE] = ACTIONS(49),
    [anon_sym_LT_LT] = ACTIONS(49),
    [anon_sym_COMMA] = ACTIONS(49),
    [anon_sym_LBRACE] = ACTIONS(49),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(49),
    [anon_sym_RBRACK] = ACTIONS(49),
    [anon_sym_PIPE] = ACTIONS(49),
    [sym_comment] = ACTIONS(35),
  },
  [6] = {
    [aux_sym_charlist_repeat1] = STATE(14),
    [anon_sym_SQUOTE] = ACTIONS(53),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(55),
    [sym_comment] = ACTIONS(57),
  },
  [7] = {
    [sym_charlist] = STATE(15),
    [sym_binary_segment] = STATE(17),
    [sym_integer] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(61),
    [sym_comment] = ACTIONS(35),
  },
  [8] = {
    [sym__expression] = STATE(19),
    [sym_true] = STATE(19),
    [sym_false] = STATE(19),
    [sym_atom] = STATE(19),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(19),
    [sym_charlist] = STATE(19),
    [sym_binary] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_list] = STATE(19),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [9] = {
    [sym__expression] = STATE(21),
    [sym_true] = STATE(21),
    [sym_false] = STATE(21),
    [sym_atom] = STATE(21),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(21),
    [sym_charlist] = STATE(21),
    [sym_binary] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_list] = STATE(21),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [sym_head] = STATE(22),
    [sym_integer] = ACTIONS(69),
    [sym_float] = ACTIONS(71),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym_comment] = ACTIONS(35),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_comment] = ACTIONS(35),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_integer] = ACTIONS(79),
    [sym_float] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_COLONtrue] = ACTIONS(79),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_COLONfalse] = ACTIONS(79),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(79),
    [anon_sym_COLON_BANG] = ACTIONS(79),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(79),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(77),
    [anon_sym_COLON_AMP] = ACTIONS(79),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(79),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(77),
    [anon_sym_COLON_STAR] = ACTIONS(77),
    [anon_sym_COLON_PLUS] = ACTIONS(79),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(77),
    [anon_sym_COLON_DASH] = ACTIONS(79),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(77),
    [anon_sym_COLON_DOT] = ACTIONS(79),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(77),
    [anon_sym_COLON_SLASH] = ACTIONS(77),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(77),
    [anon_sym_COLON_LT] = ACTIONS(79),
    [anon_sym_COLON_LT_DASH] = ACTIONS(77),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(77),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(77),
    [anon_sym_COLON_LT_EQ] = ACTIONS(77),
    [anon_sym_COLON_LT_GT] = ACTIONS(77),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(77),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(79),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ] = ACTIONS(79),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(79),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(77),
    [anon_sym_COLON_EQ_GT] = ACTIONS(77),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(77),
    [anon_sym_COLON_GT] = ACTIONS(79),
    [anon_sym_COLON_GT_EQ] = ACTIONS(77),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(77),
    [anon_sym_COLON_AT] = ACTIONS(77),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(77),
    [anon_sym_COLON_CARET] = ACTIONS(77),
    [anon_sym_COLON_PIPE] = ACTIONS(79),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(77),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(79),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(77),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(79),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(77),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(77),
    [anon_sym_nil] = ACTIONS(77),
    [anon_sym_COLONnil] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [anon_sym_LT_LT] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_PIPE] = ACTIONS(77),
    [sym_comment] = ACTIONS(35),
  },
  [12] = {
    [sym__expression] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_atom] = STATE(23),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(23),
    [sym_charlist] = STATE(23),
    [sym_binary] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [aux_sym_program_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_integer] = ACTIONS(83),
    [sym_float] = ACTIONS(85),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_integer] = ACTIONS(89),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_COLONtrue] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_COLONfalse] = ACTIONS(89),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(89),
    [anon_sym_COLON_BANG] = ACTIONS(89),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(89),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(87),
    [anon_sym_COLON_AMP] = ACTIONS(89),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(89),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(87),
    [anon_sym_COLON_STAR] = ACTIONS(87),
    [anon_sym_COLON_PLUS] = ACTIONS(89),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(87),
    [anon_sym_COLON_DASH] = ACTIONS(89),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(87),
    [anon_sym_COLON_DOT] = ACTIONS(89),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(87),
    [anon_sym_COLON_SLASH] = ACTIONS(87),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(87),
    [anon_sym_COLON_LT] = ACTIONS(89),
    [anon_sym_COLON_LT_DASH] = ACTIONS(87),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(87),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(87),
    [anon_sym_COLON_LT_EQ] = ACTIONS(87),
    [anon_sym_COLON_LT_GT] = ACTIONS(87),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(87),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(89),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(87),
    [anon_sym_COLON_EQ] = ACTIONS(89),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(89),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(87),
    [anon_sym_COLON_EQ_GT] = ACTIONS(87),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(87),
    [anon_sym_COLON_GT] = ACTIONS(89),
    [anon_sym_COLON_GT_EQ] = ACTIONS(87),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(87),
    [anon_sym_COLON_AT] = ACTIONS(87),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(87),
    [anon_sym_COLON_CARET] = ACTIONS(87),
    [anon_sym_COLON_PIPE] = ACTIONS(89),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(87),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(89),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(87),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(89),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(87),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(87),
    [anon_sym_nil] = ACTIONS(87),
    [anon_sym_COLONnil] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_LT_LT] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_GT_GT] = ACTIONS(87),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [sym_comment] = ACTIONS(35),
  },
  [14] = {
    [aux_sym_charlist_repeat1] = STATE(25),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(93),
    [sym_comment] = ACTIONS(57),
  },
  [15] = {
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_GT_GT] = ACTIONS(95),
    [anon_sym_COLON_COLON] = ACTIONS(97),
    [sym_comment] = ACTIONS(35),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_integer] = ACTIONS(101),
    [sym_float] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_COLONtrue] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_COLONfalse] = ACTIONS(101),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(101),
    [anon_sym_COLON_BANG] = ACTIONS(101),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(101),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(99),
    [anon_sym_COLON_AMP] = ACTIONS(101),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(101),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(99),
    [anon_sym_COLON_STAR] = ACTIONS(99),
    [anon_sym_COLON_PLUS] = ACTIONS(101),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(99),
    [anon_sym_COLON_DASH] = ACTIONS(101),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(99),
    [anon_sym_COLON_DOT] = ACTIONS(101),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(99),
    [anon_sym_COLON_SLASH] = ACTIONS(99),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(99),
    [anon_sym_COLON_LT] = ACTIONS(101),
    [anon_sym_COLON_LT_DASH] = ACTIONS(99),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(99),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(99),
    [anon_sym_COLON_LT_EQ] = ACTIONS(99),
    [anon_sym_COLON_LT_GT] = ACTIONS(99),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(99),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(101),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(99),
    [anon_sym_COLON_EQ] = ACTIONS(101),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(101),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(99),
    [anon_sym_COLON_EQ_GT] = ACTIONS(99),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(99),
    [anon_sym_COLON_GT] = ACTIONS(101),
    [anon_sym_COLON_GT_EQ] = ACTIONS(99),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(99),
    [anon_sym_COLON_AT] = ACTIONS(99),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(99),
    [anon_sym_COLON_CARET] = ACTIONS(99),
    [anon_sym_COLON_PIPE] = ACTIONS(101),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(99),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(101),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(99),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(101),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(99),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(99),
    [anon_sym_nil] = ACTIONS(99),
    [anon_sym_COLONnil] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_LT_LT] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(99),
    [sym_comment] = ACTIONS(35),
  },
  [17] = {
    [aux_sym_binary_repeat1] = STATE(29),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_GT_GT] = ACTIONS(105),
    [sym_comment] = ACTIONS(35),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_integer] = ACTIONS(109),
    [sym_float] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(107),
    [anon_sym_COLONtrue] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(107),
    [anon_sym_COLONfalse] = ACTIONS(109),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(109),
    [anon_sym_COLON_BANG] = ACTIONS(109),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(109),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(107),
    [anon_sym_COLON_AMP] = ACTIONS(109),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(109),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(107),
    [anon_sym_COLON_STAR] = ACTIONS(107),
    [anon_sym_COLON_PLUS] = ACTIONS(109),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(107),
    [anon_sym_COLON_DASH] = ACTIONS(109),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(107),
    [anon_sym_COLON_DOT] = ACTIONS(109),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(107),
    [anon_sym_COLON_SLASH] = ACTIONS(107),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(107),
    [anon_sym_COLON_LT] = ACTIONS(109),
    [anon_sym_COLON_LT_DASH] = ACTIONS(107),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(107),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(107),
    [anon_sym_COLON_LT_EQ] = ACTIONS(107),
    [anon_sym_COLON_LT_GT] = ACTIONS(107),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(107),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(109),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(107),
    [anon_sym_COLON_EQ] = ACTIONS(109),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(109),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(107),
    [anon_sym_COLON_EQ_GT] = ACTIONS(107),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(107),
    [anon_sym_COLON_GT] = ACTIONS(109),
    [anon_sym_COLON_GT_EQ] = ACTIONS(107),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(107),
    [anon_sym_COLON_AT] = ACTIONS(107),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(107),
    [anon_sym_COLON_CARET] = ACTIONS(107),
    [anon_sym_COLON_PIPE] = ACTIONS(109),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(107),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(109),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(107),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(109),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(107),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(107),
    [anon_sym_nil] = ACTIONS(107),
    [anon_sym_COLONnil] = ACTIONS(109),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [anon_sym_LT_LT] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [sym_comment] = ACTIONS(35),
  },
  [19] = {
    [aux_sym_tuple_repeat1] = STATE(32),
    [anon_sym_COMMA] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(113),
    [sym_comment] = ACTIONS(35),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [sym_integer] = ACTIONS(117),
    [sym_float] = ACTIONS(115),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_COLONtrue] = ACTIONS(117),
    [anon_sym_false] = ACTIONS(115),
    [anon_sym_COLONfalse] = ACTIONS(117),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(117),
    [anon_sym_COLON_BANG] = ACTIONS(117),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(117),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(115),
    [anon_sym_COLON_AMP] = ACTIONS(117),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(117),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(115),
    [anon_sym_COLON_STAR] = ACTIONS(115),
    [anon_sym_COLON_PLUS] = ACTIONS(117),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(115),
    [anon_sym_COLON_DASH] = ACTIONS(117),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(115),
    [anon_sym_COLON_DOT] = ACTIONS(117),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(115),
    [anon_sym_COLON_SLASH] = ACTIONS(115),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(115),
    [anon_sym_COLON_LT] = ACTIONS(117),
    [anon_sym_COLON_LT_DASH] = ACTIONS(115),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(115),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(115),
    [anon_sym_COLON_LT_EQ] = ACTIONS(115),
    [anon_sym_COLON_LT_GT] = ACTIONS(115),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(115),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(117),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(115),
    [anon_sym_COLON_EQ] = ACTIONS(117),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(117),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(115),
    [anon_sym_COLON_EQ_GT] = ACTIONS(115),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(115),
    [anon_sym_COLON_GT] = ACTIONS(117),
    [anon_sym_COLON_GT_EQ] = ACTIONS(115),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(115),
    [anon_sym_COLON_AT] = ACTIONS(115),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(115),
    [anon_sym_COLON_CARET] = ACTIONS(115),
    [anon_sym_COLON_PIPE] = ACTIONS(117),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(115),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(117),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(115),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(117),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(115),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(115),
    [anon_sym_nil] = ACTIONS(115),
    [anon_sym_COLONnil] = ACTIONS(117),
    [anon_sym_SQUOTE] = ACTIONS(115),
    [anon_sym_LT_LT] = ACTIONS(115),
    [anon_sym_COMMA] = ACTIONS(115),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_RBRACE] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [anon_sym_PIPE] = ACTIONS(115),
    [sym_comment] = ACTIONS(35),
  },
  [21] = {
    [aux_sym_tuple_repeat1] = STATE(35),
    [anon_sym_COMMA] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(121),
    [anon_sym_PIPE] = ACTIONS(123),
    [sym_comment] = ACTIONS(35),
  },
  [22] = {
    [anon_sym_PIPE] = ACTIONS(125),
    [sym_comment] = ACTIONS(35),
  },
  [23] = {
    [sym__expression] = STATE(23),
    [sym_true] = STATE(23),
    [sym_false] = STATE(23),
    [sym_atom] = STATE(23),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(23),
    [sym_charlist] = STATE(23),
    [sym_binary] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_list] = STATE(23),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [aux_sym_program_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(127),
    [sym_integer] = ACTIONS(129),
    [sym_float] = ACTIONS(132),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_COLONtrue] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(141),
    [anon_sym_COLONfalse] = ACTIONS(144),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(147),
    [anon_sym_COLON_BANG] = ACTIONS(147),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(147),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(150),
    [anon_sym_COLON_AMP] = ACTIONS(147),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(147),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(150),
    [anon_sym_COLON_STAR] = ACTIONS(150),
    [anon_sym_COLON_PLUS] = ACTIONS(147),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(150),
    [anon_sym_COLON_DASH] = ACTIONS(147),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(150),
    [anon_sym_COLON_DOT] = ACTIONS(147),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(150),
    [anon_sym_COLON_SLASH] = ACTIONS(150),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(150),
    [anon_sym_COLON_LT] = ACTIONS(147),
    [anon_sym_COLON_LT_DASH] = ACTIONS(150),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(150),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(150),
    [anon_sym_COLON_LT_EQ] = ACTIONS(150),
    [anon_sym_COLON_LT_GT] = ACTIONS(150),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(150),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(147),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(150),
    [anon_sym_COLON_EQ] = ACTIONS(147),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(147),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(150),
    [anon_sym_COLON_EQ_GT] = ACTIONS(150),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(150),
    [anon_sym_COLON_GT] = ACTIONS(147),
    [anon_sym_COLON_GT_EQ] = ACTIONS(150),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(150),
    [anon_sym_COLON_AT] = ACTIONS(150),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(150),
    [anon_sym_COLON_CARET] = ACTIONS(150),
    [anon_sym_COLON_PIPE] = ACTIONS(147),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(150),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(147),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(150),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(147),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(150),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(150),
    [anon_sym_nil] = ACTIONS(153),
    [anon_sym_COLONnil] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_LT_LT] = ACTIONS(162),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(168),
    [sym_comment] = ACTIONS(35),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [sym_integer] = ACTIONS(173),
    [sym_float] = ACTIONS(171),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_COLONtrue] = ACTIONS(173),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_COLONfalse] = ACTIONS(173),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(173),
    [anon_sym_COLON_BANG] = ACTIONS(173),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(173),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(171),
    [anon_sym_COLON_AMP] = ACTIONS(173),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(173),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(171),
    [anon_sym_COLON_STAR] = ACTIONS(171),
    [anon_sym_COLON_PLUS] = ACTIONS(173),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(171),
    [anon_sym_COLON_DASH] = ACTIONS(173),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(171),
    [anon_sym_COLON_DOT] = ACTIONS(173),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(171),
    [anon_sym_COLON_SLASH] = ACTIONS(171),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(171),
    [anon_sym_COLON_LT] = ACTIONS(173),
    [anon_sym_COLON_LT_DASH] = ACTIONS(171),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(171),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(171),
    [anon_sym_COLON_LT_EQ] = ACTIONS(171),
    [anon_sym_COLON_LT_GT] = ACTIONS(171),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(171),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(173),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(171),
    [anon_sym_COLON_EQ] = ACTIONS(173),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(173),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(171),
    [anon_sym_COLON_EQ_GT] = ACTIONS(171),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(171),
    [anon_sym_COLON_GT] = ACTIONS(173),
    [anon_sym_COLON_GT_EQ] = ACTIONS(171),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(171),
    [anon_sym_COLON_AT] = ACTIONS(171),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(171),
    [anon_sym_COLON_CARET] = ACTIONS(171),
    [anon_sym_COLON_PIPE] = ACTIONS(173),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(171),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(173),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(171),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(173),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(171),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(171),
    [anon_sym_nil] = ACTIONS(171),
    [anon_sym_COLONnil] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_LT_LT] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_GT_GT] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [sym_comment] = ACTIONS(35),
  },
  [25] = {
    [aux_sym_charlist_repeat1] = STATE(25),
    [anon_sym_SQUOTE] = ACTIONS(175),
    [aux_sym_SLASH_BSLASH_BSLASH_SQUOTE_PIPE_LBRACK_CARET_SQUOTE_RBRACK_SLASH] = ACTIONS(177),
    [sym_comment] = ACTIONS(57),
  },
  [26] = {
    [sym_binary_options] = ACTIONS(180),
    [sym_comment] = ACTIONS(35),
  },
  [27] = {
    [sym_charlist] = STATE(15),
    [sym_binary_segment] = STATE(39),
    [sym_integer] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(182),
    [sym_comment] = ACTIONS(35),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(184),
    [sym_integer] = ACTIONS(186),
    [sym_float] = ACTIONS(184),
    [anon_sym_true] = ACTIONS(184),
    [anon_sym_COLONtrue] = ACTIONS(186),
    [anon_sym_false] = ACTIONS(184),
    [anon_sym_COLONfalse] = ACTIONS(186),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(186),
    [anon_sym_COLON_BANG] = ACTIONS(186),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(186),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(184),
    [anon_sym_COLON_AMP] = ACTIONS(186),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(186),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(184),
    [anon_sym_COLON_STAR] = ACTIONS(184),
    [anon_sym_COLON_PLUS] = ACTIONS(186),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(184),
    [anon_sym_COLON_DASH] = ACTIONS(186),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(184),
    [anon_sym_COLON_DOT] = ACTIONS(186),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(184),
    [anon_sym_COLON_SLASH] = ACTIONS(184),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(184),
    [anon_sym_COLON_LT] = ACTIONS(186),
    [anon_sym_COLON_LT_DASH] = ACTIONS(184),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(184),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(184),
    [anon_sym_COLON_LT_EQ] = ACTIONS(184),
    [anon_sym_COLON_LT_GT] = ACTIONS(184),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(184),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(186),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(184),
    [anon_sym_COLON_EQ] = ACTIONS(186),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(186),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(184),
    [anon_sym_COLON_EQ_GT] = ACTIONS(184),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(184),
    [anon_sym_COLON_GT] = ACTIONS(186),
    [anon_sym_COLON_GT_EQ] = ACTIONS(184),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(184),
    [anon_sym_COLON_AT] = ACTIONS(184),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(184),
    [anon_sym_COLON_CARET] = ACTIONS(184),
    [anon_sym_COLON_PIPE] = ACTIONS(186),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(184),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(186),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(184),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(186),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(184),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(184),
    [anon_sym_nil] = ACTIONS(184),
    [anon_sym_COLONnil] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [anon_sym_LT_LT] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [anon_sym_LBRACE] = ACTIONS(184),
    [anon_sym_RBRACE] = ACTIONS(184),
    [anon_sym_LBRACK] = ACTIONS(184),
    [anon_sym_RBRACK] = ACTIONS(184),
    [anon_sym_PIPE] = ACTIONS(184),
    [sym_comment] = ACTIONS(35),
  },
  [29] = {
    [aux_sym_binary_repeat1] = STATE(41),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_GT_GT] = ACTIONS(182),
    [sym_comment] = ACTIONS(35),
  },
  [30] = {
    [sym__expression] = STATE(43),
    [sym_true] = STATE(43),
    [sym_false] = STATE(43),
    [sym_atom] = STATE(43),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(43),
    [sym_charlist] = STATE(43),
    [sym_binary] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_list] = STATE(43),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [sym_integer] = ACTIONS(190),
    [sym_float] = ACTIONS(192),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(196),
    [sym_integer] = ACTIONS(198),
    [sym_float] = ACTIONS(196),
    [anon_sym_true] = ACTIONS(196),
    [anon_sym_COLONtrue] = ACTIONS(198),
    [anon_sym_false] = ACTIONS(196),
    [anon_sym_COLONfalse] = ACTIONS(198),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(198),
    [anon_sym_COLON_BANG] = ACTIONS(198),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(198),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(196),
    [anon_sym_COLON_AMP] = ACTIONS(198),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(198),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(196),
    [anon_sym_COLON_STAR] = ACTIONS(196),
    [anon_sym_COLON_PLUS] = ACTIONS(198),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(196),
    [anon_sym_COLON_DASH] = ACTIONS(198),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(196),
    [anon_sym_COLON_DOT] = ACTIONS(198),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(196),
    [anon_sym_COLON_SLASH] = ACTIONS(196),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(196),
    [anon_sym_COLON_LT] = ACTIONS(198),
    [anon_sym_COLON_LT_DASH] = ACTIONS(196),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(196),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(196),
    [anon_sym_COLON_LT_EQ] = ACTIONS(196),
    [anon_sym_COLON_LT_GT] = ACTIONS(196),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(196),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(198),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(196),
    [anon_sym_COLON_EQ] = ACTIONS(198),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(198),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(196),
    [anon_sym_COLON_EQ_GT] = ACTIONS(196),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(196),
    [anon_sym_COLON_GT] = ACTIONS(198),
    [anon_sym_COLON_GT_EQ] = ACTIONS(196),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(196),
    [anon_sym_COLON_AT] = ACTIONS(196),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(196),
    [anon_sym_COLON_CARET] = ACTIONS(196),
    [anon_sym_COLON_PIPE] = ACTIONS(198),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(196),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(198),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(196),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(198),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(196),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(196),
    [anon_sym_nil] = ACTIONS(196),
    [anon_sym_COLONnil] = ACTIONS(198),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_LT_LT] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [sym_comment] = ACTIONS(35),
  },
  [32] = {
    [aux_sym_tuple_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(200),
    [anon_sym_RBRACE] = ACTIONS(194),
    [sym_comment] = ACTIONS(35),
  },
  [33] = {
    [sym__expression] = STATE(43),
    [sym_true] = STATE(43),
    [sym_false] = STATE(43),
    [sym_atom] = STATE(43),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(43),
    [sym_charlist] = STATE(43),
    [sym_binary] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_list] = STATE(43),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [sym_integer] = ACTIONS(190),
    [sym_float] = ACTIONS(192),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(202),
    [sym_comment] = ACTIONS(35),
  },
  [34] = {
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
    [anon_sym_LT_LT] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_RBRACK] = ACTIONS(204),
    [anon_sym_PIPE] = ACTIONS(204),
    [sym_comment] = ACTIONS(35),
  },
  [35] = {
    [aux_sym_tuple_repeat1] = STATE(48),
    [anon_sym_COMMA] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(202),
    [sym_comment] = ACTIONS(35),
  },
  [36] = {
    [sym_list] = STATE(49),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [sym_tail] = STATE(50),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [37] = {
    [anon_sym_COMMA] = ACTIONS(210),
    [anon_sym_GT_GT] = ACTIONS(210),
    [sym_comment] = ACTIONS(35),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(212),
    [sym_integer] = ACTIONS(214),
    [sym_float] = ACTIONS(212),
    [anon_sym_true] = ACTIONS(212),
    [anon_sym_COLONtrue] = ACTIONS(214),
    [anon_sym_false] = ACTIONS(212),
    [anon_sym_COLONfalse] = ACTIONS(214),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(214),
    [anon_sym_COLON_BANG] = ACTIONS(214),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(214),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(212),
    [anon_sym_COLON_AMP] = ACTIONS(214),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(214),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(212),
    [anon_sym_COLON_STAR] = ACTIONS(212),
    [anon_sym_COLON_PLUS] = ACTIONS(214),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(212),
    [anon_sym_COLON_DASH] = ACTIONS(214),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(212),
    [anon_sym_COLON_DOT] = ACTIONS(214),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(212),
    [anon_sym_COLON_SLASH] = ACTIONS(212),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(212),
    [anon_sym_COLON_LT] = ACTIONS(214),
    [anon_sym_COLON_LT_DASH] = ACTIONS(212),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(212),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(212),
    [anon_sym_COLON_LT_EQ] = ACTIONS(212),
    [anon_sym_COLON_LT_GT] = ACTIONS(212),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(212),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(214),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(212),
    [anon_sym_COLON_EQ] = ACTIONS(214),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(214),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(212),
    [anon_sym_COLON_EQ_GT] = ACTIONS(212),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(212),
    [anon_sym_COLON_GT] = ACTIONS(214),
    [anon_sym_COLON_GT_EQ] = ACTIONS(212),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(212),
    [anon_sym_COLON_AT] = ACTIONS(212),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(212),
    [anon_sym_COLON_CARET] = ACTIONS(212),
    [anon_sym_COLON_PIPE] = ACTIONS(214),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(212),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(214),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(212),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(214),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(212),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(212),
    [anon_sym_nil] = ACTIONS(212),
    [anon_sym_COLONnil] = ACTIONS(214),
    [anon_sym_SQUOTE] = ACTIONS(212),
    [anon_sym_LT_LT] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(212),
    [anon_sym_LBRACE] = ACTIONS(212),
    [anon_sym_RBRACE] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_PIPE] = ACTIONS(212),
    [sym_comment] = ACTIONS(35),
  },
  [39] = {
    [anon_sym_COMMA] = ACTIONS(216),
    [anon_sym_GT_GT] = ACTIONS(216),
    [sym_comment] = ACTIONS(35),
  },
  [40] = {
    [sym_charlist] = STATE(15),
    [sym_binary_segment] = STATE(39),
    [sym_integer] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [anon_sym_GT_GT] = ACTIONS(218),
    [sym_comment] = ACTIONS(35),
  },
  [41] = {
    [aux_sym_binary_repeat1] = STATE(41),
    [anon_sym_COMMA] = ACTIONS(220),
    [anon_sym_GT_GT] = ACTIONS(216),
    [sym_comment] = ACTIONS(35),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(223),
    [sym_integer] = ACTIONS(225),
    [sym_float] = ACTIONS(223),
    [anon_sym_true] = ACTIONS(223),
    [anon_sym_COLONtrue] = ACTIONS(225),
    [anon_sym_false] = ACTIONS(223),
    [anon_sym_COLONfalse] = ACTIONS(225),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(225),
    [anon_sym_COLON_BANG] = ACTIONS(225),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(225),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(223),
    [anon_sym_COLON_AMP] = ACTIONS(225),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(225),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(223),
    [anon_sym_COLON_STAR] = ACTIONS(223),
    [anon_sym_COLON_PLUS] = ACTIONS(225),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(223),
    [anon_sym_COLON_DASH] = ACTIONS(225),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(223),
    [anon_sym_COLON_DOT] = ACTIONS(225),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(223),
    [anon_sym_COLON_SLASH] = ACTIONS(223),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(223),
    [anon_sym_COLON_LT] = ACTIONS(225),
    [anon_sym_COLON_LT_DASH] = ACTIONS(223),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(223),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(223),
    [anon_sym_COLON_LT_EQ] = ACTIONS(223),
    [anon_sym_COLON_LT_GT] = ACTIONS(223),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(223),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(225),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(223),
    [anon_sym_COLON_EQ] = ACTIONS(225),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(225),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(223),
    [anon_sym_COLON_EQ_GT] = ACTIONS(223),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(223),
    [anon_sym_COLON_GT] = ACTIONS(225),
    [anon_sym_COLON_GT_EQ] = ACTIONS(223),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(223),
    [anon_sym_COLON_AT] = ACTIONS(223),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(223),
    [anon_sym_COLON_CARET] = ACTIONS(223),
    [anon_sym_COLON_PIPE] = ACTIONS(225),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(223),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(225),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(223),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(225),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(223),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(223),
    [anon_sym_nil] = ACTIONS(223),
    [anon_sym_COLONnil] = ACTIONS(225),
    [anon_sym_SQUOTE] = ACTIONS(223),
    [anon_sym_LT_LT] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(223),
    [anon_sym_LBRACK] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(223),
    [anon_sym_PIPE] = ACTIONS(223),
    [sym_comment] = ACTIONS(35),
  },
  [43] = {
    [anon_sym_COMMA] = ACTIONS(227),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(35),
  },
  [44] = {
    [sym__expression] = STATE(43),
    [sym_true] = STATE(43),
    [sym_false] = STATE(43),
    [sym_atom] = STATE(43),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(43),
    [sym_charlist] = STATE(43),
    [sym_binary] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_list] = STATE(43),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [sym_integer] = ACTIONS(190),
    [sym_float] = ACTIONS(192),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_RBRACE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [45] = {
    [aux_sym_tuple_repeat1] = STATE(45),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RBRACE] = ACTIONS(227),
    [sym_comment] = ACTIONS(35),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym_integer] = ACTIONS(236),
    [sym_float] = ACTIONS(234),
    [anon_sym_true] = ACTIONS(234),
    [anon_sym_COLONtrue] = ACTIONS(236),
    [anon_sym_false] = ACTIONS(234),
    [anon_sym_COLONfalse] = ACTIONS(236),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(236),
    [anon_sym_COLON_BANG] = ACTIONS(236),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(236),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(234),
    [anon_sym_COLON_AMP] = ACTIONS(236),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(236),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(234),
    [anon_sym_COLON_STAR] = ACTIONS(234),
    [anon_sym_COLON_PLUS] = ACTIONS(236),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(234),
    [anon_sym_COLON_DASH] = ACTIONS(236),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(234),
    [anon_sym_COLON_DOT] = ACTIONS(236),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(234),
    [anon_sym_COLON_SLASH] = ACTIONS(234),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(234),
    [anon_sym_COLON_LT] = ACTIONS(236),
    [anon_sym_COLON_LT_DASH] = ACTIONS(234),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(234),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(234),
    [anon_sym_COLON_LT_EQ] = ACTIONS(234),
    [anon_sym_COLON_LT_GT] = ACTIONS(234),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(234),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(236),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(234),
    [anon_sym_COLON_EQ] = ACTIONS(236),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(236),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(234),
    [anon_sym_COLON_EQ_GT] = ACTIONS(234),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(234),
    [anon_sym_COLON_GT] = ACTIONS(236),
    [anon_sym_COLON_GT_EQ] = ACTIONS(234),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(234),
    [anon_sym_COLON_AT] = ACTIONS(234),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(234),
    [anon_sym_COLON_CARET] = ACTIONS(234),
    [anon_sym_COLON_PIPE] = ACTIONS(236),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(234),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(236),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(234),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(236),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(234),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(234),
    [anon_sym_nil] = ACTIONS(234),
    [anon_sym_COLONnil] = ACTIONS(236),
    [anon_sym_SQUOTE] = ACTIONS(234),
    [anon_sym_LT_LT] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_RBRACK] = ACTIONS(234),
    [anon_sym_PIPE] = ACTIONS(234),
    [sym_comment] = ACTIONS(35),
  },
  [47] = {
    [sym__expression] = STATE(43),
    [sym_true] = STATE(43),
    [sym_false] = STATE(43),
    [sym_atom] = STATE(43),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(43),
    [sym_charlist] = STATE(43),
    [sym_binary] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_list] = STATE(43),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [sym_integer] = ACTIONS(190),
    [sym_float] = ACTIONS(192),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(238),
    [sym_comment] = ACTIONS(35),
  },
  [48] = {
    [aux_sym_tuple_repeat1] = STATE(48),
    [anon_sym_COMMA] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_comment] = ACTIONS(35),
  },
  [49] = {
    [anon_sym_RBRACK] = ACTIONS(240),
    [sym_comment] = ACTIONS(35),
  },
  [50] = {
    [anon_sym_RBRACK] = ACTIONS(242),
    [sym_comment] = ACTIONS(35),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym_integer] = ACTIONS(246),
    [sym_float] = ACTIONS(244),
    [anon_sym_true] = ACTIONS(244),
    [anon_sym_COLONtrue] = ACTIONS(246),
    [anon_sym_false] = ACTIONS(244),
    [anon_sym_COLONfalse] = ACTIONS(246),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(246),
    [anon_sym_COLON_BANG] = ACTIONS(246),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(246),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(244),
    [anon_sym_COLON_AMP] = ACTIONS(246),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(246),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(244),
    [anon_sym_COLON_STAR] = ACTIONS(244),
    [anon_sym_COLON_PLUS] = ACTIONS(246),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(244),
    [anon_sym_COLON_DASH] = ACTIONS(246),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(244),
    [anon_sym_COLON_DOT] = ACTIONS(246),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(244),
    [anon_sym_COLON_SLASH] = ACTIONS(244),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(244),
    [anon_sym_COLON_LT] = ACTIONS(246),
    [anon_sym_COLON_LT_DASH] = ACTIONS(244),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(244),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(244),
    [anon_sym_COLON_LT_EQ] = ACTIONS(244),
    [anon_sym_COLON_LT_GT] = ACTIONS(244),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(244),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(246),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(244),
    [anon_sym_COLON_EQ] = ACTIONS(246),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(246),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(244),
    [anon_sym_COLON_EQ_GT] = ACTIONS(244),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(244),
    [anon_sym_COLON_GT] = ACTIONS(246),
    [anon_sym_COLON_GT_EQ] = ACTIONS(244),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(244),
    [anon_sym_COLON_AT] = ACTIONS(244),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(244),
    [anon_sym_COLON_CARET] = ACTIONS(244),
    [anon_sym_COLON_PIPE] = ACTIONS(246),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(244),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(246),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(246),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(244),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(244),
    [anon_sym_nil] = ACTIONS(244),
    [anon_sym_COLONnil] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(244),
    [anon_sym_LT_LT] = ACTIONS(244),
    [anon_sym_COMMA] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(244),
    [anon_sym_PIPE] = ACTIONS(244),
    [sym_comment] = ACTIONS(35),
  },
  [52] = {
    [sym_charlist] = STATE(15),
    [sym_binary_segment] = STATE(39),
    [sym_integer] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(35),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym_integer] = ACTIONS(250),
    [sym_float] = ACTIONS(248),
    [anon_sym_true] = ACTIONS(248),
    [anon_sym_COLONtrue] = ACTIONS(250),
    [anon_sym_false] = ACTIONS(248),
    [anon_sym_COLONfalse] = ACTIONS(250),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(250),
    [anon_sym_COLON_BANG] = ACTIONS(250),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(250),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(248),
    [anon_sym_COLON_AMP] = ACTIONS(250),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(250),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(248),
    [anon_sym_COLON_STAR] = ACTIONS(248),
    [anon_sym_COLON_PLUS] = ACTIONS(250),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(248),
    [anon_sym_COLON_DASH] = ACTIONS(250),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(248),
    [anon_sym_COLON_DOT] = ACTIONS(250),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(248),
    [anon_sym_COLON_SLASH] = ACTIONS(248),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(248),
    [anon_sym_COLON_LT] = ACTIONS(250),
    [anon_sym_COLON_LT_DASH] = ACTIONS(248),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(248),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(248),
    [anon_sym_COLON_LT_EQ] = ACTIONS(248),
    [anon_sym_COLON_LT_GT] = ACTIONS(248),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(248),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(250),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(248),
    [anon_sym_COLON_EQ] = ACTIONS(250),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(250),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(248),
    [anon_sym_COLON_EQ_GT] = ACTIONS(248),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(248),
    [anon_sym_COLON_GT] = ACTIONS(250),
    [anon_sym_COLON_GT_EQ] = ACTIONS(248),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(248),
    [anon_sym_COLON_AT] = ACTIONS(248),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(248),
    [anon_sym_COLON_CARET] = ACTIONS(248),
    [anon_sym_COLON_PIPE] = ACTIONS(250),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(248),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(250),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(248),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(250),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(248),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(248),
    [anon_sym_nil] = ACTIONS(248),
    [anon_sym_COLONnil] = ACTIONS(250),
    [anon_sym_SQUOTE] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_COMMA] = ACTIONS(248),
    [anon_sym_LBRACE] = ACTIONS(248),
    [anon_sym_RBRACE] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [anon_sym_PIPE] = ACTIONS(248),
    [sym_comment] = ACTIONS(35),
  },
  [54] = {
    [sym__expression] = STATE(43),
    [sym_true] = STATE(43),
    [sym_false] = STATE(43),
    [sym_atom] = STATE(43),
    [sym__operator_atom] = STATE(4),
    [sym_nil] = STATE(43),
    [sym_charlist] = STATE(43),
    [sym_binary] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_list] = STATE(43),
    [sym__simple_list] = STATE(11),
    [sym__head_tail_list] = STATE(11),
    [sym_integer] = ACTIONS(190),
    [sym_float] = ACTIONS(192),
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
    [anon_sym_LT_LT] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_comment] = ACTIONS(35),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym_integer] = ACTIONS(254),
    [sym_float] = ACTIONS(252),
    [anon_sym_true] = ACTIONS(252),
    [anon_sym_COLONtrue] = ACTIONS(254),
    [anon_sym_false] = ACTIONS(252),
    [anon_sym_COLONfalse] = ACTIONS(254),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(254),
    [anon_sym_COLON_BANG] = ACTIONS(254),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(254),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_COLON_AMP] = ACTIONS(254),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(254),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(252),
    [anon_sym_COLON_STAR] = ACTIONS(252),
    [anon_sym_COLON_PLUS] = ACTIONS(254),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(252),
    [anon_sym_COLON_DASH] = ACTIONS(254),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(252),
    [anon_sym_COLON_DOT] = ACTIONS(254),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(252),
    [anon_sym_COLON_SLASH] = ACTIONS(252),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(252),
    [anon_sym_COLON_LT] = ACTIONS(254),
    [anon_sym_COLON_LT_DASH] = ACTIONS(252),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(252),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(252),
    [anon_sym_COLON_LT_EQ] = ACTIONS(252),
    [anon_sym_COLON_LT_GT] = ACTIONS(252),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(252),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(254),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(252),
    [anon_sym_COLON_EQ] = ACTIONS(254),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(254),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_COLON_EQ_GT] = ACTIONS(252),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(252),
    [anon_sym_COLON_GT] = ACTIONS(254),
    [anon_sym_COLON_GT_EQ] = ACTIONS(252),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(252),
    [anon_sym_COLON_AT] = ACTIONS(252),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(252),
    [anon_sym_COLON_CARET] = ACTIONS(252),
    [anon_sym_COLON_PIPE] = ACTIONS(254),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(252),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(254),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(252),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(254),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(252),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(252),
    [anon_sym_nil] = ACTIONS(252),
    [anon_sym_COLONnil] = ACTIONS(254),
    [anon_sym_SQUOTE] = ACTIONS(252),
    [anon_sym_LT_LT] = ACTIONS(252),
    [anon_sym_COMMA] = ACTIONS(252),
    [anon_sym_LBRACE] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(252),
    [anon_sym_RBRACK] = ACTIONS(252),
    [anon_sym_PIPE] = ACTIONS(252),
    [sym_comment] = ACTIONS(35),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym_integer] = ACTIONS(258),
    [sym_float] = ACTIONS(256),
    [anon_sym_true] = ACTIONS(256),
    [anon_sym_COLONtrue] = ACTIONS(258),
    [anon_sym_false] = ACTIONS(256),
    [anon_sym_COLONfalse] = ACTIONS(258),
    [aux_sym_SLASH_COLON_BSLASHw_LPAREN_LBRACK_AT_BSLASHw_RBRACK_RPAREN_STAR_LPAREN_BANG_PIPE_BSLASH_QMARK_RPAREN_QMARK_PIPE_COLON_SQUOTE_DOT_STAR_SQUOTE_PIPE_COLON_DQUOTE_DOT_STAR_DQUOTE_SLASH] = ACTIONS(258),
    [anon_sym_COLON_BANG] = ACTIONS(258),
    [anon_sym_COLON_BANG_EQ] = ACTIONS(258),
    [anon_sym_COLON_BANG_EQ_EQ] = ACTIONS(256),
    [anon_sym_COLON_AMP] = ACTIONS(258),
    [anon_sym_COLON_AMP_AMP] = ACTIONS(258),
    [anon_sym_COLON_AMP_AMP_AMP] = ACTIONS(256),
    [anon_sym_COLON_STAR] = ACTIONS(256),
    [anon_sym_COLON_PLUS] = ACTIONS(258),
    [anon_sym_COLON_PLUS_PLUS] = ACTIONS(256),
    [anon_sym_COLON_DASH] = ACTIONS(258),
    [anon_sym_COLON_DASH_DASH] = ACTIONS(256),
    [anon_sym_COLON_DOT] = ACTIONS(258),
    [anon_sym_COLON_DOT_DOT] = ACTIONS(256),
    [anon_sym_COLON_SLASH] = ACTIONS(256),
    [anon_sym_COLON_COLON_COLON] = ACTIONS(256),
    [anon_sym_COLON_LT] = ACTIONS(258),
    [anon_sym_COLON_LT_DASH] = ACTIONS(256),
    [anon_sym_COLON_LT_LT_LT] = ACTIONS(256),
    [anon_sym_COLON_LT_LT_TILDE] = ACTIONS(256),
    [anon_sym_COLON_LT_EQ] = ACTIONS(256),
    [anon_sym_COLON_LT_GT] = ACTIONS(256),
    [anon_sym_COLON_LT_PIPE_GT] = ACTIONS(256),
    [anon_sym_COLON_LT_TILDE] = ACTIONS(258),
    [anon_sym_COLON_LT_TILDE_GT] = ACTIONS(256),
    [anon_sym_COLON_EQ] = ACTIONS(258),
    [anon_sym_COLON_EQ_EQ] = ACTIONS(258),
    [anon_sym_COLON_EQ_EQ_EQ] = ACTIONS(256),
    [anon_sym_COLON_EQ_GT] = ACTIONS(256),
    [anon_sym_COLON_EQ_TILDE] = ACTIONS(256),
    [anon_sym_COLON_GT] = ACTIONS(258),
    [anon_sym_COLON_GT_EQ] = ACTIONS(256),
    [anon_sym_COLON_GT_GT_GT] = ACTIONS(256),
    [anon_sym_COLON_AT] = ACTIONS(256),
    [anon_sym_COLON_BSLASH_BSLASH] = ACTIONS(256),
    [anon_sym_COLON_CARET] = ACTIONS(256),
    [anon_sym_COLON_PIPE] = ACTIONS(258),
    [anon_sym_COLON_PIPE_GT] = ACTIONS(256),
    [anon_sym_COLON_PIPE_PIPE] = ACTIONS(258),
    [anon_sym_COLON_PIPE_PIPE_PIPE] = ACTIONS(256),
    [anon_sym_COLON_TILDE_GT] = ACTIONS(258),
    [anon_sym_COLON_TILDE_GT_GT] = ACTIONS(256),
    [anon_sym_COLON_TILDE_TILDE_TILDE] = ACTIONS(256),
    [anon_sym_nil] = ACTIONS(256),
    [anon_sym_COLONnil] = ACTIONS(258),
    [anon_sym_SQUOTE] = ACTIONS(256),
    [anon_sym_LT_LT] = ACTIONS(256),
    [anon_sym_COMMA] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
    [anon_sym_PIPE] = ACTIONS(256),
    [sym_comment] = ACTIONS(35),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(12),
  [9] = {.count = 1, .reusable = true}, SHIFT(12),
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
  [33] = {.count = 1, .reusable = true}, SHIFT(9),
  [35] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_true, 1),
  [39] = {.count = 1, .reusable = false}, REDUCE(sym_true, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_false, 1),
  [43] = {.count = 1, .reusable = false}, REDUCE(sym_false, 1),
  [45] = {.count = 1, .reusable = true}, REDUCE(sym_atom, 1),
  [47] = {.count = 1, .reusable = false}, REDUCE(sym_atom, 1),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_nil, 1),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_nil, 1),
  [53] = {.count = 1, .reusable = false}, SHIFT(13),
  [55] = {.count = 1, .reusable = false}, SHIFT(14),
  [57] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [59] = {.count = 1, .reusable = true}, SHIFT(15),
  [61] = {.count = 1, .reusable = true}, SHIFT(16),
  [63] = {.count = 1, .reusable = false}, SHIFT(19),
  [65] = {.count = 1, .reusable = true}, SHIFT(19),
  [67] = {.count = 1, .reusable = true}, SHIFT(18),
  [69] = {.count = 1, .reusable = false}, SHIFT(21),
  [71] = {.count = 1, .reusable = true}, SHIFT(21),
  [73] = {.count = 1, .reusable = true}, SHIFT(20),
  [75] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_list, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_list, 1),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [83] = {.count = 1, .reusable = false}, SHIFT(23),
  [85] = {.count = 1, .reusable = true}, SHIFT(23),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 2),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 2),
  [91] = {.count = 1, .reusable = false}, SHIFT(24),
  [93] = {.count = 1, .reusable = false}, SHIFT(25),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 1),
  [97] = {.count = 1, .reusable = true}, SHIFT(26),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 2),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(27),
  [105] = {.count = 1, .reusable = true}, SHIFT(28),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 2),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 2),
  [111] = {.count = 1, .reusable = true}, SHIFT(30),
  [113] = {.count = 1, .reusable = true}, SHIFT(31),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 2),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 2),
  [119] = {.count = 1, .reusable = true}, SHIFT(33),
  [121] = {.count = 1, .reusable = true}, SHIFT(34),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_head, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(36),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [129] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(23),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [138] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [141] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [144] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [147] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [153] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_charlist, 3),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_charlist, 3),
  [175] = {.count = 1, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2),
  [177] = {.count = 2, .reusable = false}, REDUCE(aux_sym_charlist_repeat1, 2), SHIFT_REPEAT(25),
  [180] = {.count = 1, .reusable = true}, SHIFT(37),
  [182] = {.count = 1, .reusable = true}, SHIFT(38),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 3),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 3),
  [188] = {.count = 1, .reusable = true}, SHIFT(40),
  [190] = {.count = 1, .reusable = false}, SHIFT(43),
  [192] = {.count = 1, .reusable = true}, SHIFT(43),
  [194] = {.count = 1, .reusable = true}, SHIFT(42),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 3),
  [200] = {.count = 1, .reusable = true}, SHIFT(44),
  [202] = {.count = 1, .reusable = true}, SHIFT(46),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 3),
  [208] = {.count = 1, .reusable = true}, SHIFT(47),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_binary_segment, 3),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 4),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 4),
  [216] = {.count = 1, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2),
  [218] = {.count = 1, .reusable = true}, SHIFT(51),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_binary_repeat1, 2), SHIFT_REPEAT(52),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 4),
  [225] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 4),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [229] = {.count = 1, .reusable = true}, SHIFT(53),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_tuple_repeat1, 2), SHIFT_REPEAT(54),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 4),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 4),
  [238] = {.count = 1, .reusable = true}, SHIFT(55),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_tail, 1),
  [242] = {.count = 1, .reusable = true}, SHIFT(56),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_binary, 5),
  [246] = {.count = 1, .reusable = false}, REDUCE(sym_binary, 5),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_tuple, 5),
  [250] = {.count = 1, .reusable = false}, REDUCE(sym_tuple, 5),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__simple_list, 5),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym__simple_list, 5),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym__head_tail_list, 5),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym__head_tail_list, 5),
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
