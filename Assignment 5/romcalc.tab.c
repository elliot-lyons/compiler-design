
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "romcalc.y"

#include <stdio.h>
#include <stdlib.h>

int yylex(void);
void yyerror();

void translate(int number)
{
    if (number < 0)
    {
        number = number * -1;
        printf("-");
    }

    if (number == 0)
    {
        printf("Z");
    }

    else
    {
        char *symbols[13] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int numbers[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};

        int max = 12;

        while (number > 0)
        {
            int div = number / numbers[max];
            number = number % numbers[max];

            while (div > 0)
            {
                printf("%s", symbols[max]);
                div--;
            }

            max--;
        }
    }

    printf("\n");
}


/* Line 189 of yacc.c  */
#line 120 "romcalc.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ONE = 258,
     FIVE = 259,
     TEN = 260,
     FIFTY = 261,
     ONE_HUNDRED = 262,
     FIVE_HUNDRED = 263,
     ONE_THOUSAND = 264,
     ADD = 265,
     SUB = 266,
     MUL = 267,
     DIV = 268,
     LEFT = 269,
     RIGHT = 270,
     EOL = 271
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 178 "romcalc.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   128

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  17
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNRULES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   271

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      15,    16
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     8,    10,    14,    18,    20,    24,
      28,    32,    35,    38,    41,    44,    47,    50,    53,    54,
      57,    59,    61,    62,    64,    65,    67,    70,    74,    75,
      78,    81,    84,    87,    90,    91,    94,    97,   100,   101,
     104,   107,   110,   111,   114,   117,   118,   121,   124,   127,
     128,   131,   134,   137,   140,   143,   146,   149,   150,   153,
     156,   159,   162,   165,   166,   169,   172,   175,   178,   181,
     182,   185,   188,   191,   194,   195,   198,   201,   204,   207,
     210,   211,   214,   217,   220,   223,   226,   229
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      18,     0,    -1,    -1,    18,    19,    16,    -1,    20,    -1,
      19,    10,    20,    -1,    19,    11,    20,    -1,    21,    -1,
      20,    12,    21,    -1,    20,    13,    21,    -1,    14,    19,
      15,    -1,     3,    22,    -1,     4,    24,    -1,     5,    25,
      -1,     6,    29,    -1,     7,    30,    -1,     8,    34,    -1,
       9,    35,    -1,    -1,     3,    23,    -1,     4,    -1,     5,
      -1,    -1,     3,    -1,    -1,     3,    -1,     3,     3,    -1,
       3,     3,     3,    -1,    -1,     3,    22,    -1,     4,    24,
      -1,     5,    27,    -1,     6,    28,    -1,     7,    28,    -1,
      -1,     3,    22,    -1,     4,    24,    -1,     5,    27,    -1,
      -1,     3,    22,    -1,     4,    24,    -1,     5,    28,    -1,
      -1,     3,    22,    -1,     4,    24,    -1,    -1,     3,    22,
      -1,     4,    24,    -1,     5,    26,    -1,    -1,     3,    22,
      -1,     4,    24,    -1,     5,    25,    -1,     6,    29,    -1,
       7,    32,    -1,     8,    33,    -1,     9,    33,    -1,    -1,
       3,    22,    -1,     4,    24,    -1,     5,    25,    -1,     6,
      29,    -1,     7,    32,    -1,    -1,     3,    22,    -1,     4,
      24,    -1,     5,    25,    -1,     6,    29,    -1,     7,    33,
      -1,    -1,     3,    22,    -1,     4,    24,    -1,     5,    25,
      -1,     6,    29,    -1,    -1,     3,    22,    -1,     4,    24,
      -1,     5,    25,    -1,     6,    29,    -1,     7,    31,    -1,
      -1,     3,    22,    -1,     4,    24,    -1,     5,    25,    -1,
       6,    29,    -1,     7,    30,    -1,     8,    34,    -1,     9,
      35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    51,    51,    52,    55,    56,    57,    60,    61,    62,
      65,    66,    67,    68,    69,    70,    71,    72,    75,    76,
      77,    78,    81,    82,    85,    86,    87,    88,    91,    92,
      93,    94,    95,    96,    99,   100,   101,   102,   105,   106,
     107,   108,   111,   112,   113,   117,   118,   119,   120,   124,
     125,   126,   127,   128,   129,   130,   131,   134,   135,   136,
     137,   138,   139,   141,   142,   143,   144,   145,   146,   149,
     150,   151,   152,   153,   157,   158,   159,   160,   161,   162,
     166,   167,   168,   169,   170,   171,   172,   173
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ONE", "FIVE", "TEN", "FIFTY",
  "ONE_HUNDRED", "FIVE_HUNDRED", "ONE_THOUSAND", "ADD", "SUB", "MUL",
  "DIV", "LEFT", "RIGHT", "EOL", "$accept", "input", "exp", "factor",
  "num", "aft_one", "aft_two_one", "aft_fiv", "aft_ten", "alt_ten",
  "aft_two_ten", "fin_ten", "aft_fif", "aft_oh", "alt_oh", "aft_two_oh",
  "fin_oh", "aft_fh", "aft_ot", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    17,    18,    18,    19,    19,    19,    20,    20,    20,
      21,    21,    21,    21,    21,    21,    21,    21,    22,    22,
      22,    22,    23,    23,    24,    24,    24,    24,    25,    25,
      25,    25,    25,    25,    26,    26,    26,    26,    27,    27,
      27,    27,    28,    28,    28,    29,    29,    29,    29,    30,
      30,    30,    30,    30,    30,    30,    30,    31,    31,    31,
      31,    31,    31,    32,    32,    32,    32,    32,    32,    33,
      33,    33,    33,    33,    34,    34,    34,    34,    34,    34,
      35,    35,    35,    35,    35,    35,    35,    35
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     3,     1,     3,     3,     1,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     0,     2,
       1,     1,     0,     1,     0,     1,     2,     3,     0,     2,
       2,     2,     2,     2,     0,     2,     2,     2,     0,     2,
       2,     2,     0,     2,     2,     0,     2,     2,     2,     0,
       2,     2,     2,     2,     2,     2,     2,     0,     2,     2,
       2,     2,     2,     0,     2,     2,     2,     2,     2,     0,
       2,     2,     2,     2,     0,     2,     2,     2,     2,     2,
       0,     2,     2,     2,     2,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    18,    24,    28,    45,    49,    74,    80,
       0,     0,     4,     7,    22,    20,    21,    11,    25,    12,
      18,    24,    38,    42,    42,    13,    18,    24,    34,    14,
      18,    24,    28,    45,    63,    69,    69,    15,    18,    24,
      28,    45,    57,    16,    18,    24,    28,    45,    49,    74,
      80,    17,     0,     0,     0,     3,     0,     0,    23,    19,
      26,    29,    30,    18,    24,    42,    31,    18,    24,    32,
      33,    46,    47,    18,    24,    38,    48,    50,    51,    52,
      53,    18,    24,    28,    45,    69,    54,    18,    24,    28,
      45,    55,    56,    75,    76,    77,    78,    18,    24,    28,
      45,    63,    79,    81,    82,    83,    84,    85,    86,    87,
      10,     5,     6,     8,     9,    27,    39,    40,    41,    43,
      44,    35,    36,    37,    64,    65,    66,    67,    68,    70,
      71,    72,    73,    58,    59,    60,    61,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    11,    12,    13,    17,    59,    19,    25,    76,
      66,    69,    29,    37,   102,    86,    91,    43,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -32
static const yytype_int8 yypact[] =
{
     -32,    25,   -32,    37,    18,    68,    61,    89,   103,    96,
      77,     3,    38,   -32,    41,   -32,   -32,   -32,    43,   -32,
      37,    18,    84,     1,     1,   -32,    37,    18,   118,   -32,
      37,    18,    68,    61,   108,    32,    32,   -32,    37,    18,
      68,    61,   113,   -32,    37,    18,    68,    61,    89,   103,
      96,   -32,    12,    77,    77,   -32,    77,    77,   -32,   -32,
      45,   -32,   -32,    37,    18,     1,   -32,    37,    18,   -32,
     -32,   -32,   -32,    37,    18,    84,   -32,   -32,   -32,   -32,
     -32,    37,    18,    68,    61,    32,   -32,    37,    18,    68,
      61,   -32,   -32,   -32,   -32,   -32,   -32,    37,    18,    68,
      61,   108,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,    38,    38,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,    49,    71,    70,   -20,   -32,   -19,   -31,   -32,
     -13,    -8,   -30,    28,   -32,   -23,   -29,    79,    40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      61,    79,    62,    80,    67,    68,    71,    92,    72,    95,
      77,    96,    78,    53,    54,   105,    70,   106,    93,    55,
      94,    18,    53,    54,   103,     2,   104,   110,     3,     4,
       5,     6,     7,     8,     9,    87,    88,    89,    90,    10,
      14,    15,    16,   116,    58,   117,    60,   119,   115,   120,
      56,    57,   126,   121,   127,   122,   128,   118,   131,    52,
     132,   124,   123,   125,    26,    27,    28,   129,   135,   130,
     136,    20,    21,    22,    23,    24,   107,   133,   137,   134,
       3,     4,     5,     6,     7,     8,     9,    63,    64,    65,
     109,    10,    30,    31,    32,    33,    34,    35,    36,    44,
      45,    46,    47,    48,    49,    50,    38,    39,    40,    41,
      42,    81,    82,    83,    84,    85,    97,    98,    99,   100,
     101,    73,    74,    75,   111,   112,   113,   114,   108
};

static const yytype_uint8 yycheck[] =
{
      20,    32,    21,    33,     3,     4,    26,    36,    27,    40,
      30,    41,    31,    10,    11,    46,    24,    47,    38,    16,
      39,     3,    10,    11,    44,     0,    45,    15,     3,     4,
       5,     6,     7,     8,     9,     3,     4,     5,     6,    14,
       3,     4,     5,    63,     3,    64,     3,    67,     3,    68,
      12,    13,    83,    73,    84,    74,    85,    65,    89,    10,
      90,    81,    75,    82,     3,     4,     5,    87,    99,    88,
     100,     3,     4,     5,     6,     7,    48,    97,   101,    98,
       3,     4,     5,     6,     7,     8,     9,     3,     4,     5,
      50,    14,     3,     4,     5,     6,     7,     8,     9,     3,
       4,     5,     6,     7,     8,     9,     3,     4,     5,     6,
       7,     3,     4,     5,     6,     7,     3,     4,     5,     6,
       7,     3,     4,     5,    53,    54,    56,    57,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    18,     0,     3,     4,     5,     6,     7,     8,     9,
      14,    19,    20,    21,     3,     4,     5,    22,     3,    24,
       3,     4,     5,     6,     7,    25,     3,     4,     5,    29,
       3,     4,     5,     6,     7,     8,     9,    30,     3,     4,
       5,     6,     7,    34,     3,     4,     5,     6,     7,     8,
       9,    35,    19,    10,    11,    16,    12,    13,     3,    23,
       3,    22,    24,     3,     4,     5,    27,     3,     4,    28,
      28,    22,    24,     3,     4,     5,    26,    22,    24,    25,
      29,     3,     4,     5,     6,     7,    32,     3,     4,     5,
       6,    33,    33,    22,    24,    25,    29,     3,     4,     5,
       6,     7,    31,    22,    24,    25,    29,    30,    34,    35,
      15,    20,    20,    21,    21,     3,    22,    24,    28,    22,
      24,    22,    24,    27,    22,    24,    25,    29,    33,    22,
      24,    25,    29,    22,    24,    25,    29,    32
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 52 "romcalc.y"
    { translate((yyvsp[(2) - (3)])); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 56 "romcalc.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 57 "romcalc.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 61 "romcalc.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 62 "romcalc.y"
    { (yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 65 "romcalc.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 66 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 67 "romcalc.y"
    {  (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 68 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 69 "romcalc.y"
    {  (yyval) = 50 + (yyvsp[(2) - (2)]); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 70 "romcalc.y"
    {  (yyval) = 100 + (yyvsp[(2) - (2)]); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 71 "romcalc.y"
    {  (yyval) = 500 + (yyvsp[(2) - (2)]); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 72 "romcalc.y"
    {  (yyval) = 1000 + (yyvsp[(2) - (2)]); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 75 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 76 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 77 "romcalc.y"
    { (yyval) = 3; ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 78 "romcalc.y"
    { (yyval) = 8; ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 81 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 82 "romcalc.y"
    { (yyval) = 1; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 85 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 86 "romcalc.y"
    { (yyval) = 1; ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 87 "romcalc.y"
    { (yyval) = 2; ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 88 "romcalc.y"
    { (yyval) = 3; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 91 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 92 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 93 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 94 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 95 "romcalc.y"
    { (yyval) = 30 + (yyvsp[(2) - (2)]); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 96 "romcalc.y"
    { (yyval) = 80 + (yyvsp[(2) - (2)]); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 99 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 100 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 101 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 102 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 105 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 106 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 107 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 108 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 111 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 112 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 113 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 117 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 118 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 119 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 120 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 124 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 125 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 126 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 127 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 128 "romcalc.y"
    { (yyval) = 50 + (yyvsp[(2) - (2)]); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 129 "romcalc.y"
    { (yyval) = 100 + (yyvsp[(2) - (2)]); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 130 "romcalc.y"
    { (yyval) = 300 + (yyvsp[(2) - (2)]); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 131 "romcalc.y"
    { (yyval) = 800 + (yyvsp[(2) - (2)]); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 134 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 135 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 136 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 137 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 138 "romcalc.y"
    { (yyval) = 50 + (yyvsp[(2) - (2)]); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 139 "romcalc.y"
    { (yyval) = 100 + (yyvsp[(2) - (2)]); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 141 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 142 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 143 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 144 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 145 "romcalc.y"
    { (yyval) = 50 + (yyvsp[(2) - (2)]); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 146 "romcalc.y"
    { (yyval) = 100 + (yyvsp[(2) - (2)]); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 149 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 150 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 151 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 152 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 153 "romcalc.y"
    { (yyval) = 50 + (yyvsp[(2) - (2)]); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 157 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 158 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 159 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 160 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 161 "romcalc.y"
    { (yyval) = 50 + (yyvsp[(2) - (2)]); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 162 "romcalc.y"
    { (yyval) = 100 + (yyvsp[(2) - (2)]); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 166 "romcalc.y"
    { (yyval) = 0; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 167 "romcalc.y"
    { (yyval) = 1 + (yyvsp[(2) - (2)]); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 168 "romcalc.y"
    { (yyval) = 5 + (yyvsp[(2) - (2)]); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 169 "romcalc.y"
    { (yyval) = 10 + (yyvsp[(2) - (2)]); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 170 "romcalc.y"
    { (yyval) = 50 + (yyvsp[(2) - (2)]); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 171 "romcalc.y"
    { (yyval) = 100 + (yyvsp[(2) - (2)]); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 172 "romcalc.y"
    { (yyval) = 500 + (yyvsp[(2) - (2)]); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 173 "romcalc.y"
    { (yyval) = 1000 + (yyvsp[(2) - (2)]); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2063 "romcalc.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 176 "romcalc.y"


int main() 
{
    yyparse();
    return 0;
}

void yyerror()
{
    printf("syntax error\n");
    exit(0);
}

