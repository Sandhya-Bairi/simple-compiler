/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include "codegen.h"

unsigned short parameter_count;
extern int yylineno;
extern char *yytext;
char quadBuffer[50];
int funcLineNumber = 0;


#line 79 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


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
    VOID = 258,
    INT = 259,
    FLOAT = 260,
    CONSTANT = 261,
    IDENTIFIER = 262,
    IF = 263,
    ELSE = 264,
    RETURN = 265,
    DO = 266,
    WHILE = 267,
    FOR = 268,
    INC_OP = 269,
    DEC_OP = 270,
    U_PLUS = 271,
    U_MINUS = 272,
    EQUAL = 273,
    NOT_EQUAL = 274,
    GREATER_OR_EQUAL = 275,
    LESS_OR_EQUAL = 276,
    SHIFTLEFT = 277,
    LOG_AND = 278,
    LOG_OR = 279
  };
#endif
/* Tokens.  */
#define VOID 258
#define INT 259
#define FLOAT 260
#define CONSTANT 261
#define IDENTIFIER 262
#define IF 263
#define ELSE 264
#define RETURN 265
#define DO 266
#define WHILE 267
#define FOR 268
#define INC_OP 269
#define DEC_OP 270
#define U_PLUS 271
#define U_MINUS 272
#define EQUAL 273
#define NOT_EQUAL 274
#define GREATER_OR_EQUAL 275
#define LESS_OR_EQUAL 276
#define SHIFTLEFT 277
#define LOG_AND 278
#define LOG_OR 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 31 "parser.y" /* yacc.c:355  */

    char         	*str;
    int           	integer;
    float         	real;
    int           	type;
	struct
	{
	    char                 	*value;
	    int   			type;
	    int				cType;
	    struct BackpatchList* 	trueList;
	    struct BackpatchList* 	falseList;
	} expr;
	struct
	{
	  struct BackpatchList* 	nextList;
	} stmt;
	struct
	{
	  int				quad;
	  struct BackpatchList* 	nextList;
	} mark;
	struct
	{
	    int				count;
	    struct SymbolTableEntry* 	queue;
	} exp_list;

#line 193 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 210 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  162

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,     2,     2,    32,     2,     2,
      34,    35,    30,    28,    39,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    36,
      26,    25,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    83,    90,   102,   109,   120,   125,   133,
     137,   144,   150,   156,   168,   174,   180,   186,   192,   197,
     203,   208,   213,   223,   229,   239,   245,   254,   263,   271,
     280,   289,   298,   304,   324,   330,   339,   346,   355,   376,
     388,   393,   414,   439,   464,   483,   503,   519,   544,   560,
     576,   592,   608,   644,   674,   704,   734,   764,   794,   819,
     826,   839,   848,   854,   887,   920,   936,   947,   961,   968,
     974
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VOID", "INT", "FLOAT", "CONSTANT",
  "IDENTIFIER", "IF", "ELSE", "RETURN", "DO", "WHILE", "FOR", "INC_OP",
  "DEC_OP", "U_PLUS", "U_MINUS", "EQUAL", "NOT_EQUAL", "GREATER_OR_EQUAL",
  "LESS_OR_EQUAL", "SHIFTLEFT", "LOG_AND", "LOG_OR", "'='", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'('", "')'", "';'", "'{'",
  "'}'", "','", "$accept", "program_head", "program", "function",
  "function_body", "declaration_list", "declaration", "parameter_list",
  "var_type", "statement_list", "statement", "matched_statement",
  "unmatched_statement", "assignment", "expression", "exp_list", "id",
  "marker", "jump_marker", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    61,    60,    62,    43,    45,
      42,    47,    37,    33,    40,    41,    59,   123,   125,    44
};
# endif

#define YYPACT_NINF -138

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-138)))

#define YYTABLE_NINF -71

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -138,    30,    70,    70,  -138,  -138,  -138,  -138,  -138,    51,
    -138,  -138,    26,    85,  -138,    51,    51,     5,  -138,  -138,
     -11,    43,  -138,   184,  -138,    51,    51,    51,    51,  -138,
      28,    21,  -138,  -138,    29,   103,   103,   103,   103,   103,
     103,   219,   184,     3,    27,  -138,  -138,  -138,    33,   251,
     -10,  -138,  -138,  -138,  -138,   103,  -138,    42,   231,    57,
     103,  -138,    59,  -138,  -138,  -138,  -138,   131,  -138,    56,
      20,    58,  -138,    51,  -138,   231,  -138,   103,   103,   103,
     103,   103,  -138,  -138,   103,   103,   103,   103,   103,   103,
     103,   103,    65,    62,  -138,    94,   103,    72,  -138,  -138,
    -138,  -138,  -138,  -138,   180,   180,   296,   296,   -20,   103,
     103,   296,   296,    73,    73,  -138,  -138,  -138,   251,  -138,
     251,     6,  -138,    78,    81,  -138,   281,   266,  -138,   103,
     231,  -138,  -138,   103,   251,  -138,   104,   103,   231,    86,
     116,    92,  -138,  -138,  -138,  -138,   102,  -138,  -138,   103,
     231,  -138,  -138,  -138,  -138,   107,  -138,   231,  -138,  -138,
    -138,  -138
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      70,     0,     2,     0,     1,    21,    20,    22,     4,     0,
       3,    68,     0,    19,    18,     0,     0,     0,    14,    15,
       0,     0,     5,     0,     6,     0,     0,     0,     0,    61,
       0,     0,    69,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,    23,    25,    26,     0,    40,
      65,    16,    17,    11,    12,     0,    29,     0,     0,     0,
       0,    42,    65,    43,    59,    60,    58,     0,    35,    69,
       0,    69,     9,     0,     7,     0,    28,     0,     0,     0,
       0,     0,    69,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,    62,    34,
      10,     8,    13,    24,    47,    46,    48,    49,    52,     0,
       0,    51,    50,    53,    54,    55,    56,    57,    41,    64,
      66,     0,    69,     0,     0,    69,    45,    44,    63,     0,
       0,    69,    69,     0,    67,    36,    25,     0,     0,     0,
       0,     0,    70,    70,    69,    69,     0,    31,    37,     0,
       0,    32,    70,    27,    39,     0,    69,     0,    70,    70,
      33,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,  -138,   136,  -138,  -138,   101,  -138,  -138,    44,
     -54,  -107,  -137,   -26,    95,  -138,    -9,   -30,   -75
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,    24,    42,    43,    17,     9,    44,
      45,    46,    47,    48,    49,   121,    62,    75,     3
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,   143,    58,    59,    95,    57,    18,    19,    86,    87,
      88,    89,    90,   154,    50,    91,    51,    52,    53,    54,
     159,   103,    50,   136,    92,    22,    23,    29,    11,    93,
       4,   142,    50,    50,    97,    35,    36,    37,    38,    72,
      20,   128,    73,   153,    21,   129,    50,    25,    26,    50,
     158,    50,   109,   110,    39,    40,   100,    56,    11,    73,
      13,   140,    55,    60,   102,    74,    50,   147,   148,    76,
     124,    29,    11,     5,     6,     7,   135,   155,    94,    35,
      36,    37,    38,   160,   161,    69,    71,    50,    14,    15,
      16,    96,   130,    92,    99,   133,   101,   122,    39,    40,
     119,   137,   138,    88,    89,    90,   123,   139,   125,    29,
      11,   141,   131,   -70,   149,   150,   132,    35,    36,    37,
      38,    50,   144,   152,    50,   145,   157,   146,    50,    50,
      61,    63,    64,    65,    66,    67,    39,    40,   151,    10,
      50,    50,   156,    70,     0,     0,     0,     0,    50,    77,
      78,    79,    80,    81,    82,    83,     0,    84,    85,    86,
      87,    88,    89,    90,     0,     0,    98,     0,     0,     0,
       0,     0,   104,   105,   106,   107,   108,     0,     0,   111,
     112,   113,   114,   115,   116,   117,   118,   120,    27,    28,
      29,    11,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    81,     0,   126,   127,     0,     0,    86,    87,
      88,    89,    90,     0,     0,     0,     0,    39,    40,     0,
       0,    41,     0,     0,   134,    29,    11,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    29,    11,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,    39,    40,     0,     0,    41,    68,     0,     0,
       0,     0,     0,     0,    39,    40,     0,     0,    41,    77,
      78,    79,    80,    81,    82,    83,     0,    84,    85,    86,
      87,    88,    89,    90,    77,    78,    79,    80,    81,    82,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    77,
      78,    79,    80,    81,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    77,    78,     0,     0,    81,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
       9,   138,    32,    33,    58,    31,    15,    16,    28,    29,
      30,    31,    32,   150,    23,    25,    25,    26,    27,    28,
     157,    75,    31,   130,    34,    36,    37,     6,     7,    55,
       0,   138,    41,    42,    60,    14,    15,    16,    17,    36,
      35,    35,    39,   150,    39,    39,    55,     4,     5,    58,
     157,    60,    82,    83,    33,    34,    36,    36,     7,    39,
      34,   136,    34,    34,    73,    38,    75,   142,   143,    36,
      96,     6,     7,     3,     4,     5,   130,   152,    36,    14,
      15,    16,    17,   158,   159,    41,    42,    96,     3,     4,
       5,    34,   122,    34,    38,   125,    38,    35,    33,    34,
      35,   131,   132,    30,    31,    32,    12,   133,    36,     6,
       7,   137,    34,     9,   144,   145,    35,    14,    15,    16,
      17,   130,    36,   149,   133,     9,   156,    35,   137,   138,
      35,    36,    37,    38,    39,    40,    33,    34,    36,     3,
     149,   150,    35,    42,    -1,    -1,    -1,    -1,   157,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    91,    92,     4,     5,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    22,    -1,   109,   110,    -1,    -1,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    37,    -1,    -1,   129,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    33,    34,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    37,    18,
      19,    20,    21,    22,    23,    24,    -1,    26,    27,    28,
      29,    30,    31,    32,    18,    19,    20,    21,    22,    23,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,    58,     0,     3,     4,     5,    43,    48,
      43,     7,    56,    34,     3,     4,     5,    47,    56,    56,
      35,    39,    36,    37,    44,     4,     5,     4,     5,     6,
       8,    10,    11,    12,    13,    14,    15,    16,    17,    33,
      34,    37,    45,    46,    49,    50,    51,    52,    53,    54,
      56,    56,    56,    56,    56,    34,    36,    53,    57,    57,
      34,    54,    56,    54,    54,    54,    54,    54,    38,    49,
      46,    49,    36,    39,    38,    57,    36,    18,    19,    20,
      21,    22,    23,    24,    26,    27,    28,    29,    30,    31,
      32,    25,    34,    53,    36,    50,    34,    53,    35,    38,
      36,    38,    56,    50,    54,    54,    54,    54,    54,    57,
      57,    54,    54,    54,    54,    54,    54,    54,    54,    35,
      54,    55,    35,    12,    53,    36,    54,    54,    35,    39,
      57,    34,    35,    57,    54,    50,    51,    57,    57,    53,
      58,    53,    51,    52,    36,     9,    35,    58,    58,    57,
      57,    36,    53,    51,    52,    58,    35,    57,    51,    52,
      58,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    42,    42,    43,    43,    44,    44,    45,
      45,    46,    46,    46,    47,    47,    47,    47,    47,    47,
      48,    48,    48,    49,    49,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    57,
      58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     6,     6,     3,     4,     2,
       3,     2,     2,     3,     2,     2,     4,     4,     1,     0,
       1,     1,     1,     1,     3,     1,     1,    10,     2,     2,
       3,     8,     9,    14,     3,     2,     6,     8,    14,    10,
       1,     3,     2,     2,     4,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     1,     3,     4,     3,     1,     1,     3,     1,     0,
       0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 72 "parser.y" /* yacc.c:1646  */
    {
	    SymbolTableEntry* mainFunc = lookup("main");
	    if(mainFunc == NULL){
		printf("ERROR: Main function not found!\n");
		yyerror();
	    }
	    backpatch((yyvsp[0].stmt).nextList,mainFunc->line+1);
	}
#line 1430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 84 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:Processing single function.\n");
	    (yyval.stmt).nextList = (yyvsp[-1].mark).nextList;
            backpatch((yyvsp[0].stmt).nextList, nextquad());
            ////printf("PARSER:Done processing single function.\n");
        }
#line 1441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 91 "parser.y" /* yacc.c:1646  */
    {
           // //printf("PARSER:Processing function in function list.\n");
	    (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
            backpatch((yyvsp[0].stmt).nextList, nextquad());
            ////printf("PARSER:Done processing function in function list.\n");
        }
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 103 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found function prototype for %s having %d parameters\n",$2,parameter_count);
            addFunctionPrototype((yyvsp[-4].str), parameter_count, (yyvsp[-5].type));
            parameter_count = 0;
            (yyval.stmt).nextList = NULL;
        }
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 110 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found function definition for %s having %d parameters starting at line %d\n", $2,parameter_count,funcLineNumber);
            addFunction((yyvsp[-4].str), parameter_count, (yyvsp[-5].type), funcLineNumber);
            parameter_count = 0;
	    funcLineNumber = nextquad();
            (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;
        }
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 121 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found function body without declarations\n");
            (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
        }
#line 1484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 126 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found function body with declarations\n");
            (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
        }
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 134 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found declaration\n");
        }
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 138 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found declaration list\n");
        }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "parser.y" /* yacc.c:1646  */
    {
            (yyval.type) = ST_INT;
            addSymbolToQueue((yyvsp[0].str), ST_INT, 0);
            ////printf("PARSER:found integer declaration\n");
        }
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 151 "parser.y" /* yacc.c:1646  */
    {
            (yyval.type) = ST_REAL;
            addSymbolToQueue((yyvsp[0].str), ST_REAL, 0);
            ////printf("PARSER:found float declaration\n");
        }
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 157 "parser.y" /* yacc.c:1646  */
    {
            if(ST_INT == (yyvsp[-2].type)) {
                addSymbolToQueue((yyvsp[0].str), ST_INT, 0);
            } else if(ST_REAL == (yyvsp[-2].type)) {
                addSymbolToQueue((yyvsp[0].str), ST_REAL, 0);
            }
          //  //printf("PARSER:found mutliple declarations\n");
        }
#line 1542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 169 "parser.y" /* yacc.c:1646  */
    {
            parameter_count++;
            addSymbolToQueue((yyvsp[0].str), ST_INT, parameter_count);
            ////printf("PARSER:found integer parameter\n");
        }
#line 1552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 175 "parser.y" /* yacc.c:1646  */
    {
            parameter_count++;
            addSymbolToQueue((yyvsp[0].str), ST_REAL, parameter_count);
            ////printf("PARSER:found float parameter\n");
        }
#line 1562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 181 "parser.y" /* yacc.c:1646  */
    {
            parameter_count++;
            addSymbolToQueue((yyvsp[0].str), ST_INT, parameter_count);
            ////printf("PARSER:found parameter list with integer at end\n");
        }
#line 1572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 187 "parser.y" /* yacc.c:1646  */
    {
            parameter_count++;
            addSymbolToQueue((yyvsp[0].str), ST_REAL, parameter_count);
            ////printf("PARSER:found parameter list with float at end\n");
        }
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 193 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found void parameter\n");
        }
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 197 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found EPSILON parameter\n");
        }
#line 1598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 204 "parser.y" /* yacc.c:1646  */
    {
            (yyval.type) = SIT_INT;
            ////printf("PARSER:found integer variable type\n");
        }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 209 "parser.y" /* yacc.c:1646  */
    {
            (yyval.type) = SIT_NONE;
            ////printf("PARSER:found void return type\n");
        }
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 214 "parser.y" /* yacc.c:1646  */
    {
            (yyval.type) = SIT_REAL;
            ////printf("PARSER:found float variable type\n");
        }
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 224 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing single statement in list statement list.\n");
            (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;
	    ////printf("PARSER:Done processing single statement in list statement list.\n");
        }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 230 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing statement list.\n");
	    backpatch((yyvsp[-2].stmt).nextList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;
	    ////printf("PARSER:Done processing statement list.\n");
        }
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 240 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing matched statement.\n");
	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;
	    ////printf("PARSER:Done processing matched statement.\n");
        }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 246 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing unmatched statement.\n");
	    (yyval.stmt).nextList = (yyvsp[0].stmt).nextList;
	    ////printf("PARSER:Done processing unmatched statement.\n");
        }
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing matched if then else.\n");
	    backpatch((yyvsp[-7].expr).trueList,(yyvsp[-5].mark).quad);
	    backpatch((yyvsp[-7].expr).falseList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].mark).nextList,(yyvsp[0].stmt).nextList);
	    (yyval.stmt).nextList = mergelists((yyval.stmt).nextList,(yyvsp[-4].stmt).nextList);
	    ////printf("PARSER:Done processing matched if then else.\n");
        }
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 264 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing matched assignment.\n");
        //backpatch($1.trueList, 1);
        //backpatch($1.falseList, 0);
	    (yyval.stmt).nextList = NULL;
	    ////printf("PARSER:Done processing matched assignment.\n");
	}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 272 "parser.y" /* yacc.c:1646  */
    {
	    //TODO: Check type, maybe true/falselists
	    ////printf("PARSER:Processing void return.\n");
	    (yyval.stmt).nextList = NULL;
	    sprintf(quadBuffer,"RETURN");
	    genquad(quadBuffer);
	    ////printf("PARSER:Done processing void return.\n");
        }
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 281 "parser.y" /* yacc.c:1646  */
    {
	    //TODO: Check type, maybe true/falselists
	    ////printf("PARSER:Processing return.\n");
	    (yyval.stmt).nextList = NULL;
            sprintf(quadBuffer,"RETURN %s",(yyvsp[-1].expr).value);
	    genquad(quadBuffer);
	    ////printf("PARSER:Done processing return.\n");
        }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 290 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing matched while.\n");
	    backpatch((yyvsp[-4].expr).trueList,(yyvsp[-2].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-4].expr).falseList;
	    backpatch((yyvsp[-1].stmt).nextList,(yyvsp[-6].mark).quad);
	    backpatch((yyvsp[0].mark).nextList,(yyvsp[-6].mark).quad);
	    ////printf("PARSER:Done processing matched while.\n");
        }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 299 "parser.y" /* yacc.c:1646  */
    {
	    backpatch((yyvsp[-6].stmt).nextList,(yyvsp[-3].mark).quad);
	    backpatch((yyvsp[-2].expr).trueList,(yyvsp[-7].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-2].expr).falseList;
        }
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 305 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:Processing matched for\n");
            if(ST_BOOL == (yyvsp[-11].expr).type || ST_BOOL == (yyvsp[-5].expr).type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(ST_BOOL != (yyvsp[-8].expr).type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch((yyvsp[-11].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-1].stmt).nextList, (yyvsp[-6].mark).quad);
            backpatch((yyvsp[0].mark).nextList, (yyvsp[-6].mark).quad);
            (yyval.stmt).nextList = (yyvsp[-8].expr).falseList;
            backpatch((yyvsp[-8].expr).trueList, (yyvsp[-2].mark).quad);
            backpatch((yyvsp[-5].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-4].mark).nextList, (yyvsp[-9].mark).quad);
            ////printf("PARSER:Done processing for\n");
        }
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 325 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing statement block.\n");
	    (yyval.stmt).nextList = (yyvsp[-1].stmt).nextList;
	    ////printf("PARSER:Done processing statement block.\n");
        }
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 331 "parser.y" /* yacc.c:1646  */
    {	    
	    ////printf("PARSER:Processing empty block.\n");
	    (yyval.stmt).nextList = NULL;
	    ////printf("PARSER:Done processing empty block.\n");
        }
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 340 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing unmatched if then.\n");
	    backpatch((yyvsp[-3].expr).trueList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].expr).falseList,(yyvsp[0].stmt).nextList);
	    ////printf("PARSER:Done processing unmatched if then.\n");
        }
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 347 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing unmatched while.\n");
	    backpatch((yyvsp[-4].expr).trueList,(yyvsp[-2].mark).quad);
	    (yyval.stmt).nextList = (yyvsp[-4].expr).falseList;
	    backpatch((yyvsp[-1].stmt).nextList,(yyvsp[-6].mark).quad);
	    backpatch((yyvsp[0].mark).nextList,(yyvsp[-6].mark).quad);
	    ////printf("PARSER:Done processing unmatched while.\n");
        }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 356 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:Processing unmatched for\n");
            if(ST_BOOL == (yyvsp[-11].expr).type || ST_BOOL == (yyvsp[-5].expr).type) {
                printf("error, no boolean statements allowed as 1st or 3rd assignment in for loop\n");
                yyerror();
            }
            if(ST_BOOL != (yyvsp[-8].expr).type) {
                printf("error, 2nd argument of for loop must be boolean\n");
                yyerror();
            }
            backpatch((yyvsp[-11].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-1].stmt).nextList, (yyvsp[-6].mark).quad);
            backpatch((yyvsp[0].mark).nextList, (yyvsp[-6].mark).quad);
            (yyval.stmt).nextList = (yyvsp[-8].expr).falseList;
            backpatch((yyvsp[-8].expr).trueList, (yyvsp[-2].mark).quad);
            backpatch((yyvsp[-5].expr).trueList, (yyvsp[-9].mark).quad);
            backpatch((yyvsp[-4].mark).nextList, (yyvsp[-9].mark).quad);
            ////printf("PARSER:Done processing for\n");
        }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 377 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing unmatched if then else.\n");
	    backpatch((yyvsp[-7].expr).trueList,(yyvsp[-5].mark).quad);
	    backpatch((yyvsp[-7].expr).falseList,(yyvsp[-1].mark).quad);
	    (yyval.stmt).nextList = mergelists((yyvsp[-3].mark).nextList,(yyvsp[0].stmt).nextList);
	    (yyval.stmt).nextList = mergelists((yyval.stmt).nextList,(yyvsp[-4].stmt).nextList);
	    ////printf("PARSER:Done processing unmatched if then else.\n");
        }
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 389 "parser.y" /* yacc.c:1646  */
    {
            ////printf("PARSER:found expression as assignment %s\n", $1.value);
            (yyval.expr)=(yyvsp[0].expr);
        }
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 394 "parser.y" /* yacc.c:1646  */
    {
            int destType = getSymbolType((yyvsp[-2].str));
        	if(destType == 0){
        		printf("ERROR: Not in scope");
        	}
            if(destType != (yyvsp[0].expr).type) {
                printf("Type error on line: %d\n", yylineno);
                yyerror();
            }
            ////printf("PARSER:found real assignment\n");
            sprintf(quadBuffer,"%s := %s",(yyvsp[-2].str),(yyvsp[0].expr).value);
            genquad(quadBuffer);
            (yyval.expr).type = destType;
            (yyval.expr).trueList = (yyvsp[0].expr).trueList;
            (yyval.expr).cType = C_VARIABLE;
            (yyval.expr).value = (yyvsp[-2].str);
        }
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 415 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing increment.");
	    if((yyvsp[0].expr).type != ST_INT){
		    printf("ERROR: Increment not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    //Create a variable if needed
	    if((yyvsp[0].expr).cType != C_VARIABLE){
		    char *var = nextIntVar();
		    sprintf(quadBuffer,"%s := %s",var,(yyvsp[0].expr).value);
		    genquad(quadBuffer);
		    free((yyvsp[0].expr).value);
		    (yyvsp[0].expr).value = var;
		    (yyvsp[0].expr).type = ST_INT;
		    (yyvsp[0].expr).cType = C_VARIABLE;
	    }
            sprintf(quadBuffer,"%s := %s + 1",(yyvsp[0].expr).value,(yyvsp[0].expr).value);
            genquad(quadBuffer);
            //Set the attributes
            (yyval.expr) = (yyvsp[0].expr);
            (yyval.expr).trueList = NULL;
            (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing increment.");
        }
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 440 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing decrement.");
	    if((yyvsp[0].expr).type != ST_INT){
		    printf("ERROR: Decrement not allowed for types different than Integer.\n");
		    yyerror();
	    }
	    //Create a variable if needed
	    if((yyvsp[0].expr).cType != C_VARIABLE){
		    char *var = nextIntVar();
		    sprintf(quadBuffer,"%s := %s",var,(yyvsp[0].expr).value);
		genquad(quadBuffer);
		    free((yyvsp[0].expr).value);
		    (yyvsp[0].expr).value = var;
		    (yyvsp[0].expr).type = ST_INT;
		    (yyvsp[0].expr).cType = C_VARIABLE;
	    }
            sprintf(quadBuffer,"%s := %s - 1",(yyvsp[0].expr).value,(yyvsp[0].expr).value);
            genquad(quadBuffer);
            //Set the attributes
            (yyval.expr) = (yyvsp[0].expr);
            (yyval.expr).trueList = NULL;
            (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing decrement.");
        }
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 465 "parser.y" /* yacc.c:1646  */
    {
            if(ST_BOOL != (yyvsp[-3].expr).type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", (yyvsp[-3].expr).value);
                (yyvsp[-3].expr).trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                (yyvsp[-3].expr).falseList = addToList(NULL, genquad(quadBuffer));
            }
            if(ST_BOOL != (yyvsp[0].expr).type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", (yyvsp[0].expr).value);
                (yyvsp[0].expr).trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                (yyvsp[0].expr).falseList = addToList(NULL, genquad(quadBuffer));
            }
            (yyval.expr).trueList = mergelists((yyvsp[-3].expr).trueList, (yyvsp[0].expr).trueList);
            backpatch((yyvsp[-3].expr).falseList, (yyvsp[-1].mark).quad);
            (yyval.expr).falseList = (yyvsp[0].expr).falseList;
            (yyval.expr).type = ST_BOOL;
	    }
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 484 "parser.y" /* yacc.c:1646  */
    {
            if(ST_BOOL != (yyvsp[-3].expr).type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", (yyvsp[-3].expr).value);
                (yyvsp[-3].expr).trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                (yyvsp[-3].expr).falseList = addToList(NULL, genquad(quadBuffer));
            }
            if(ST_BOOL != (yyvsp[0].expr).type) {
                sprintf(quadBuffer, "IF (%s <> 0) GOTO", (yyvsp[0].expr).value);
                (yyvsp[0].expr).trueList = addToList(NULL, genquad(quadBuffer));
                sprintf(quadBuffer, "GOTO");
                (yyvsp[0].expr).falseList = addToList(NULL, genquad(quadBuffer));
            }
            (yyval.expr).falseList = mergelists((yyvsp[-3].expr).falseList, (yyvsp[0].expr).falseList);
            backpatch((yyvsp[-3].expr).trueList, (yyvsp[-1].mark).quad);
            (yyval.expr).trueList = (yyvsp[0].expr).trueList;
            (yyval.expr).type = ST_BOOL;
        
	  }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 504 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing logical not equal.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(quadBuffer,"IF (%s <> %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = addToList(NULL, genquad(quadBuffer));
            sprintf(quadBuffer,"GOTO");
	    (yyval.expr).falseList = addToList(NULL, genquad(quadBuffer));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = ST_BOOL;
	    (yyval.expr).cType = C_NONE;
	    ////printf("PARSER:Done processing logical not equal.\n");
        }
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 520 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing logical equal.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(quadBuffer,"IF (%s = %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = addToList(NULL, genquad(quadBuffer));
            sprintf(quadBuffer,"GOTO");
	    (yyval.expr).falseList = addToList(NULL, genquad(quadBuffer));
        // jefftest
        if(ST_BOOL == (yyvsp[-2].expr).type) {
            (yyval.expr).trueList = mergelists((yyval.expr).trueList, (yyvsp[-2].expr).trueList);
            (yyval.expr).falseList = mergelists((yyval.expr).falseList, (yyvsp[-2].expr).falseList);
        }
        if(ST_BOOL == (yyvsp[0].expr).type) {
            (yyval.expr).trueList = mergelists((yyval.expr).trueList, (yyvsp[0].expr).trueList);
            (yyval.expr).falseList = mergelists((yyval.expr).falseList, (yyvsp[0].expr).falseList);
        }
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = ST_BOOL;
	    (yyval.expr).cType = C_NONE;
	    ////printf("PARSER:Done processing logical equal.\n");
        }
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 545 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing logical greater or equal.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
            sprintf(quadBuffer,"IF (%s >= %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = addToList(NULL, genquad(quadBuffer));
            sprintf(quadBuffer,"GOTO");
	    (yyval.expr).falseList = addToList(NULL, genquad(quadBuffer));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = ST_BOOL;
	    (yyval.expr).cType = C_NONE;
	    ////printf("PARSER:Done processing logical greater or equal.\n");
        }
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 561 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing logical smaller or equal.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(quadBuffer,"IF (%s <= %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = addToList(NULL, genquad(quadBuffer));
	    sprintf(quadBuffer,"GOTO");
	    (yyval.expr).falseList = addToList(NULL, genquad(quadBuffer));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = ST_BOOL;
	    (yyval.expr).cType = C_NONE;
	    ////printf("PARSER:Done processing logical smaller or equal.\n");
        }
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 577 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing logical bigger.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(quadBuffer,"IF (%s > %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = addToList(NULL, genquad(quadBuffer));
	    sprintf(quadBuffer,"GOTO");
	    (yyval.expr).falseList = addToList(NULL, genquad(quadBuffer));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = ST_BOOL;
	    (yyval.expr).cType = C_NONE;
	    ////printf("PARSER:Done processing logical bigger.\n");
        }
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 593 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing logical smaller.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type != ST_REAL){
		printf("ERROR: Only Integer, Float and Bool values allowed in comparsions.\n");
		yyerror();
	    }
	    sprintf(quadBuffer,"IF (%s < %s) GOTO",(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
	    (yyval.expr).trueList = addToList(NULL, genquad(quadBuffer));
	    sprintf(quadBuffer,"GOTO");
	    (yyval.expr).falseList = addToList(NULL, genquad(quadBuffer));
	    (yyval.expr).value = "TrueFalse Only!";
	    (yyval.expr).type = ST_BOOL;
	    (yyval.expr).cType = C_NONE;
	    ////printf("PARSER:Done processing logical smaller.\n");
        }
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 609 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing left shift.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type!= ST_REAL &&  (yyvsp[0].expr).type != ST_INT){
		printf("ERROR: Only integer and float values allowed when shifting.\n");
		yyerror();
	    }
	    
            char* var = NULL;
            char* shiftVar = nextIntVar();
            switch((yyvsp[-2].expr).type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer, "%s := %s", shiftVar, (yyvsp[0].expr).value);
            genquad(quadBuffer);
            sprintf(quadBuffer, "%s := %s", var, (yyvsp[-2].expr).value);
            genquad(quadBuffer);
            sprintf(quadBuffer, "IF (%s <= 0) GOTO %d", shiftVar, nextquad()+4);
            genquad(quadBuffer);
            sprintf(quadBuffer, "%s := %s * 2", var, var);
            genquad(quadBuffer);
            sprintf(quadBuffer, "%s := %s - 1", shiftVar, shiftVar);
            genquad(quadBuffer);
            sprintf(quadBuffer, "GOTO %d", nextquad()-3);
            genquad(quadBuffer);


            (yyval.expr).value = var;
            (yyval.expr).type = (yyvsp[-2].expr).type;
            (yyval.expr).cType = C_VARIABLE;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing left shift.\n");
        }
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 645 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing addition.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type!= ST_REAL &&  (yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when adding numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s + %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            genquad(quadBuffer);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = C_VARIABLE;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing addition.\n");
        }
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 675 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing substraction.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type!= ST_REAL &&  (yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when substracting numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s - %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            genquad(quadBuffer);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = C_VARIABLE;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing substraction.\n");
        }
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 705 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing multiplication.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type!= ST_REAL &&  (yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when multiplicating numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s * %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            genquad(quadBuffer);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = C_VARIABLE;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing multiplication.\n");
        }
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 735 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing division.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type!= ST_REAL &&  (yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when dividing numbers.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s / %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            genquad(quadBuffer);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = C_VARIABLE;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;
	   // //printf("PARSER:Done processing division.\n");
        }
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 765 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing modulo.\n");
	    if((yyvsp[-2].expr).type != ST_INT && (yyvsp[-2].expr).type!= ST_REAL &&  (yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		printf("ERROR: Only integer and float values allowed when caluclating mod.\n");
		yyerror();
	    }
	    int type = 0;
	    if((yyvsp[-2].expr).type == (yyvsp[0].expr).type){
		type = (yyvsp[-2].expr).type;
	    }
	    else{
		type = ST_REAL;
	    }
	    
	    char* var = NULL;
            switch(type){
            	case ST_INT: var = nextIntVar();break;
            	case ST_REAL:var = nextFloatVar();break;
            }
            char buffer[50];
            sprintf(quadBuffer,"%s := %s \% %s",var,(yyvsp[-2].expr).value,(yyvsp[0].expr).value);
            genquad(quadBuffer);
            (yyval.expr).value = var;
            (yyval.expr).type = type;
            (yyval.expr).cType = C_VARIABLE;
	    (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing modulo.\n");
        }
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 795 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing logical not.\n");
	    if((yyvsp[0].expr).type != ST_BOOL){
		if((yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		    printf("ERROR: Only Bool, Int and Float allowed in logical expressions!\n");
		    yyerror();
		}
		//char* var = nextBoolVar();
		//sprintf(quadBuffer,"%s = FALSE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"IF (%s <> 0) GOTO",(yyvsp[0].expr).value);
		(yyval.expr).falseList = addToList(NULL,genquad(quadBuffer));
		//sprintf(quadBuffer,"%s = TRUE",var);
		//genquad(quadBuffer);
		sprintf(quadBuffer,"GOTO",(yyvsp[0].expr).value);
		(yyval.expr).trueList = addToList(NULL,genquad(quadBuffer));
	    }
	    else{
	      (yyval.expr) = (yyvsp[0].expr);
	      (yyval.expr).trueList = (yyvsp[0].expr).falseList;
	      (yyval.expr).falseList = (yyvsp[0].expr).trueList;
	    }
	   // //printf("PARSER:Done processing logical not.\n");
	}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 820 "parser.y" /* yacc.c:1646  */
    {
            if(ST_INT != (yyvsp[0].expr).type && ST_REAL != (yyvsp[0].expr).type) {
                yyerror();
            }
            (yyval.expr) = (yyvsp[0].expr);
        }
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 827 "parser.y" /* yacc.c:1646  */
    {
            (yyval.expr) = (yyvsp[0].expr);
            if(ST_INT == (yyvsp[0].expr).type) {
                (yyval.expr).value = nextIntVar();
            } else if (ST_REAL == (yyvsp[0].expr).type) {
                (yyval.expr).value = nextFloatVar();
            } else {
                yyerror();
            }
            sprintf(quadBuffer, "%s := -%s", (yyval.expr).value, (yyvsp[0].expr).value);
            genquad(quadBuffer);
       }
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 840 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing constant.\n");
            (yyval.expr).value = strdup(yytext);
            (yyval.expr).trueList = NULL;
	    (yyval.expr).falseList = NULL;
	    ////printf("PARSER:Done processing constant.\n");
            
        }
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 849 "parser.y" /* yacc.c:1646  */
    {
           // //printf("PARSER:Processing expression in parentheses.\n");
	    (yyval.expr) = (yyvsp[-1].expr);
	   // //printf("PARSER:Done processing expression in parentheses.\n");
        }
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 855 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing function call with parameters.\n");
            int varType = getFunctionType((yyvsp[-3].str));
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",(yyvsp[-3].str));
		yyerror();
            }
            char* var = NULL;
            switch(varType){
            case SIT_BOOL:
                var = nextBoolVar();
                (yyval.expr).type = ST_BOOL;
                break;
            case SIT_REAL:
                var = nextFloatVar();
                (yyval.expr).type = ST_REAL;
                break;
            case SIT_INT:
                var = nextIntVar();
                (yyval.expr).type = ST_INT;
                break;
            case SIT_NONE:
                (yyval.expr).type = ST_NONE;
                break;
            }
	    (yyval.expr).value = var;
	    (yyval.expr).cType = C_VARIABLE;
	    checkAndGenerateParams((yyvsp[-1].exp_list).queue,(yyvsp[-3].str),(yyvsp[-1].exp_list).count);
            sprintf(quadBuffer,"%s := CALL %s, %d",var,(yyvsp[-3].str),(yyvsp[-1].exp_list).count);
            genquad(quadBuffer);
	    ////printf("PARSER:Done processing function call with parameters.\n");
        }
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 888 "parser.y" /* yacc.c:1646  */
    {
	    ////printf("PARSER:Processing function call.\n");
            int varType = getFunctionType((yyvsp[-2].str));
            if(varType == 0){
            	printf("ERROR: Function %s not defined!\n",(yyvsp[-2].str));
		yyerror();
            }
            char* var = NULL;
            switch(varType){
            case SIT_BOOL:
                var = nextBoolVar;
                (yyval.expr).type = ST_BOOL;
                break;
            case SIT_REAL:
                var = nextFloatVar;
                (yyval.expr).type = ST_REAL;
                break;
            case SIT_INT:
                var = nextIntVar;
                (yyval.expr).type = ST_INT;
                break;
            case SIT_NONE:
                (yyval.expr).type = ST_NONE;
                break;
            }
	    (yyval.expr).value = var;
	    (yyval.expr).cType = C_VARIABLE;
	    checkAndGenerateParams(NULL,(yyvsp[-2].str),0);
            sprintf(quadBuffer,"%s := CALL %s, %d",var,(yyvsp[-2].str),0);
            genquad(quadBuffer);
	    //printf("PARSER:Done processing function call.\n");
        }
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 921 "parser.y" /* yacc.c:1646  */
    {
	    //printf("PARSER:Processing identifier.\n");
	    int varType = getSymbolType((yyvsp[0].str));
            if(varType == 0){
            	printf("ERROR: Variable %s not in scope!\n",(yyvsp[0].str));
		yyerror();
            }
	    (yyval.expr).value = (yyvsp[0].str);
	    (yyval.expr).type = varType;
	    (yyval.expr).cType = C_VARIABLE;
	    //printf("PARSER:Done processing identifier.\n");
        }
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 937 "parser.y" /* yacc.c:1646  */
    {
	    //printf("PARSER:Processing expression list.\n");
	    if((yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		yyerror();
	    }
	    (yyval.exp_list).queue = addSymbolToParameterQueue(NULL,(yyvsp[0].expr).value,(yyvsp[0].expr).type);
	    (yyval.exp_list).count = 1;
	    //printf("PARSER:Done processing expression list.\n");
        }
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 948 "parser.y" /* yacc.c:1646  */
    {
	    //printf("PARSER:Processing expression list.\n");
	      if((yyvsp[0].expr).type != ST_INT && (yyvsp[0].expr).type != ST_REAL){
		  printf("ERROR: Only Integer and Float are allowed as parameter types.\n");
		  yyerror();
	      }
	      (yyval.exp_list).queue = addSymbolToParameterQueue((yyvsp[-2].exp_list).queue,(yyvsp[0].expr).value,(yyvsp[0].expr).type);
	      (yyval.exp_list).count = (yyvsp[-2].exp_list).count + 1;
	    //printf("PARSER:Done processing expression list.\n");
        }
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 962 "parser.y" /* yacc.c:1646  */
    {
            //printf("PARSER:found identifier %s\n", $1);
            (yyval.str) = strdup(yytext);
        }
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 968 "parser.y" /* yacc.c:1646  */
    {	
	      //printf("PARSER:Generating marker.\n");
	      (yyval.mark).quad = nextquad();
	      //printf("PARSER:Done with the marker.\n");
	}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 974 "parser.y" /* yacc.c:1646  */
    {
	      //printf("PARSER:Generating jump marker.\n");
	      (yyval.mark).quad = nextquad();
	      sprintf(quadBuffer,"GOTO");
	      (yyval.mark).nextList = addToList(NULL, genquad(quadBuffer));
	      //printf("PARSER:Done with the jump marker.\n");
   }
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2556 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 981 "parser.y" /* yacc.c:1906  */

