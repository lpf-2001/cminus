/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax_analyzer.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#include "syntax_tree.h"

// external functions from lex
extern int yylex();

// external variables from lexical_analyzer module
extern int lines;
extern char *yytext;
extern int pos_end;
extern int pos_start;

// Global syntax tree
syntax_tree *gt;

// Error reporting
void yyerror(const char *s);



// Helper functions written for you with love
syntax_tree_node *node(const char *node_name, int children_num, ...);

#line 99 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MNT_C_USERS_86178_DESKTOP_CMINUS_COMPILER_2021_FALL_BUILD_SRC_PARSER_SYNTAX_ANALYZER_H_INCLUDED
# define YY_YY_MNT_C_USERS_86178_DESKTOP_CMINUS_COMPILER_2021_FALL_BUILD_SRC_PARSER_SYNTAX_ANALYZER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ELSE = 258,
    IF = 259,
    INT = 260,
    RETURN = 261,
    VOID = 262,
    WHILE = 263,
    FLOAT = 264,
    ARRAY = 265,
    ADD = 266,
    SUB = 267,
    MUL = 268,
    DIV = 269,
    LT = 270,
    LTE = 271,
    GT = 272,
    GTE = 273,
    EQ = 274,
    NEQ = 275,
    ASSIN = 276,
    SEMICOLON = 277,
    COMMA = 278,
    LPARENTHESE = 279,
    RPARENTHESE = 280,
    LBRACKET = 281,
    RBRACKET = 282,
    LBRACE = 283,
    RBRACE = 284,
    IDENTIFIER = 285,
    INTEGER = 286,
    FLOATPOINT = 287,
    ERROR = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "syntax_analyzer.y"

    syntax_tree_node *node;
    

#line 190 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MNT_C_USERS_86178_DESKTOP_CMINUS_COMPILER_2021_FALL_BUILD_SRC_PARSER_SYNTAX_ANALYZER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

#define YYUNDEFTOK  2
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    52,    52,    58,    62,    68,    72,    78,    82,    88,
      89,    90,    93,    99,   103,   109,   113,   119,   123,   129,
     135,   139,   144,   148,   153,   154,   155,   156,   157,   160,
     164,   170,   174,   180,   186,   190,   196,   200,   206,   210,
     216,   220,   226,   227,   228,   229,   230,   231,   234,   238,
     244,   245,   248,   252,   258,   259,   262,   266,   267,   268,
     269,   272,   275,   278,   282,   283,   286,   290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ELSE", "IF", "INT", "RETURN", "VOID",
  "WHILE", "FLOAT", "ARRAY", "ADD", "SUB", "MUL", "DIV", "LT", "LTE", "GT",
  "GTE", "EQ", "NEQ", "ASSIN", "SEMICOLON", "COMMA", "LPARENTHESE",
  "RPARENTHESE", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "IDENTIFIER",
  "INTEGER", "FLOATPOINT", "ERROR", "$accept", "program",
  "declaration-list", "declaration", "var-declaration", "type-specifier",
  "fun-declaration", "params", "param-list", "param", "compound-stmt",
  "local-declarations", "statement-list", "statement", "expression-stmt",
  "selection-stmt", "iteration-stmt", "return-stmt", "expression", "var",
  "simple-expression", "relop", "additive-expression", "addop", "term",
  "mulop", "factor", "integer", "float", "call", "args", "arg-list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      10,   -91,   -91,   -91,     4,    10,   -91,   -91,   -23,   -91,
     -91,   -91,    -2,   -91,    58,   -10,    18,    20,    24,    35,
     -91,    37,    68,    51,    10,    59,   -91,   -91,   -91,   -91,
     -91,    10,   -91,    50,     8,    19,    61,     3,    62,   -91,
     -22,   -91,    33,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,    66,    63,   -91,    36,    60,   -91,   -91,   -91,   -91,
     -22,   -91,    67,   -22,    57,   -22,   -22,   -91,   -22,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -22,   -22,   -91,
     -91,   -22,    69,   -91,    70,   -91,   -91,    71,    64,    56,
     -91,   -91,    65,    60,   -91,    38,    38,   -91,   -22,   -91,
      87,   -91,   -91,    38,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     9,    11,    10,     0,     2,     4,     5,     0,     6,
       1,     3,     0,     7,     0,     0,    11,     0,     0,    13,
      16,     0,    17,     0,     0,     0,    18,    21,    12,    15,
       8,    23,    20,     0,     0,     0,     0,     0,     0,    30,
       0,    19,    38,    61,    62,    25,    22,    24,    26,    27,
      28,     0,    57,    37,    41,    49,    53,    59,    60,    58,
       0,    34,     0,     0,     0,    65,     0,    29,     0,    50,
      51,    43,    42,    44,    45,    46,    47,     0,     0,    54,
      55,     0,     0,    35,     0,    56,    67,     0,    64,     0,
      36,    57,    40,    48,    52,     0,     0,    63,     0,    39,
      31,    33,    66,     0,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,    86,    72,   -13,   -91,   -91,   -91,    73,
      75,   -91,   -91,   -90,   -91,   -91,   -91,   -91,   -37,    -6,
     -91,   -91,    15,   -91,    21,   -91,    12,   -91,   -91,   -91,
     -91,   -91
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    18,    19,    20,
      45,    31,    34,    46,    47,    48,    49,    50,    51,    52,
      53,    77,    54,    78,    55,    81,    56,    57,    58,    59,
      87,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      62,    17,    40,    64,    10,   100,   101,    12,    42,    43,
      44,    17,    36,   104,    37,     1,    38,     2,    33,     3,
      13,    21,    14,    82,    15,    61,    84,    40,    86,    89,
      39,    90,    40,    42,    43,    44,    27,    41,    42,    43,
      44,    13,    36,   -14,    37,    15,    38,    69,    70,    23,
      22,    71,    72,    73,    74,    75,    76,    65,    24,    66,
      39,   102,    40,     1,    25,    16,    27,     3,    42,    43,
      44,    91,    91,    79,    80,    91,    69,    70,    26,    27,
      35,    30,    85,    99,    68,    60,    63,    98,    67,    83,
     103,    11,    92,    94,    95,    96,    97,    29,    28,    93,
       0,     0,     0,    32
};

static const yytype_int8 yycheck[] =
{
      37,    14,    24,    40,     0,    95,    96,    30,    30,    31,
      32,    24,     4,   103,     6,     5,     8,     7,    31,     9,
      22,    31,    24,    60,    26,    22,    63,    24,    65,    66,
      22,    68,    24,    30,    31,    32,    28,    29,    30,    31,
      32,    22,     4,    25,     6,    26,     8,    11,    12,    25,
      30,    15,    16,    17,    18,    19,    20,    24,    23,    26,
      22,    98,    24,     5,    27,     7,    28,     9,    30,    31,
      32,    77,    78,    13,    14,    81,    11,    12,    10,    28,
      30,    22,    25,    27,    21,    24,    24,    23,    22,    22,
       3,     5,    77,    81,    25,    25,    25,    24,    23,    78,
      -1,    -1,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     7,     9,    35,    36,    37,    38,    39,    40,
       0,    37,    30,    22,    24,    26,     7,    39,    41,    42,
      43,    31,    30,    25,    23,    27,    10,    28,    44,    43,
      22,    45,    38,    39,    46,    30,     4,     6,     8,    22,
      24,    29,    30,    31,    32,    44,    47,    48,    49,    50,
      51,    52,    53,    54,    56,    58,    60,    61,    62,    63,
      24,    22,    52,    24,    52,    24,    26,    22,    21,    11,
      12,    15,    16,    17,    18,    19,    20,    55,    57,    13,
      14,    59,    52,    22,    52,    25,    52,    64,    65,    52,
      52,    53,    56,    58,    60,    25,    25,    25,    23,    27,
      47,    47,    52,     3,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    38,    39,
      39,    39,    40,    41,    41,    42,    42,    43,    43,    44,
      45,    45,    46,    46,    47,    47,    47,    47,    47,    48,
      48,    49,    49,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    56,    56,
      57,    57,    58,    58,    59,    59,    60,    60,    60,    60,
      60,    61,    62,    63,    64,    64,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     1,     6,     1,     1,     3,     1,     2,     3,     4,
       2,     0,     2,     0,     1,     1,     1,     1,     1,     2,
       1,     5,     7,     5,     2,     3,     3,     1,     1,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     4,     1,     0,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 53 "syntax_analyzer.y"
{
    (yyval.node) = node("program", 1, (yyvsp[0].node)); gt->root = (yyval.node); 
}
#line 1443 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 3:
#line 59 "syntax_analyzer.y"
{
    (yyval.node)=node("declaration-list",2,(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1451 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 4:
#line 63 "syntax_analyzer.y"
{
    (yyval.node)=node("declaration-list",1,(yyvsp[0].node));
}
#line 1459 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 5:
#line 69 "syntax_analyzer.y"
{
    (yyval.node)=node("declaration",1,(yyvsp[0].node));
}
#line 1467 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 6:
#line 73 "syntax_analyzer.y"
{
    (yyval.node)=node("declaration",1,(yyvsp[0].node));
}
#line 1475 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 7:
#line 79 "syntax_analyzer.y"
{
    (yyval.node)=node("var-declaration",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1483 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 8:
#line 83 "syntax_analyzer.y"
{
    (yyval.node)=node("var-declaration",6,(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1491 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 9:
#line 88 "syntax_analyzer.y"
     {(yyval.node)=node("type-specifier",1,(yyvsp[0].node));}
#line 1497 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 10:
#line 89 "syntax_analyzer.y"
       {(yyval.node)=node("type-specifier",1,(yyvsp[0].node));}
#line 1503 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 11:
#line 90 "syntax_analyzer.y"
      {(yyval.node)=node("type-specifier",1,(yyvsp[0].node));}
#line 1509 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 12:
#line 94 "syntax_analyzer.y"
{
    (yyval.node)=node("fun-declaration",6,(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1517 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 13:
#line 100 "syntax_analyzer.y"
{
    (yyval.node)=node("params",1,(yyvsp[0].node));
}
#line 1525 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 14:
#line 104 "syntax_analyzer.y"
{
    (yyval.node)=node("params",1,(yyvsp[0].node));
}
#line 1533 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 15:
#line 110 "syntax_analyzer.y"
{
    (yyval.node)=node("param-list",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1541 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 16:
#line 114 "syntax_analyzer.y"
{
    (yyval.node)=node("param-list",1,(yyvsp[0].node));
}
#line 1549 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 17:
#line 120 "syntax_analyzer.y"
{
    (yyval.node)=node("param",2,(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1557 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 18:
#line 124 "syntax_analyzer.y"
{
    (yyval.node)=node("param",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1565 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 19:
#line 130 "syntax_analyzer.y"
{
    (yyval.node)=node("compound-stmt",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1573 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 20:
#line 136 "syntax_analyzer.y"
{
    (yyval.node)=node("local-declarations",2,(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1581 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 21:
#line 139 "syntax_analyzer.y"
 {
    (yyval.node)=node("local-declarations",0);
}
#line 1589 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 22:
#line 145 "syntax_analyzer.y"
{
    (yyval.node)=node("statement-list",2,(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1597 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 23:
#line 148 "syntax_analyzer.y"
 {
    (yyval.node)=node("statement-list",0);
}
#line 1605 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 24:
#line 153 "syntax_analyzer.y"
                 {(yyval.node)=node("statement",1,(yyvsp[0].node));}
#line 1611 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 25:
#line 154 "syntax_analyzer.y"
               {(yyval.node)=node("statement",1,(yyvsp[0].node));}
#line 1617 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 26:
#line 155 "syntax_analyzer.y"
                {(yyval.node)=node("statement",1,(yyvsp[0].node));}
#line 1623 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 27:
#line 156 "syntax_analyzer.y"
                {(yyval.node)=node("statement",1,(yyvsp[0].node));}
#line 1629 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 28:
#line 157 "syntax_analyzer.y"
             {(yyval.node)=node("statement",1,(yyvsp[0].node));}
#line 1635 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 29:
#line 161 "syntax_analyzer.y"
{
    (yyval.node)=node("expression-stmt",2,(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1643 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 30:
#line 165 "syntax_analyzer.y"
{
    (yyval.node)=node("expression-stmt",1,(yyvsp[0].node));
}
#line 1651 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 31:
#line 171 "syntax_analyzer.y"
{
    (yyval.node)=node("selection-stmt",5,(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1659 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 32:
#line 175 "syntax_analyzer.y"
{
    (yyval.node)=node("selection-stmt",7,(yyvsp[-6].node),(yyvsp[-5].node),(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1667 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 33:
#line 181 "syntax_analyzer.y"
{
    (yyval.node)=node("iteration-stmt",5,(yyvsp[-4].node),(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1675 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 34:
#line 187 "syntax_analyzer.y"
{
    (yyval.node)=node("return-stmt",2,(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1683 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 35:
#line 191 "syntax_analyzer.y"
{
    (yyval.node)=node("return-stmt",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1691 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 36:
#line 197 "syntax_analyzer.y"
{
    (yyval.node)=node("expression",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1699 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 37:
#line 201 "syntax_analyzer.y"
{
    (yyval.node)=node("expression",1,(yyvsp[0].node));
}
#line 1707 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 38:
#line 207 "syntax_analyzer.y"
{
    (yyval.node)=node("var",1,(yyvsp[0].node));
}
#line 1715 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 39:
#line 211 "syntax_analyzer.y"
{
    (yyval.node)=node("var",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1723 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 40:
#line 217 "syntax_analyzer.y"
{
    (yyval.node)=node("simple-expression",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1731 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 41:
#line 221 "syntax_analyzer.y"
{
    (yyval.node)=node("simple-expression",1,(yyvsp[0].node));
}
#line 1739 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 42:
#line 226 "syntax_analyzer.y"
     {(yyval.node)=node("relop",1,(yyvsp[0].node));}
#line 1745 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 43:
#line 227 "syntax_analyzer.y"
    {(yyval.node)=node("relop",1,(yyvsp[0].node));}
#line 1751 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 44:
#line 228 "syntax_analyzer.y"
    {(yyval.node)=node("relop",1,(yyvsp[0].node));}
#line 1757 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 45:
#line 229 "syntax_analyzer.y"
     {(yyval.node)=node("relop",1,(yyvsp[0].node));}
#line 1763 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 46:
#line 230 "syntax_analyzer.y"
    {(yyval.node)=node("relop",1,(yyvsp[0].node));}
#line 1769 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 47:
#line 231 "syntax_analyzer.y"
     {(yyval.node)=node("relop",1,(yyvsp[0].node));}
#line 1775 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 48:
#line 235 "syntax_analyzer.y"
{
    (yyval.node)=node("additive-expression",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1783 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 49:
#line 239 "syntax_analyzer.y"
{
    (yyval.node)=node("additive-expression",1,(yyvsp[0].node));
}
#line 1791 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 50:
#line 244 "syntax_analyzer.y"
     {(yyval.node)=node("addop",1,(yyvsp[0].node));}
#line 1797 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 51:
#line 245 "syntax_analyzer.y"
     {(yyval.node)=node("addop",1,(yyvsp[0].node));}
#line 1803 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 52:
#line 249 "syntax_analyzer.y"
{
    (yyval.node)=node("term",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1811 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 53:
#line 253 "syntax_analyzer.y"
{
    (yyval.node)=node("term",1,(yyvsp[0].node));
}
#line 1819 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 54:
#line 258 "syntax_analyzer.y"
     {(yyval.node)=node("mulop",1,(yyvsp[0].node));}
#line 1825 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 55:
#line 259 "syntax_analyzer.y"
     {(yyval.node)=node("mulop",1,(yyvsp[0].node));}
#line 1831 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 56:
#line 263 "syntax_analyzer.y"
{
    (yyval.node)=node("factor",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1839 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 57:
#line 266 "syntax_analyzer.y"
     {(yyval.node)=node("factor",1,(yyvsp[0].node));}
#line 1845 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 58:
#line 267 "syntax_analyzer.y"
      {(yyval.node)=node("factor",1,(yyvsp[0].node));}
#line 1851 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 59:
#line 268 "syntax_analyzer.y"
         {(yyval.node)=node("factor",1,(yyvsp[0].node));}
#line 1857 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 60:
#line 269 "syntax_analyzer.y"
       {(yyval.node)=node("factor",1,(yyvsp[0].node));}
#line 1863 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 61:
#line 272 "syntax_analyzer.y"
         {(yyval.node)=node("integer",1,(yyvsp[0].node));}
#line 1869 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 62:
#line 275 "syntax_analyzer.y"
            {(yyval.node)=node("float",1,(yyvsp[0].node));}
#line 1875 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 63:
#line 279 "syntax_analyzer.y"
{(yyval.node)=node("call",4,(yyvsp[-3].node),(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));}
#line 1881 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 64:
#line 282 "syntax_analyzer.y"
          {(yyval.node)=node("args",1,(yyvsp[0].node));}
#line 1887 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 65:
#line 283 "syntax_analyzer.y"
 {(yyval.node)=node("args",0);}
#line 1893 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 66:
#line 287 "syntax_analyzer.y"
{
    (yyval.node)=node("arg-list",3,(yyvsp[-2].node),(yyvsp[-1].node),(yyvsp[0].node));
}
#line 1901 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;

  case 67:
#line 291 "syntax_analyzer.y"
{
    (yyval.node)=node("arg-list",1,(yyvsp[0].node));
}
#line 1909 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"
    break;


#line 1913 "/mnt/c/Users/86178/Desktop/cminus_compiler-2021-fall/build/src/parser/syntax_analyzer.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 299 "syntax_analyzer.y"


/// The error reporting function.
void yyerror(const char *s)
{
    // TO STUDENTS: This is just an example.
    // You can customize it as you like.
    fprintf(stderr, "error at line %d column %d: %s\n", lines, pos_start, s);
}

/// Parse input from file `input_path`, and prints the parsing results
/// to stdout.  If input_path is NULL, read from stdin.
///
/// This function initializes essential states before running yyparse().
syntax_tree *parse(const char *input_path)
{
    FILE* yyin;
    if (input_path != NULL) {
        if (!(yyin = fopen(input_path, "r"))) {
            fprintf(stderr, "[ERR] Open input file %s failed.\n", input_path);
            exit(1);
        }
    } else {
        yyin = stdin;
    }

    lines = pos_start = pos_end = 1;
    gt = new_syntax_tree();
    yyrestart(yyin);
    yyparse();
    return gt;
}

/// A helper function to quickly construct a tree node.
///
/// e.g.
///     $$ = node("program", 1, $1);
///     $$ = node("local-declarations", 0);
syntax_tree_node *node(const char *name, int children_num, ...)
{
    syntax_tree_node *p = new_syntax_tree_node(name);
    syntax_tree_node *child;
    if (children_num == 0) {
        child = new_syntax_tree_node("epsilon");
        syntax_tree_add_child(p, child);
    } else {
        va_list ap;
        va_start(ap, children_num);
        for (int i = 0; i < children_num; ++i) {
            child = va_arg(ap, syntax_tree_node *);
            syntax_tree_add_child(p, child);
        }
        va_end(ap);
    }
    return p;
}
