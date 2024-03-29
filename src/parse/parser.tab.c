/* A Bison parser, made by GNU Bison 1.875d.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     VARIABLE = 259,
     DQSTR = 260,
     SQSTR = 261,
     LNUM = 262,
     DNUM = 263,
     EXP_NUM = 264,
     HNUM = 265,
     SOME_CHAR = 266,
     CLASS = 267,
     NEW = 268,
     FUNCTION = 269,
     VAR = 270,
     EXTENDS = 271,
     FOR = 272,
     INCLUDE = 273,
     DEFINE = 274
   };
#endif
#define ID 258
#define VARIABLE 259
#define DQSTR 260
#define SQSTR 261
#define LNUM 262
#define DNUM 263
#define EXP_NUM 264
#define HNUM 265
#define SOME_CHAR 266
#define CLASS 267
#define NEW 268
#define FUNCTION 269
#define VAR 270
#define EXTENDS 271
#define FOR 272
#define INCLUDE 273
#define DEFINE 274




/* Copy the first part of user declarations.  */


#include "SemanticValue.h"
#define YYSTYPE SemanticValue

#define YYINITDEPTH 1000
#define YYMAXDEPTH 500000

#include "parser.tab.h"
#include "lex.yy.c"

// void* parameter name to be passed to yyparse function
#define YYPARSE_PARAM params

// report error descriptions
#define YYERROR_VERBOSE

// %pure-parser , int yylex (YYSTYPE *lvalp, YYLTYPE *llocp) {  *lvalp = value; }

int yyerror(const char *s);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 214 of yacc.c.  */


#if ! defined (yyoverflow) || YYERROR_VERBOSE

# ifndef YYFREE
#  define YYFREE free
# endif
# ifndef YYMALLOC
#  define YYMALLOC malloc
# endif

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   define YYSTACK_ALLOC alloca
#  endif
# else
#  if defined (alloca) || defined (_ALLOCA_H)
#   define YYSTACK_ALLOC alloca
#  else
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
# else
#  if defined (__STDC__) || defined (__cplusplus)
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   define YYSIZE_T size_t
#  endif
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  register YYSIZE_T yyi;		\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (0)
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   260

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  31
/* YYNRULES -- Number of rules. */
#define YYNRULES  67
/* YYNRULES -- Number of states. */
#define YYNSTATES  111

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   274

#define YYTRANSLATE(YYX) 						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,    23,     2,     2,    22,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    26,     2,    27,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    24,     2,    25,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned char yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    14,    16,    18,
      22,    30,    35,    39,    41,    44,    48,    50,    53,    55,
      57,    58,    60,    63,    67,    70,    78,    80,    83,    84,
      88,    89,    93,    95,    96,    98,    99,   102,   103,   109,
     111,   112,   114,   117,   121,   123,   127,   130,   134,   136,
     140,   150,   152,   155,   157,   159,   161,   164,   166,   168,
     170,   172,   174,   176,   178,   180,   182,   184
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const yysigned_char yyrhs[] =
{
      29,     0,    -1,    30,    -1,    -1,    31,    -1,    31,    30,
      -1,    54,    20,    -1,    38,    -1,    46,    -1,    18,    32,
      20,    -1,    19,    21,    54,    22,    52,    23,    20,    -1,
      54,    24,    29,    25,    -1,    24,    29,    25,    -1,    53,
      -1,     1,    20,    -1,    21,    54,    23,    -1,    54,    -1,
      34,    35,    -1,     4,    -1,    36,    -1,    -1,    37,    -1,
      37,    36,    -1,    26,    54,    27,    -1,    26,    27,    -1,
      12,    39,    40,    24,    41,    45,    25,    -1,     3,    -1,
      16,     3,    -1,    -1,    42,    44,    41,    -1,    -1,    15,
      33,    43,    -1,    54,    -1,    -1,    20,    -1,    -1,    46,
      45,    -1,    -1,    14,    47,    48,    49,    31,    -1,    11,
      -1,    -1,     3,    -1,    21,    23,    -1,    21,    50,    23,
      -1,    54,    -1,    54,    22,    50,    -1,    21,    23,    -1,
      21,    52,    23,    -1,    54,    -1,    54,    22,    52,    -1,
      17,    21,    54,    20,    54,    20,    54,    23,    31,    -1,
      55,    -1,    55,    54,    -1,     3,    -1,    33,    -1,    58,
      -1,    13,     3,    -1,    11,    -1,    36,    -1,    51,    -1,
       5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    56,    -1,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned char yyrline[] =
{
       0,    31,    31,    31,    33,    34,    36,    37,    38,    39,
      40,    44,    45,    46,    47,    49,    50,    52,    60,    69,
      70,    72,    73,    75,    76,    79,    93,    99,   100,   102,
     103,   105,   111,   112,   114,   115,   117,   118,   120,   130,
     131,   133,   139,   140,   142,   143,   145,   146,   148,   149,
     151,   153,   154,   156,   157,   158,   159,   168,   169,   170,
     172,   173,   175,   175,   175,   175,   177,   177
};
#endif

#if YYDEBUG || YYERROR_VERBOSE
/* YYTNME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VARIABLE", "DQSTR", "SQSTR",
  "LNUM", "DNUM", "EXP_NUM", "HNUM", "SOME_CHAR", "CLASS", "NEW",
  "FUNCTION", "VAR", "EXTENDS", "FOR", "INCLUDE", "DEFINE", "';'", "'('",
  "','", "')'", "'{'", "'}'", "'['", "']'", "$accept", "code",
  "statement_list", "statement", "inc_exp", "variable", "variable_name",
  "indices", "index_lst", "index", "class_decl", "class_name", "extends",
  "var_decl_list", "var_decl", "init_val", "list_sep", "fn_decl_list",
  "function_decl", "ref", "function_name", "params", "param_list", "args",
  "arg_list", "for_statement", "expression", "term", "str", "num",
  "scalar_value", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      59,    40,    44,    41,   123,   125,    91,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    28,    29,    29,    30,    30,    31,    31,    31,    31,
      31,    31,    31,    31,    31,    32,    32,    33,    34,    35,
      35,    36,    36,    37,    37,    38,    39,    40,    40,    41,
      41,    42,    43,    43,    44,    44,    45,    45,    46,    47,
      47,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    54,    54,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    57,    57,    57,    57,    58,    58
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     1,     2,     2,     1,     1,     3,
       7,     4,     3,     1,     2,     3,     1,     2,     1,     1,
       0,     1,     2,     3,     2,     7,     1,     2,     0,     3,
       0,     3,     1,     0,     1,     0,     2,     0,     5,     1,
       0,     1,     2,     3,     1,     3,     2,     3,     1,     3,
       9,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned char yydefact[] =
{
       0,     0,    53,    18,    60,    61,    62,    63,    64,    65,
      57,     0,     0,    40,     0,     0,     0,     0,     0,     0,
       0,     2,     0,    54,    20,    58,    21,     7,     8,    59,
      13,     0,    51,    66,    67,    55,    14,    26,    28,    56,
      39,     0,     0,     0,     0,    16,     0,    46,     0,    48,
       0,    24,     0,     1,     5,    17,    19,    22,     6,     0,
      52,     0,     0,    41,     0,     0,     0,     9,     0,    47,
       0,    12,    23,     0,    27,    30,     0,     0,     0,    15,
       0,    49,    11,     0,    37,    35,    42,     0,    44,    38,
       0,     0,    33,     0,    37,    34,    30,    43,     0,     0,
       0,    31,    32,    25,    36,    29,    45,     0,    10,     0,
      50
};

/* YYDEFGOTO[NTERM-NUM]. */
static const yysigned_char yydefgoto[] =
{
      -1,    20,    21,    22,    44,    23,    24,    55,    25,    26,
      27,    38,    62,    84,    85,   101,    96,    93,    28,    41,
      64,    77,    87,    29,    48,    30,    31,    32,    33,    34,
      35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -80
static const short int yypact[] =
{
     112,     1,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,    22,    23,    25,    16,   210,    17,    41,   136,     3,
      39,   -80,    85,   -80,    14,   -80,    14,   -80,   -80,   -80,
     -80,    -1,   234,   -80,   -80,   -80,   -80,   -80,    27,   -80,
     -80,    38,   234,    41,    33,   -80,   234,   -80,    34,    36,
      31,   -80,    32,   -80,   -80,   -80,   -80,   -80,   -80,   136,
     -80,    57,    42,   -80,    47,    49,    11,   -80,    48,   -80,
     234,   -80,   -80,    46,   -80,    58,   186,   162,   234,   -80,
     234,   -80,   -80,    68,    60,    55,   -80,    53,    56,   -80,
      59,    64,   234,    75,    60,   -80,    58,   -80,   234,   234,
      61,   -80,   -80,   -80,   -80,   -80,   -80,    78,   -80,   162,
     -80
};

/* YYPGOTO[NTERM-NUM].  */
static const yysigned_char yypgoto[] =
{
     -80,   -17,    83,   -74,   -80,    -3,   -80,   -80,    -6,   -80,
     -80,   -80,   -80,   -14,   -80,   -80,   -80,    13,   -79,   -80,
     -80,   -80,    10,   -80,   -48,   -80,   -15,   -80,   -80,   -80,
     -80
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -5
static const yysigned_char yytable[] =
{
      45,    50,    49,    89,    52,    94,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    94,    12,    60,    56,    58,
      57,    36,    81,    59,    17,    37,    39,    65,    66,    19,
      51,    68,    91,    70,    79,   110,    40,    42,    46,    53,
      19,    63,    73,    61,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    67,    12,    49,    71,    69,    70,    72,
      74,    88,    17,    90,    47,    49,    75,    19,    76,    78,
      80,    82,     3,    83,    13,    95,    97,   102,    98,    99,
      92,   108,   105,    88,   107,    -4,     1,   100,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     103,   109,    14,    15,    16,    54,    17,   104,   106,    18,
      -4,    19,    -3,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,    14,
      15,    16,     0,    17,     0,     0,    18,     1,    19,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,     0,     0,    14,    15,    16,     0,    17,     0,     0,
      18,    -3,    19,     1,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,     0,     0,    14,
      15,    16,     0,    17,     0,     0,    18,     0,    19,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,    12,
       0,     0,     0,     0,     0,     0,     0,    17,     0,    86,
       0,     0,    19,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,    12,     0,     0,     0,     0,     0,     0,
       0,    43,     0,     0,     0,     0,    19,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,    12,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,     0,
      19
};

static const yysigned_char yycheck[] =
{
      15,    18,    17,    77,    19,    84,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    94,    13,    32,    24,    20,
      26,    20,    70,    24,    21,     3,     3,    42,    43,    26,
      27,    46,    80,    22,    23,   109,    11,    21,    21,     0,
      26,     3,    59,    16,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    20,    13,    70,    25,    23,    22,    27,
       3,    76,    21,    78,    23,    80,    24,    26,    21,    20,
      22,    25,     4,    15,    14,    20,    23,    92,    22,    20,
      83,    20,    96,    98,    99,     0,     1,    23,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      25,    23,    17,    18,    19,    22,    21,    94,    98,    24,
      25,    26,     0,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    -1,    21,    -1,    -1,    24,     1,    26,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    -1,    -1,    17,    18,    19,    -1,    21,    -1,    -1,
      24,    25,    26,     1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    -1,    17,
      18,    19,    -1,    21,    -1,    -1,    24,    -1,    26,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    23,
      -1,    -1,    26,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    26,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      26
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    17,    18,    19,    21,    24,    26,
      29,    30,    31,    33,    34,    36,    37,    38,    46,    51,
      53,    54,    55,    56,    57,    58,    20,     3,    39,     3,
      11,    47,    21,    21,    32,    54,    21,    23,    52,    54,
      29,    27,    54,     0,    30,    35,    36,    36,    20,    24,
      54,    16,    40,     3,    48,    54,    54,    20,    54,    23,
      22,    25,    27,    29,     3,    24,    21,    49,    20,    23,
      22,    52,    25,    15,    41,    42,    23,    50,    54,    31,
      54,    52,    33,    45,    46,    20,    44,    23,    22,    20,
      23,    43,    54,    25,    45,    41,    50,    54,    20,    23,
      31
};

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# if defined (__STDC__) || defined (__cplusplus)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# endif
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { 								\
      yyerror ("syntax error: cannot back up");\
      YYERROR;							\
    }								\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

/* YYLLOC_DEFAULT -- Compute the default location (before the actions
   are run).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)		\
   ((Current).first_line   = (Rhs)[1].first_line,	\
    (Current).first_column = (Rhs)[1].first_column,	\
    (Current).last_line    = (Rhs)[N].last_line,	\
    (Current).last_column  = (Rhs)[N].last_column)
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
} while (0)

# define YYDSYMPRINT(Args)			\
do {						\
  if (yydebug)					\
    yysymprint Args;				\
} while (0)

# define YYDSYMPRINTF(Title, Token, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr, 					\
                  Token, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %u), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname [yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname [yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YYDSYMPRINT(Args)
# define YYDSYMPRINTF(Title, Token, Value, Location)
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
   SIZE_MAX < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#if defined (YYMAXDEPTH) && YYMAXDEPTH == 0
# undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  register const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
{
  register char *yyd = yydest;
  register const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

#endif /* !YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    {
      YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
# ifdef YYPRINT
      YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
    }
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yydestruct (int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yytype, yyvaluep)
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  switch (yytype)
    {

      default:
        break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  register int yystate;
  register int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  register short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  register YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow ("parser stack overflow",
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyoverflowlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyoverflowlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	short int *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyoverflowlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

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
      YYDSYMPRINTF ("Next token is", yytoken, &yylval, &yylloc);
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */
  YYDPRINTF ((stderr, "Shifting token %s, ", yytname[yytoken]));

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
        case 7:

    { ((YyParams*)params)->CodeMan->AddClass(yyvsp[0].Cls);  ;}
    break;

  case 8:

    { ((YyParams*)params)->CodeMan->AddGlobalFunction(yyvsp[0].Fn);  ;}
    break;

  case 9:

    { ((YyParams*)params)->AddParseFile(yyvsp[-1].Str);  ;}
    break;

  case 10:

    { ((YyParams*)params)->CodeMan->AddConstant(yyvsp[-4].Str,
     																							((YyParams*)params)->FileName);
                            									 
                                     				;}
    break;

  case 11:

    { /* if, while , switch .. */ 	;}
    break;

  case 12:

    { /* fn, for loop body, etc */		;}
    break;

  case 13:

    { /* special because of the ";"'s */ ;}
    break;

  case 14:

    { yyerror("<stmt>");  /*				*/ ;}
    break;

  case 15:

    { yyval = yyvsp[-1];	;}
    break;

  case 16:

    { yyval = yyvsp[0];	;}
    break;

  case 17:

    { yyval = yyvsp[-1] + yyvsp[0];
																		((YyParams*)params)->CodeMan->AddGlobalVariable(yyvsp[-1].Var);
																		((YyParams*)params)->CodeMan->GlobalVariables[yyvsp[-1].Var.Name].AddArrayKey(yyvsp[0].Str);
																		((YyParams*)params)->CodeMan->GlobalVariables[yyvsp[-1].Var.Name].LineNo = yyvsp[-1].Var.LineNo;
																		
																		 yyval.Var.LineNo = yyvsp[-1].Var.LineNo;
																		;}
    break;

  case 18:

    {	yyval = yytext;
																				yyval.Var.Name = yytext;
																				yyval.Var.LocationFile = ((YyParams*)params)->FileName;
																				
																				yyval.Var.LineNo = line_no;
																				
																				((YyParams*)params)->LastVar = yytext;	
																			;}
    break;

  case 19:

    { yyval = yyvsp[0]; 	;}
    break;

  case 20:

    { yyval = ""; 			;}
    break;

  case 21:

    {	yyval = yyvsp[0] ;}
    break;

  case 22:

    {	yyval = yyvsp[-1] + yyvsp[0]; ;}
    break;

  case 23:

    { yyval = "[" + yyvsp[-1] + "]"; 	;}
    break;

  case 24:

    { yyval = "[]"; 						;}
    break;

  case 25:

    {
																				//printf("Class: '%s'\n", $2.Str.c_str() );
																				
																				yyval.Cls.Name = yyvsp[-5].Str;
																				yyval.Cls.BaseClassName = yyvsp[-4].Str;
																				yyval.Cls.Variables = yyvsp[-2].VarMap;
																				yyval.Cls.Functions = yyvsp[-1].FnMap;
																				yyval.Cls.LocationFile = ((YyParams*)params)->FileName;
																				yyval.Cls.LineNo = yyvsp[-5].LineNo;
																				yyval.Cls.JavaDoc = CurJavaDoc;
																				CurJavaDoc = "";
																			;}
    break;

  case 26:

    { yyval = yytext; 	
																				yyval.LineNo = line_no; 
																				
																				//printf("Classname: '%s' in '%s'\n", yytext, ((YyParams*)params)->FileName.c_str() );
																			;}
    break;

  case 27:

    { yyval = yytext;  			;}
    break;

  case 28:

    { yyval = ""; 						;}
    break;

  case 29:

    { yyval.VarMap = yyvsp[0].AddVar(yyvsp[-2].Var);  ;}
    break;

  case 30:

    {  								;}
    break;

  case 31:

    { yyval.Var.Name = yyvsp[-1].Str;	
																				yyval.Var.LineNo = yyvsp[-1].Var.LineNo;
																				yyval.Var.JavaDoc = CurJavaDoc;
																				CurJavaDoc = "";
																			;}
    break;

  case 34:

    { yyval = ";"; 	;}
    break;

  case 35:

    { yyval = ""; 		;}
    break;

  case 36:

    { yyval.FnMap = yyvsp[0].AddFn(yyvsp[-1].Fn); ;}
    break;

  case 37:

    {  							;}
    break;

  case 38:

    { 
                     												yyval.Fn.Name = yyvsp[-2].Str;  
                                 						yyval.Fn.Parameters = yyvsp[-1].StrVect;   
                                 						yyval.Fn.LocationFile = ((YyParams*)params)->FileName;
                                 						yyval.Fn.LineNo = yyvsp[-2].LineNo;
																						yyval.Fn.JavaDoc = CurJavaDoc;
																						CurJavaDoc = "";
                      						        ;}
    break;

  case 39:

    {	yyval = yytext[0];		;}
    break;

  case 40:

    {	yyval = "";			;}
    break;

  case 41:

    {	yyval = yytext;
																			yyval.LineNo = line_no; 
																			
																			//printf("Fn name: '%s'\n", yytext );
																		;}
    break;

  case 42:

    { /* returns an empty vector */ ;}
    break;

  case 43:

    { yyval.StrVect = yyvsp[-1].StrVect; 			;}
    break;

  case 44:

    { yyval.AppendStr(yyvsp[0].Str);  ;}
    break;

  case 45:

    { yyval.StrVect = yyvsp[0].PrependStr(yyvsp[-2].Str); ;}
    break;

  case 46:

    { yyval = "()"; ;}
    break;

  case 47:

    { yyval = "(" + yyvsp[-1] + ")"; ;}
    break;

  case 48:

    { yyval = yyvsp[0];    ;}
    break;

  case 49:

    { yyval = yyvsp[-2] + "," + yyvsp[0]; ;}
    break;

  case 51:

    { yyval = yyvsp[0]; ;}
    break;

  case 52:

    { yyval = yyvsp[-1] + yyvsp[0]; ;}
    break;

  case 53:

    { yyval = yytext; ;}
    break;

  case 54:

    { yyval = yyvsp[0]; 			;}
    break;

  case 55:

    { yyval = yytext; ;}
    break;

  case 56:

    { 
     																	yyval = "new "; yyval = yyval + yytext;	
     																	
   																		yyval.Var.Name = ((YyParams*)params)->LastVar;
           														yyval.Var.Type = yytext;
           														yyval.Var.LocationFile = ((YyParams*)params)->FileName;
           														
           														((YyParams*)params)->CodeMan->AddGlobalVariable(yyval.Var);
                              			;}
    break;

  case 57:

    { yyval = yytext[0]; ;}
    break;

  case 58:

    { yyval = yyvsp[0]; ;}
    break;

  case 59:

    { yyval = yyvsp[0]; ;}
    break;

  case 60:

    { yyval = yytext; ;}
    break;

  case 61:

    { yyval = yytext; ;}
    break;


    }

/* Line 1010 of yacc.c.  */


  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  YYSIZE_T yysize = 0;
	  int yytype = YYTRANSLATE (yychar);
	  const char* yyprefix;
	  char *yymsg;
	  int yyx;

	  /* Start YYX at -YYN if negative to avoid negative indexes in
	     YYCHECK.  */
	  int yyxbegin = yyn < 0 ? -yyn : 0;

	  /* Stay within bounds of both yycheck and yytname.  */
	  int yychecklim = YYLAST - yyn;
	  int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
	  int yycount = 0;

	  yyprefix = ", expecting ";
	  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	      {
		yysize += yystrlen (yyprefix) + yystrlen (yytname [yyx]);
		yycount += 1;
		if (yycount == 5)
		  {
		    yysize = 0;
		    break;
		  }
	      }
	  yysize += (sizeof ("syntax error, unexpected ")
		     + yystrlen (yytname[yytype]));
	  yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg != 0)
	    {
	      char *yyp = yystpcpy (yymsg, "syntax error, unexpected ");
	      yyp = yystpcpy (yyp, yytname[yytype]);

	      if (yycount < 5)
		{
		  yyprefix = ", expecting ";
		  for (yyx = yyxbegin; yyx < yyxend; ++yyx)
		    if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
		      {
			yyp = yystpcpy (yyp, yyprefix);
			yyp = yystpcpy (yyp, yytname[yyx]);
			yyprefix = " or ";
		      }
		}
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    yyerror ("syntax error; also virtual memory exhausted");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror ("syntax error");
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* If at end of input, pop the error token,
	     then the rest of the stack, then return failure.  */
	  if (yychar == YYEOF)
	     for (;;)
	       {
		 YYPOPSTACK;
		 if (yyssp == yyss)
		   YYABORT;
		 YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
		 yydestruct (yystos[*yyssp], yyvsp);
	       }
        }
      else
	{
	  YYDSYMPRINTF ("Error: discarding", yytoken, &yylval, &yylloc);
	  yydestruct (yytoken, &yylval);
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

#ifdef __GNUC__
  /* Pacify GCC when the user code never invokes YYERROR and the label
     yyerrorlab therefore never appears in user code.  */
  if (0)
     goto yyerrorlab;
#endif

  yyvsp -= yylen;
  yyssp -= yylen;
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

      YYDSYMPRINTF ("Error: popping", yystos[*yyssp], yyvsp, yylsp);
      yydestruct (yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  YYDPRINTF ((stderr, "Shifting error token, "));

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*----------------------------------------------.
| yyoverflowlab -- parser overflow comes here.  |
`----------------------------------------------*/
yyoverflowlab:
  yyerror ("parser stack overflow");
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}




//--------------------------------------------------------------------------
int yyerror(const char *s)  /* Called by yyparse on error */
{
  //printf ("[%d] Parse error: '%s' near '%s'\n", line_no, s, yytext);
	return 0;
}
//--------------------------------------------------------------------------


