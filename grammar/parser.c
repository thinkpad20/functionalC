/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 34 "parser.y"

#include <stdio.h>

extern int lineno;

static void yyerror(const char *s);

/* Line 371 of yacc.c  */
#line 76 "y.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPEDEF_NAME = 259,
     INTEGER = 260,
     FLOATING = 261,
     CHARACTER = 262,
     STRING = 263,
     ELLIPSIS = 264,
     ADDEQ = 265,
     SUBEQ = 266,
     MULEQ = 267,
     DIVEQ = 268,
     MODEQ = 269,
     XOREQ = 270,
     ANDEQ = 271,
     OREQ = 272,
     SL = 273,
     SR = 274,
     SLEQ = 275,
     SREQ = 276,
     EQ = 277,
     NOTEQ = 278,
     LTEQ = 279,
     GTEQ = 280,
     ANDAND = 281,
     OROR = 282,
     PLUSPLUS = 283,
     MINUSMINUS = 284,
     ARROW = 285,
     AUTO = 286,
     BREAK = 287,
     CASE = 288,
     CHAR = 289,
     CONST = 290,
     CONTINUE = 291,
     DEFAULT = 292,
     DO = 293,
     DOUBLE = 294,
     ELSE = 295,
     ENUM = 296,
     EXTERN = 297,
     FLOAT = 298,
     FOR = 299,
     GOTO = 300,
     IF = 301,
     INT = 302,
     LONG = 303,
     REGISTER = 304,
     RETURN = 305,
     SHORT = 306,
     SIGNED = 307,
     SIZEOF = 308,
     STATIC = 309,
     STRUCT = 310,
     SWITCH = 311,
     TYPEDEF = 312,
     UNION = 313,
     UNSIGNED = 314,
     VOID = 315,
     VOLATILE = 316,
     WHILE = 317
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPEDEF_NAME 259
#define INTEGER 260
#define FLOATING 261
#define CHARACTER 262
#define STRING 263
#define ELLIPSIS 264
#define ADDEQ 265
#define SUBEQ 266
#define MULEQ 267
#define DIVEQ 268
#define MODEQ 269
#define XOREQ 270
#define ANDEQ 271
#define OREQ 272
#define SL 273
#define SR 274
#define SLEQ 275
#define SREQ 276
#define EQ 277
#define NOTEQ 278
#define LTEQ 279
#define GTEQ 280
#define ANDAND 281
#define OROR 282
#define PLUSPLUS 283
#define MINUSMINUS 284
#define ARROW 285
#define AUTO 286
#define BREAK 287
#define CASE 288
#define CHAR 289
#define CONST 290
#define CONTINUE 291
#define DEFAULT 292
#define DO 293
#define DOUBLE 294
#define ELSE 295
#define ENUM 296
#define EXTERN 297
#define FLOAT 298
#define FOR 299
#define GOTO 300
#define IF 301
#define INT 302
#define LONG 303
#define REGISTER 304
#define RETURN 305
#define SHORT 306
#define SIGNED 307
#define SIZEOF 308
#define STATIC 309
#define STRUCT 310
#define SWITCH 311
#define TYPEDEF 312
#define UNION 313
#define UNSIGNED 314
#define VOID 315
#define VOLATILE 316
#define WHILE 317



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 266 "y.tab.c"

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

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1706

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  221
/* YYNRULES -- Number of states.  */
#define YYNSTATES  375

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    17,    19,
      21,    26,    31,    35,    39,    43,    46,    49,    51,    55,
      57,    60,    63,    66,    69,    74,    76,    78,    80,    82,
      84,    86,    88,    93,    95,    99,   103,   107,   109,   113,
     117,   119,   123,   127,   129,   133,   137,   141,   145,   147,
     151,   155,   157,   161,   163,   167,   169,   173,   175,   179,
     181,   185,   187,   193,   195,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   223,   227,   229,
     233,   236,   239,   241,   244,   246,   249,   251,   253,   257,
     259,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   293,   295,   297,   303,
     308,   311,   313,   315,   317,   320,   324,   327,   329,   332,
     334,   336,   340,   342,   345,   349,   355,   360,   363,   365,
     369,   371,   375,   377,   379,   382,   384,   386,   390,   395,
     399,   404,   409,   413,   416,   418,   422,   425,   427,   430,
     432,   436,   438,   442,   445,   448,   450,   452,   456,   458,
     461,   463,   465,   468,   472,   475,   479,   483,   488,   491,
     495,   499,   504,   506,   510,   515,   517,   521,   523,   525,
     527,   529,   531,   533,   537,   542,   546,   549,   553,   557,
     562,   564,   567,   569,   572,   574,   577,   583,   591,   597,
     603,   611,   618,   626,   634,   643,   651,   660,   669,   679,
     683,   686,   689,   692,   696,   698,   701,   703,   705,   710,
     714,   718
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,    89,    -1,     5,    -1,     7,    -1,     6,
      -1,     8,    -1,    63,   108,    64,    -1,     3,    -1,    88,
      -1,    90,    65,   108,    66,    -1,    90,    63,    91,    64,
      -1,    90,    63,    64,    -1,    90,    67,    89,    -1,    90,
      30,    89,    -1,    90,    28,    -1,    90,    29,    -1,   106,
      -1,    91,    68,   106,    -1,    90,    -1,    28,    92,    -1,
      29,    92,    -1,    93,    94,    -1,    53,    92,    -1,    53,
      63,   135,    64,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    92,    -1,    63,   135,
      64,    94,    -1,    94,    -1,    95,    70,    94,    -1,    95,
      75,    94,    -1,    95,    76,    94,    -1,    95,    -1,    96,
      71,    95,    -1,    96,    72,    95,    -1,    96,    -1,    97,
      18,    96,    -1,    97,    19,    96,    -1,    97,    -1,    98,
      77,    97,    -1,    98,    78,    97,    -1,    98,    24,    97,
      -1,    98,    25,    97,    -1,    98,    -1,    99,    22,    98,
      -1,    99,    23,    98,    -1,    99,    -1,   100,    69,    99,
      -1,   100,    -1,   101,    79,   100,    -1,   101,    -1,   102,
      80,   101,    -1,   102,    -1,   103,    26,   102,    -1,   103,
      -1,   104,    27,   103,    -1,   104,    -1,   104,    81,   108,
      82,   105,    -1,   105,    -1,    92,   107,   106,    -1,    83,
      -1,    12,    -1,    13,    -1,    14,    -1,    10,    -1,    11,
      -1,    20,    -1,    21,    -1,    16,    -1,    15,    -1,    17,
      -1,   106,    -1,   108,    68,   106,    -1,   105,    -1,   111,
     112,    84,    -1,   111,    84,    -1,   114,   111,    -1,   114,
      -1,   115,   111,    -1,   115,    -1,   126,   111,    -1,   126,
      -1,   113,    -1,   112,    68,   113,    -1,   127,    -1,   127,
      83,   138,    -1,    57,    -1,    42,    -1,    54,    -1,    31,
      -1,    49,    -1,    60,    -1,    34,    -1,    51,    -1,    47,
      -1,    48,    -1,    43,    -1,    39,    -1,    52,    -1,    59,
      -1,   116,    -1,   123,    -1,     4,    -1,   117,    89,    85,
     118,    86,    -1,   117,    85,   118,    86,    -1,   117,    89,
      -1,    55,    -1,    58,    -1,   119,    -1,   118,   119,    -1,
     120,   121,    84,    -1,   115,   120,    -1,   115,    -1,   126,
     120,    -1,   126,    -1,   122,    -1,   121,    68,   122,    -1,
     127,    -1,    82,   109,    -1,   127,    82,   109,    -1,    41,
      89,    85,   124,    86,    -1,    41,    85,   124,    86,    -1,
      41,    89,    -1,   125,    -1,   124,    68,   125,    -1,    89,
      -1,    89,    83,   109,    -1,    35,    -1,    61,    -1,   129,
     128,    -1,   128,    -1,    89,    -1,    63,   127,    64,    -1,
     128,    65,   109,    66,    -1,   128,    65,    66,    -1,   128,
      63,   131,    64,    -1,   128,    63,   134,    64,    -1,   128,
      63,    64,    -1,    70,   130,    -1,    70,    -1,    70,   130,
     129,    -1,    70,   129,    -1,   126,    -1,   130,   126,    -1,
     132,    -1,   132,    68,     9,    -1,   133,    -1,   132,    68,
     133,    -1,   111,   127,    -1,   111,   136,    -1,   111,    -1,
      89,    -1,   134,    68,    89,    -1,   120,    -1,   120,   136,
      -1,   129,    -1,   137,    -1,   129,   137,    -1,    63,   136,
      64,    -1,    65,    66,    -1,    65,   109,    66,    -1,   137,
      65,    66,    -1,   137,    65,   109,    66,    -1,    63,    64,
      -1,    63,   131,    64,    -1,   137,    63,    64,    -1,   137,
      63,   131,    64,    -1,   106,    -1,    85,   139,    86,    -1,
      85,   139,    68,    86,    -1,   138,    -1,   139,    68,   138,
      -1,   141,    -1,   142,    -1,   145,    -1,   146,    -1,   147,
      -1,   148,    -1,    89,    82,   140,    -1,    33,   109,    82,
     140,    -1,    37,    82,   140,    -1,    85,    86,    -1,    85,
     144,    86,    -1,    85,   143,    86,    -1,    85,   143,   144,
      86,    -1,   110,    -1,   143,   110,    -1,   140,    -1,   144,
     140,    -1,    84,    -1,   108,    84,    -1,    46,    63,   108,
      64,   140,    -1,    46,    63,   108,    64,   140,    40,   140,
      -1,    56,    63,   108,    64,   140,    -1,    62,    63,   108,
      64,   140,    -1,    38,   140,    62,    63,   108,    64,    84,
      -1,    44,    63,    84,    84,    64,   140,    -1,    44,    63,
     108,    84,    84,    64,   140,    -1,    44,    63,    84,   108,
      84,    64,   140,    -1,    44,    63,   108,    84,   108,    84,
      64,   140,    -1,    44,    63,    84,    84,   108,    64,   140,
      -1,    44,    63,   108,    84,    84,   108,    64,   140,    -1,
      44,    63,    84,   108,    84,   108,    64,   140,    -1,    44,
      63,   108,    84,   108,    84,   108,    64,   140,    -1,    45,
      89,    84,    -1,    36,    84,    -1,    32,    84,    -1,    50,
      84,    -1,    50,   108,    84,    -1,   150,    -1,   149,   150,
      -1,   151,    -1,   110,    -1,   111,   127,   143,   142,    -1,
     111,   127,   142,    -1,   127,   143,   142,    -1,   127,   142,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    59,    60,    61,    62,    63,    67,    71,
      72,    73,    74,    75,    76,    77,    78,    82,    83,    87,
      88,    89,    90,    91,    92,    96,    97,    98,    99,   100,
     101,   105,   106,   110,   111,   112,   113,   117,   118,   119,
     123,   124,   125,   129,   130,   131,   132,   133,   137,   138,
     139,   143,   144,   148,   149,   153,   154,   158,   159,   163,
     164,   168,   169,   173,   174,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   192,   193,   197,   201,
     202,   206,   207,   208,   209,   210,   211,   215,   216,   220,
     221,   225,   226,   227,   228,   229,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   248,   249,
     250,   254,   255,   259,   260,   264,   268,   269,   270,   271,
     275,   276,   280,   281,   282,   286,   287,   288,   292,   293,
     297,   298,   302,   303,   307,   308,   312,   313,   314,   315,
     316,   317,   318,   322,   323,   324,   325,   329,   330,   334,
     335,   339,   340,   344,   345,   346,   350,   351,   355,   356,
     360,   361,   362,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   378,   379,   380,   384,   385,   391,   392,   393,
     394,   395,   396,   400,   401,   402,   406,   407,   408,   409,
     413,   414,   418,   419,   423,   424,   428,   429,   430,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   447,
     448,   449,   450,   451,   457,   458,   462,   463,   467,   468,
     469,   470
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPEDEF_NAME", "INTEGER",
  "FLOATING", "CHARACTER", "STRING", "ELLIPSIS", "ADDEQ", "SUBEQ", "MULEQ",
  "DIVEQ", "MODEQ", "XOREQ", "ANDEQ", "OREQ", "SL", "SR", "SLEQ", "SREQ",
  "EQ", "NOTEQ", "LTEQ", "GTEQ", "ANDAND", "OROR", "PLUSPLUS",
  "MINUSMINUS", "ARROW", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "'('", "')'", "'['", "']'",
  "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'",
  "$accept", "primary_expression", "identifier", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    40,    41,    91,    93,    46,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    88,    89,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    96,    96,    96,
      97,    97,    97,    98,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   108,   108,   109,   110,
     110,   111,   111,   111,   111,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     116,   117,   117,   118,   118,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   122,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   130,   130,   131,
     131,   132,   132,   133,   133,   133,   134,   134,   135,   135,
     136,   136,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   138,   139,   139,   140,   140,   140,
     140,   140,   140,   141,   141,   141,   142,   142,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   146,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   148,
     148,   148,   148,   148,   149,   149,   150,   150,   151,   151,
     151,   151
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       4,     4,     3,     3,     3,     2,     2,     1,     3,     1,
       2,     2,     2,     2,     4,     1,     1,     1,     1,     1,
       1,     1,     4,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       2,     2,     1,     2,     1,     2,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     4,
       2,     1,     1,     1,     2,     3,     2,     1,     2,     1,
       1,     3,     1,     2,     3,     5,     4,     2,     1,     3,
       1,     3,     1,     1,     2,     1,     1,     3,     4,     3,
       4,     4,     3,     2,     1,     3,     2,     1,     2,     1,
       3,     1,     3,     2,     2,     1,     1,     3,     1,     2,
       1,     1,     2,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     3,     4,     1,     3,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     5,     7,     5,     5,
       7,     6,     7,     7,     8,     7,     8,     8,     9,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     4,     3,
       3,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,   107,    94,    97,   132,   102,     0,    92,   101,
      99,   100,    95,    98,   103,    93,   111,    91,   112,   104,
      96,   133,     0,   144,   136,   217,     0,    82,    84,   105,
       0,   106,    86,     0,   135,     0,     0,   214,   216,     0,
     127,     0,   147,   146,   143,    80,     0,    87,    89,    81,
      83,     0,   110,    85,     0,   190,     0,   221,     0,     0,
       0,   134,     1,   215,   130,     0,   128,     0,   137,   148,
     145,     0,    79,     0,   219,     0,   117,     0,   113,     0,
     119,     0,     3,     5,     4,     6,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,    30,   194,   186,     9,
       2,    19,    31,     0,    33,    37,    40,    43,    48,    51,
      53,    55,    57,    59,    61,    63,    76,     0,   192,   177,
     178,     0,     0,   179,   180,   181,   182,    89,   191,   220,
     142,   156,   155,     0,   149,   151,     0,   139,     2,    31,
      78,     0,     0,     0,   126,     0,    88,     0,   172,    90,
     218,   116,   109,   114,     0,     0,   120,   122,   118,     0,
       0,    20,    21,   211,     0,   210,     0,     0,     0,     0,
       0,   212,     0,     0,    23,     0,     0,     0,   158,     0,
       0,    15,    16,     0,     0,     0,     0,    69,    70,    66,
      67,    68,    74,    73,    75,    71,    72,    65,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     195,   188,     0,   187,   193,     0,     0,   153,   160,   154,
     161,   140,     0,   141,     0,   138,   131,   129,   125,   175,
       0,   123,     0,   115,     0,   108,     0,   185,     0,     0,
       0,   209,     0,   213,     0,     0,     0,     7,     0,   160,
     159,     0,   183,    14,    12,     0,    17,     0,    13,    64,
      34,    35,    36,    38,    39,    41,    42,    46,    47,    44,
      45,    49,    50,    52,    54,    56,    58,    60,     0,    77,
     189,   168,     0,     0,   164,     0,   162,     0,     0,   150,
     152,   157,     0,   173,   121,   124,   184,     0,     0,     0,
       0,     0,    24,     0,     0,    32,    11,     0,    10,     0,
     169,   163,   165,   170,     0,   166,     0,   174,   176,     0,
       0,     0,     0,     0,     0,   196,   198,   199,    18,    62,
     171,   167,     0,   201,     0,     0,     0,     0,     0,     0,
       0,   200,   205,   203,     0,   202,     0,     0,     0,   197,
     207,   206,   204,     0,   208
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   109,   148,   111,   275,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     208,   127,   151,    55,    56,    46,    47,    27,    28,    29,
      30,    77,    78,    79,   165,   166,    31,    65,    66,    32,
      33,    34,    35,    44,   302,   144,   145,   146,   189,   303,
     240,   159,   250,   128,   129,   130,    58,   132,   133,   134,
     135,   136,    36,    37,    38
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -230
static const yytype_int16 yypact[] =
{
    1443,  -230,  -230,  -230,  -230,  -230,  -230,     8,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,    92,    73,  -230,  -230,    18,  1617,  1617,  -230,
      13,  -230,  1617,   838,   -12,    24,  1369,  -230,  -230,     5,
       4,   -16,  -230,  -230,    73,  -230,    -6,  -230,   780,  -230,
    -230,  1645,    26,  -230,   396,  -230,    18,  -230,   838,  1517,
    1068,   -12,  -230,  -230,   -42,   -44,  -230,     5,  -230,  -230,
    -230,    92,  -230,   695,  -230,   838,  1645,   691,  -230,    74,
    1645,  1645,  -230,  -230,  -230,  -230,  1290,  1290,    25,  1305,
      37,    63,   643,    91,     5,   106,   847,  1317,   109,   128,
    1009,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
      79,   298,   395,  1305,  -230,   119,    69,   257,    82,   274,
     150,   148,   162,   227,   -23,  -230,  -230,     2,  -230,  -230,
    -230,   468,   306,  -230,  -230,  -230,  -230,   176,  -230,  -230,
    -230,  -230,    49,   197,   200,  -230,   107,  -230,  -230,  -230,
    -230,   204,  1305,     5,  -230,   -43,  -230,   695,  -230,  -230,
    -230,  -230,  -230,  -230,  1305,    52,  -230,   195,  -230,   740,
    1305,  -230,  -230,  -230,   211,  -230,   643,   237,   898,   223,
    1305,  -230,    81,  1009,  -230,  1305,  1305,   110,   122,   240,
     643,  -230,  -230,     5,  1082,  1305,     5,  -230,  -230,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -230,  1305,  -230,
    1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,
    1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,  1305,
    -230,  -230,   540,  -230,  -230,  1402,  1095,  -230,    20,  -230,
      53,  -230,  1585,  -230,     5,  -230,  -230,  -230,  -230,  -230,
     -36,  -230,    74,  -230,  1305,  -230,   643,  -230,   247,   927,
      95,  -230,   120,  -230,   255,   157,   166,  -230,  1476,   155,
    -230,  1305,  -230,  -230,  -230,   169,  -230,    -3,  -230,  -230,
    -230,  -230,  -230,   119,   119,    69,    69,   257,   257,   257,
     257,    82,    82,   274,   150,   148,   162,   227,   -37,  -230,
    -230,  -230,   256,   258,  -230,   259,    53,  1549,  1167,  -230,
    -230,  -230,   592,  -230,  -230,  -230,  -230,  1305,  1179,    98,
     957,   643,  -230,   643,   643,  -230,  -230,  1305,  -230,  1305,
    -230,  -230,  -230,  -230,   267,  -230,   271,  -230,  -230,   203,
     643,   210,  1194,  1206,    99,   301,  -230,  -230,  -230,  -230,
    -230,  -230,   261,  -230,   643,   643,   219,   643,   220,  1278,
     643,  -230,  -230,  -230,   643,  -230,   643,   643,   222,  -230,
    -230,  -230,  -230,   643,  -230
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,     0,  -230,  -230,   -13,  -230,  -107,   104,   114,
      83,   111,   123,   124,   133,   121,   126,  -230,   -14,   -61,
    -230,    77,   -84,    55,     1,  -230,   278,  -230,    48,  -230,
    -230,   289,   -59,   -66,  -230,   129,  -230,   304,   221,    46,
      -7,   -22,    38,  -230,   -57,  -230,   130,  -230,   199,  -122,
    -229,  -154,  -230,   -75,  -230,   206,   -10,   252,  -230,  -230,
    -230,  -230,  -230,   348,  -230
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      24,    26,   143,   249,   227,   174,   209,    40,     1,   306,
     161,     1,   158,    61,   168,    41,     1,   177,   163,    48,
     239,     1,    24,     1,   153,   153,    24,     1,    49,    50,
      52,   229,   312,    53,   188,    24,    24,    26,    75,    64,
     306,   152,   154,   248,   131,   329,   150,   149,    68,   137,
     313,    59,     1,    60,   110,    25,    24,   234,   228,   141,
     142,    43,    71,   328,   137,   229,   270,    64,   246,    42,
     229,    24,   167,   171,   172,   150,   149,     1,    72,    24,
     251,    22,    70,   235,   184,   236,   230,    22,    23,    67,
      69,    25,   110,    39,   179,     1,   158,    80,    51,    76,
     149,   257,    45,   280,   281,   282,   217,   218,     5,   173,
     163,    81,   235,   138,   236,   272,   307,   188,   308,    23,
     252,   175,    80,    80,    76,    76,    80,    80,    76,    76,
     138,   110,   110,   276,    21,   237,   253,    22,   150,   149,
     213,   214,    24,    23,    23,   176,    80,   279,    76,   229,
     150,   149,   305,    64,   178,    22,   164,   234,   338,   219,
     220,   190,    23,   229,   325,   263,   229,   229,   299,   180,
     315,   243,   185,   182,   267,   244,   110,   187,   229,   320,
     238,   316,   342,   359,   321,   268,   138,   236,   229,   210,
     110,   186,    23,   273,   211,   212,   278,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,    80,    61,    76,   268,   223,
     236,   323,   150,   149,   336,   229,   269,   224,    41,    80,
     324,    76,   110,   326,   229,    24,   142,   327,    24,    57,
     150,   149,   225,   142,   311,   167,   345,   187,   346,   347,
     334,   158,    24,   226,    74,   260,   110,   262,   149,    73,
     187,   241,   265,   266,   139,   353,   348,   352,   242,   142,
     245,   229,   277,   238,   354,   215,   216,   254,   229,   362,
     363,   160,   365,   364,   366,   369,   373,   229,   229,   370,
     229,   371,   372,   256,   150,   149,   221,   222,   374,   258,
     287,   288,   289,   290,   271,   298,   269,   261,   142,     1,
     317,    82,    83,    84,    85,   349,   149,   283,   284,   322,
     330,   110,   331,   110,   110,   332,   191,   192,   193,   285,
     286,   350,   291,   292,    86,    87,   319,   351,    88,    89,
     110,   360,    90,    91,    92,   361,   293,   296,   294,   156,
      93,    94,    95,   297,   110,   110,    96,   110,   295,    97,
     110,   194,    98,   195,   110,   196,   110,   110,    99,   100,
     169,   155,   310,   110,   247,   101,   102,   103,   104,   105,
     106,   314,   264,   232,    63,     0,     0,     0,     0,     0,
     107,    54,   233,     0,   339,   341,     0,   344,     0,     1,
       2,    82,    83,    84,    85,   197,   198,   199,   200,   201,
     202,   203,   204,     0,     0,   205,   206,     0,     0,   356,
     358,     0,     0,     0,    86,    87,     0,     3,    88,    89,
       4,     5,    90,    91,    92,     6,   368,     7,     8,     9,
      93,    94,    95,    10,    11,    12,    96,    13,    14,    97,
      15,    16,    98,    17,    18,    19,    20,    21,    99,   100,
       0,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     1,     2,    82,    83,    84,    85,     0,   207,     0,
     107,    54,   108,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,     0,     3,
      88,    89,     4,     5,    90,    91,    92,     6,     0,     7,
       8,     9,    93,    94,    95,    10,    11,    12,    96,    13,
      14,    97,    15,    16,    98,    17,    18,    19,    20,    21,
      99,   100,     0,     0,     0,     0,     0,   101,   102,   103,
     104,   105,   106,     1,     0,    82,    83,    84,    85,     0,
       0,     0,   107,    54,   231,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
       0,     0,    88,    89,     0,     0,    90,    91,    92,     0,
       0,     0,     0,     0,    93,    94,    95,     0,     0,     0,
      96,     0,     0,    97,     0,     1,    98,    82,    83,    84,
      85,     0,    99,   100,     0,     0,     0,     0,     0,   101,
     102,   103,   104,   105,   106,     0,     0,     0,     0,     0,
      86,    87,     0,     0,   107,    54,   300,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    97,     1,     0,    82,    83,
      84,    85,     0,     0,     0,   100,     0,     0,     0,     0,
       0,   101,   102,   103,   104,   105,   106,     0,     0,     0,
       0,    86,    87,     0,     0,    88,    89,   157,   337,    90,
      91,    92,     0,     0,     0,     0,     0,    93,    94,    95,
       0,     0,     0,    96,     0,     2,    97,     0,     1,    98,
      82,    83,    84,    85,     0,    99,   100,     0,     0,     0,
       0,     0,   101,   102,   103,   104,   105,   106,     0,     0,
       0,     0,     0,    86,    87,     4,     5,   107,    54,     0,
       6,     0,     7,     0,     9,     0,     0,     0,    10,    11,
       0,     0,    13,    14,     2,     0,    16,     0,    97,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   100,     0,
       0,     0,     0,     0,   101,   102,   103,   104,   105,   106,
       0,     0,     0,     0,     4,     5,     0,   162,     0,     6,
     157,     7,     0,     9,     2,     0,     0,    10,    11,     0,
       0,    13,    14,     0,     0,    16,     0,     0,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     0,     0,     4,     5,     0,     0,     0,     6,
       0,     7,     8,     9,     0,     0,   255,    10,    11,    12,
       0,    13,    14,     0,    15,    16,     0,    17,    18,    19,
      20,    21,     2,     0,     0,     0,     0,     0,     0,     0,
       1,     0,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    54,     0,     0,     0,     3,
       0,     0,     4,     5,     0,    86,    87,     6,     0,     7,
       8,     9,     0,     0,     0,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
      97,     1,     0,    82,    83,    84,    85,     0,     0,     0,
     100,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,     0,    54,     0,     0,    86,    87,     0,     0,
       1,   181,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,     0,    86,    87,     0,     0,     0,
       1,   100,    82,    83,    84,    85,     0,   101,   102,   103,
     104,   105,   106,     0,     0,     0,     0,     0,     0,     0,
      97,     0,   259,     0,     0,    86,    87,     0,     0,     0,
     100,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,     0,     0,
      97,   318,     1,     2,    82,    83,    84,    85,     0,     0,
     100,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,    86,    87,     0,
       0,   343,     0,     4,     5,     0,     0,     0,     6,     0,
       7,     0,     9,     0,     0,     0,    10,    11,     0,     0,
      13,    14,    97,     0,    16,     0,     0,    18,    19,    20,
      21,     1,   100,    82,    83,    84,    85,     0,   101,   102,
     103,   104,   105,   106,     0,     1,     0,    82,    83,    84,
      85,     0,     0,     0,     0,     0,    86,    87,     1,     0,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,    86,    87,     0,     0,     0,     0,     0,
       0,   100,     0,     0,   147,    97,     0,   101,   102,   103,
     104,   105,   106,     0,     0,   100,   274,     0,    97,     0,
       0,   101,   102,   103,   104,   105,   106,     0,   100,     0,
       0,   304,     0,     0,   101,   102,   103,   104,   105,   106,
       1,     0,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     1,     0,    82,    83,    84,    85,     0,     0,
       0,     0,     0,     0,     0,    86,    87,     1,     0,    82,
      83,    84,    85,     0,     0,     0,     0,    86,    87,     1,
       0,    82,    83,    84,    85,     0,     0,     0,     0,     0,
      97,     0,    86,    87,     0,     0,     0,     0,     0,     0,
     100,     0,    97,   335,    86,    87,   101,   102,   103,   104,
     105,   106,   100,   340,     0,     0,     0,    97,   101,   102,
     103,   104,   105,   106,     0,     0,     0,   100,   355,    97,
       0,     0,     0,   101,   102,   103,   104,   105,   106,   100,
     357,     0,     0,     0,     0,   101,   102,   103,   104,   105,
     106,     1,     0,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     1,     0,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,    86,    87,     1,     0,
      82,    83,    84,    85,     0,     0,     0,     0,    86,    87,
       1,     0,    82,    83,    84,    85,     0,     0,     0,     0,
       0,    97,     0,    86,    87,     0,     0,     0,     0,     0,
       0,   100,   367,    97,     0,    86,    87,   101,   102,   103,
     104,   105,   106,   170,     0,     0,     0,     0,    97,   101,
     102,   103,   104,   105,   106,     0,     0,     0,   100,    62,
      97,     0,     1,     2,   101,   102,   103,   104,   105,   106,
     183,     0,     0,     0,     0,     0,   101,   102,   103,   104,
     105,   106,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     4,     5,     1,     2,     0,     6,     0,
       7,     8,     9,     0,     0,     0,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,     3,     0,     0,     4,     5,     0,    23,
       0,     6,     0,     7,     8,     9,     1,     2,     0,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,    17,
      18,    19,    20,    21,     0,   235,   301,   236,     0,     0,
       0,     0,    23,     0,     3,     0,     0,     4,     5,     0,
       2,     0,     6,     0,     7,     8,     9,     0,     0,     0,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,     3,     0,     0,
       4,     5,     0,    23,     0,     6,     0,     7,     8,     9,
       1,     2,     0,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     0,   268,
     301,   236,     0,     0,     0,     0,    23,     0,     3,     0,
       0,     4,     5,     2,     0,     0,     6,     0,     7,     8,
       9,     0,     0,     0,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     0,
       3,   140,     0,     4,     5,     0,     0,     0,     6,     2,
       7,     8,     9,     0,   309,     0,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,     0,   333,     0,     0,     3,     0,     0,     4,
       5,     2,     0,     0,     6,     0,     7,     8,     9,     0,
       0,     0,    10,    11,    12,     0,    13,    14,     0,    15,
      16,     0,    17,    18,    19,    20,    21,     0,     3,     2,
       0,     4,     5,     0,     0,     0,     6,     0,     7,     8,
       9,     0,     0,     0,    10,    11,    12,     0,    13,    14,
       0,    15,    16,     0,    17,    18,    19,    20,    21,     4,
       5,     0,     0,     0,     6,     0,     7,     0,     9,     0,
       0,     0,    10,    11,     0,     0,    13,    14,     0,     0,
      16,     0,     0,    18,    19,    20,    21
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-230)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     0,    59,   157,    27,    89,   113,     7,     3,   238,
      76,     3,    73,    35,    80,    22,     3,    92,    77,    26,
     142,     3,    22,     3,    68,    68,    26,     3,    27,    28,
      30,    68,    68,    32,   100,    35,    36,    36,    48,    39,
     269,    83,    86,    86,    54,    82,    60,    60,    64,    56,
      86,    63,     3,    65,    54,     0,    56,   132,    81,    59,
      59,    23,    68,    66,    71,    68,   188,    67,   152,    23,
      68,    71,    79,    86,    87,    89,    89,     3,    84,    79,
     164,    63,    44,    63,    97,    65,    84,    63,    70,    85,
      44,    36,    92,    85,    94,     3,   157,    51,    85,    51,
     113,   176,    84,   210,   211,   212,    24,    25,    35,    84,
     169,    85,    63,    58,    65,   190,    63,   183,    65,    70,
      68,    84,    76,    77,    76,    77,    80,    81,    80,    81,
      75,   131,   132,   194,    61,   142,    84,    63,   152,   152,
      71,    72,   142,    70,    70,    82,   100,   208,   100,    68,
     164,   164,   236,   153,    63,    63,    82,   232,   312,    77,
      78,    82,    70,    68,   271,    84,    68,    68,   229,    63,
     254,    64,    63,    96,    64,    68,   176,   100,    68,    84,
     142,   256,    84,    84,    64,    63,   131,    65,    68,    70,
     190,    63,    70,   193,    75,    76,   196,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   169,   238,   169,    63,    69,
      65,    64,   236,   236,   308,    68,   188,    79,   235,   183,
      64,   183,   232,    64,    68,   235,   235,    68,   238,    33,
     254,   254,    80,   242,   244,   252,   321,   170,   323,   324,
     307,   312,   252,    26,    48,   178,   256,   180,   271,    83,
     183,    64,   185,   186,    58,   340,   327,    64,    68,   268,
      66,    68,   195,   235,    64,    18,    19,    82,    68,   354,
     355,    75,   357,    64,    64,   360,    64,    68,    68,   364,
      68,   366,   367,    82,   308,   308,    22,    23,   373,    62,
     217,   218,   219,   220,    64,   228,   268,    84,   307,     3,
      63,     5,     6,     7,     8,   329,   329,   213,   214,    64,
      64,   321,    64,   323,   324,    66,    28,    29,    30,   215,
     216,    64,   221,   222,    28,    29,   259,    66,    32,    33,
     340,    40,    36,    37,    38,    84,   223,   226,   224,    71,
      44,    45,    46,   227,   354,   355,    50,   357,   225,    53,
     360,    63,    56,    65,   364,    67,   366,   367,    62,    63,
      81,    67,   242,   373,   153,    69,    70,    71,    72,    73,
      74,   252,   183,   131,    36,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    -1,   317,   318,    -1,   320,    -1,     3,
       4,     5,     6,     7,     8,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    21,    -1,    -1,   342,
     343,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,   359,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     3,     4,     5,     6,     7,     8,    -1,    83,    -1,
      84,    85,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    84,    85,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    32,    33,    -1,    -1,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,     3,    56,     5,     6,     7,
       8,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    84,    85,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,     3,    -1,     5,     6,
       7,     8,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    32,    33,    85,    86,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    50,    -1,     4,    53,    -1,     3,    56,
       5,     6,     7,     8,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    28,    29,    34,    35,    84,    85,    -1,
      39,    -1,    41,    -1,    43,    -1,    -1,    -1,    47,    48,
      -1,    -1,    51,    52,     4,    -1,    55,    -1,    53,    58,
      59,    60,    61,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    34,    35,    -1,    86,    -1,    39,
      85,    41,    -1,    43,     4,    -1,    -1,    47,    48,    -1,
      -1,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    59,
      60,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    -1,    -1,    -1,    39,
      -1,    41,    42,    43,    -1,    -1,    86,    47,    48,    49,
      -1,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    85,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    -1,    28,    29,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      53,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    85,    -1,    -1,    28,    29,    -1,    -1,
       3,    84,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
       3,    63,     5,     6,     7,     8,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    84,    -1,    -1,    28,    29,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    84,     3,     4,     5,     6,     7,     8,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    84,    -1,    34,    35,    -1,    -1,    -1,    39,    -1,
      41,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      51,    52,    53,    -1,    55,    -1,    -1,    58,    59,    60,
      61,     3,    63,     5,     6,     7,     8,    -1,    69,    70,
      71,    72,    73,    74,    -1,     3,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    28,    29,     3,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    66,    53,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    63,    64,    -1,    53,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    63,    -1,
      -1,    66,    -1,    -1,    69,    70,    71,    72,    73,    74,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,     3,    -1,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    28,    29,     3,
      -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    53,    66,    28,    29,    69,    70,    71,    72,
      73,    74,    63,    64,    -1,    -1,    -1,    53,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    63,    64,    53,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,     3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,     3,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    28,    29,
       3,    -1,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    53,    -1,    28,    29,    69,    70,    71,
      72,    73,    74,    63,    -1,    -1,    -1,    -1,    53,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    63,     0,
      53,    -1,     3,     4,    69,    70,    71,    72,    73,    74,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,     3,     4,    -1,    39,    -1,
      41,    42,    43,    -1,    -1,    -1,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    63,    31,    -1,    -1,    34,    35,    -1,    70,
      -1,    39,    -1,    41,    42,    43,     3,     4,    -1,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    -1,    63,    64,    65,    -1,    -1,
      -1,    -1,    70,    -1,    31,    -1,    -1,    34,    35,    -1,
       4,    -1,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    -1,    63,    31,    -1,    -1,
      34,    35,    -1,    70,    -1,    39,    -1,    41,    42,    43,
       3,     4,    -1,    47,    48,    49,    -1,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    -1,    63,
      64,    65,    -1,    -1,    -1,    -1,    70,    -1,    31,    -1,
      -1,    34,    35,     4,    -1,    -1,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    -1,
      31,    64,    -1,    34,    35,    -1,    -1,    -1,    39,     4,
      41,    42,    43,    -1,     9,    -1,    47,    48,    49,    -1,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    -1,    -1,    64,    -1,    -1,    31,    -1,    -1,    34,
      35,     4,    -1,    -1,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    -1,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    -1,    31,     4,
      -1,    34,    35,    -1,    -1,    -1,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    -1,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    34,
      35,    -1,    -1,    -1,    39,    -1,    41,    -1,    43,    -1,
      -1,    -1,    47,    48,    -1,    -1,    51,    52,    -1,    -1,
      55,    -1,    -1,    58,    59,    60,    61
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    31,    34,    35,    39,    41,    42,    43,
      47,    48,    49,    51,    52,    54,    55,    57,    58,    59,
      60,    61,    63,    70,    89,   110,   111,   114,   115,   116,
     117,   123,   126,   127,   128,   129,   149,   150,   151,    85,
      89,   127,   126,   129,   130,    84,   112,   113,   127,   111,
     111,    85,    89,   111,    85,   110,   111,   142,   143,    63,
      65,   128,     0,   150,    89,   124,   125,    85,    64,   126,
     129,    68,    84,    83,   142,   143,   115,   118,   119,   120,
     126,    85,     5,     6,     7,     8,    28,    29,    32,    33,
      36,    37,    38,    44,    45,    46,    50,    53,    56,    62,
      63,    69,    70,    71,    72,    73,    74,    84,    86,    88,
      89,    90,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   108,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   127,   110,   142,
      64,    89,   111,   131,   132,   133,   134,    66,    89,    92,
     105,   109,    83,    68,    86,   124,   113,    85,   106,   138,
     142,   120,    86,   119,    82,   121,   122,   127,   120,   118,
      63,    92,    92,    84,   109,    84,    82,   140,    63,    89,
      63,    84,   108,    63,    92,    63,    63,   108,   120,   135,
      82,    28,    29,    30,    63,    65,    67,    10,    11,    12,
      13,    14,    15,    16,    17,    20,    21,    83,   107,    94,
      70,    75,    76,    71,    72,    18,    19,    24,    25,    77,
      78,    22,    23,    69,    79,    80,    26,    27,    81,    68,
      84,    86,   144,    86,   140,    63,    65,   127,   129,   136,
     137,    64,    68,    64,    68,    66,   109,   125,    86,   138,
     139,   109,    68,    84,    82,    86,    82,   140,    62,    84,
     108,    84,   108,    84,   135,   108,   108,    64,    63,   129,
     136,    64,   140,    89,    64,    91,   106,   108,    89,   106,
      94,    94,    94,    95,    95,    96,    96,    97,    97,    97,
      97,    98,    98,    99,   100,   101,   102,   103,   108,   106,
      86,    64,   131,   136,    66,   109,   137,    63,    65,     9,
     133,    89,    68,    86,   122,   109,   140,    63,    84,   108,
      84,    64,    64,    64,    64,    94,    64,    68,    66,    82,
      64,    64,    66,    64,   131,    66,   109,    86,   138,   108,
      64,   108,    84,    84,   108,   140,   140,   140,   106,   105,
      64,    66,    64,   140,    64,    64,   108,    64,   108,    84,
      40,    84,   140,   140,    64,   140,    64,    64,   108,   140,
     140,   140,   140,    64,   140
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
      
/* Line 1802 of yacc.c  */
#line 2109 "y.tab.c"
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


/* Line 2050 of yacc.c  */
#line 473 "parser.y"


static void
yyerror(const char *s)
{
	fprintf(stderr, "%d: %s\n", lineno, s);
}

int
main(void)
{
	lineno = 1;
	yyparse();

	return 0;
}
