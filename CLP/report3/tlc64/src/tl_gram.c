/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 22 "tl_gram.y"


#include  <stdio.h>

#include  "ast.h"
#include  "parse_action.h"

extern int  yylex(void);
extern int  yyerror(const char*);
extern int  yylineno;


#line 84 "tl_gram.c"

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

#include "tl_gram.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_CONST_INT = 3,            /* TOKEN_CONST_INT  */
  YYSYMBOL_TOKEN_ID = 4,                   /* TOKEN_ID  */
  YYSYMBOL_TOKEN_LEX_ERROR = 5,            /* TOKEN_LEX_ERROR  */
  YYSYMBOL_TOKEN_EQ = 6,                   /* TOKEN_EQ  */
  YYSYMBOL_TOKEN_PLUS = 7,                 /* TOKEN_PLUS  */
  YYSYMBOL_TOKEN_MINUS = 8,                /* TOKEN_MINUS  */
  YYSYMBOL_TOKEN_ASTERISK = 9,             /* TOKEN_ASTERISK  */
  YYSYMBOL_TOKEN_SLASH = 10,               /* TOKEN_SLASH  */
  YYSYMBOL_TOKEN_LT = 11,                  /* TOKEN_LT  */
  YYSYMBOL_TOKEN_LTE = 12,                 /* TOKEN_LTE  */
  YYSYMBOL_TOKEN_GTE = 13,                 /* TOKEN_GTE  */
  YYSYMBOL_TOKEN_GT = 14,                  /* TOKEN_GT  */
  YYSYMBOL_TOKEN_EQEQ = 15,                /* TOKEN_EQEQ  */
  YYSYMBOL_TOKEN_NE = 16,                  /* TOKEN_NE  */
  YYSYMBOL_TOKEN_COMMA = 17,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_LPAREN = 18,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 19,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LBRACE = 20,              /* TOKEN_LBRACE  */
  YYSYMBOL_TOKEN_RBRACE = 21,              /* TOKEN_RBRACE  */
  YYSYMBOL_TOKEN_SEMICOLON = 22,           /* TOKEN_SEMICOLON  */
  YYSYMBOL_TOKEN_ELSE = 23,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_FOR = 24,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_IF = 25,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_INT = 26,                 /* TOKEN_INT  */
  YYSYMBOL_TOKEN_RETURN = 27,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_WHILE = 28,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_DO = 29,                  /* TOKEN_DO  */
  YYSYMBOL_YYACCEPT = 30,                  /* $accept  */
  YYSYMBOL_expression = 31,                /* expression  */
  YYSYMBOL_identifier = 32,                /* identifier  */
  YYSYMBOL_primary_expression = 33,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 34,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 35,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 36,          /* unary_expression  */
  YYSYMBOL_multiplicative_expression = 37, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 38,       /* additive_expression  */
  YYSYMBOL_relational_expression = 39,     /* relational_expression  */
  YYSYMBOL_equality_expression = 40,       /* equality_expression  */
  YYSYMBOL_assignment_expression = 41,     /* assignment_expression  */
  YYSYMBOL_declaration = 42,               /* declaration  */
  YYSYMBOL_identifier_list = 43,           /* identifier_list  */
  YYSYMBOL_parameter_list = 44,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 45,     /* parameter_declaration  */
  YYSYMBOL_statement = 46,                 /* statement  */
  YYSYMBOL_compound_statement = 47,        /* compound_statement  */
  YYSYMBOL_block_item_list = 48,           /* block_item_list  */
  YYSYMBOL_block_item = 49,                /* block_item  */
  YYSYMBOL_expression_statement = 50,      /* expression_statement  */
  YYSYMBOL_if_statement = 51,              /* if_statement  */
  YYSYMBOL_iteration_statement = 52,       /* iteration_statement  */
  YYSYMBOL_return_statement = 53,          /* return_statement  */
  YYSYMBOL_translation_unit = 54,          /* translation_unit  */
  YYSYMBOL_external_declaration = 55,      /* external_declaration  */
  YYSYMBOL_function_definition = 56,       /* function_definition  */
  YYSYMBOL_file = 57                       /* file  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  114

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      25,    26,    27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   103,   103,   107,   111,   113,   115,   119,   121,   123,
     127,   129,   133,   135,   137,   141,   143,   145,   149,   151,
     153,   157,   159,   161,   163,   165,   169,   171,   173,   177,
     179,   183,   187,   189,   193,   195,   199,   203,   205,   207,
     209,   211,   215,   217,   221,   223,   227,   229,   233,   235,
     239,   241,   245,   247,   255,   257,   261,   263,   267,   271,
     273,   277
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_CONST_INT",
  "TOKEN_ID", "TOKEN_LEX_ERROR", "TOKEN_EQ", "TOKEN_PLUS", "TOKEN_MINUS",
  "TOKEN_ASTERISK", "TOKEN_SLASH", "TOKEN_LT", "TOKEN_LTE", "TOKEN_GTE",
  "TOKEN_GT", "TOKEN_EQEQ", "TOKEN_NE", "TOKEN_COMMA", "TOKEN_LPAREN",
  "TOKEN_RPAREN", "TOKEN_LBRACE", "TOKEN_RBRACE", "TOKEN_SEMICOLON",
  "TOKEN_ELSE", "TOKEN_FOR", "TOKEN_IF", "TOKEN_INT", "TOKEN_RETURN",
  "TOKEN_WHILE", "TOKEN_DO", "$accept", "expression", "identifier",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "assignment_expression",
  "declaration", "identifier_list", "parameter_list",
  "parameter_declaration", "statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement", "if_statement",
  "iteration_statement", "return_statement", "translation_unit",
  "external_declaration", "function_definition", "file", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-93)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       9,   -93,    13,     9,   -93,   -93,    35,     0,   -93,   -93,
      32,     9,    25,   -93,    33,   -93,   -93,    30,    32,   -93,
     109,   109,   109,   -93,   -93,    20,    44,     9,     7,    59,
      58,    12,   -93,   -93,   -93,    14,    38,    76,    34,   -93,
     -93,   -93,   -93,    75,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,    80,   -93,   -93,    87,   109,   109,   -93,    10,   -93,
      72,   109,   -93,   109,   127,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   -93,   -93,   -93,    85,    91,
       9,   -93,   -93,    92,    34,   -93,    46,   -93,   -93,   -93,
      14,    14,    38,    38,    38,    38,    76,    76,   109,   101,
     -93,   101,   109,   -93,    93,    95,   -93,   -93,   109,   101,
     103,   -93,   101,   -93
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     3,     0,    61,    56,    58,     0,     0,    57,     1,
       0,     0,     0,    34,     0,    60,    36,     0,     0,     5,
       0,     0,     0,    43,    49,     0,     0,     0,     0,     0,
       0,     4,     7,    12,    15,    18,    21,    26,    29,     2,
      46,    47,    37,     0,    44,    38,    39,    40,    41,    35,
      59,     4,    13,    14,     0,     0,     0,    32,     0,    55,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    45,     6,     0,     0,
       0,    31,    54,     0,    30,     9,     0,    10,    16,    17,
      19,    20,    22,    24,    25,    23,    27,    28,     0,     0,
      33,     0,     0,     8,     0,    50,    52,    11,     0,     0,
       0,    51,     0,    53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -93,   -22,     1,   -93,   -93,   -93,   -18,    17,    67,    18,
      51,   -59,   -93,   -93,   -93,   107,   -92,    -2,   -93,    77,
     -93,   -93,   -93,   -93,   -93,   129,   -93,   -93
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    30,    31,    32,    33,    86,    34,    35,    36,    37,
      38,    39,    40,    58,    12,    13,    41,    42,    43,    44,
      45,    46,    47,    48,     3,     4,     5,     6
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      54,     2,    52,    53,     2,    87,    60,   105,    15,   106,
      19,     1,    16,     1,    20,    21,    50,   111,    63,    10,
     113,    51,    51,    65,    66,    22,    11,    80,    57,    59,
      64,     7,    81,    78,    79,     9,    19,     1,    55,    83,
      20,    21,    17,   107,    18,    67,    68,    88,    89,    73,
      74,    22,    14,    14,    23,    24,    11,    25,    26,    27,
      28,    29,    56,   102,    51,   103,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,   104,    61,    19,     1,
      62,   100,    20,    21,    90,    91,   110,    69,    70,    71,
      72,    96,    97,    22,    82,    14,    75,    24,    64,    25,
      26,    27,    28,    29,    19,     1,    77,    98,    20,    21,
      99,   101,    19,     1,    84,   108,    20,    21,   109,    22,
      76,    14,   112,    24,    49,    25,    26,    22,    28,    29,
      19,     1,     8,     0,    20,    21,    92,    93,    94,    95,
       0,     0,     0,     0,     0,    22,    85
};

static const yytype_int8 yycheck[] =
{
      22,     0,    20,    21,     3,    64,    28,    99,    10,   101,
       3,     4,    11,     4,     7,     8,    18,   109,     6,    19,
     112,    20,    21,     9,    10,    18,    26,    17,    27,    22,
      18,    18,    22,    55,    56,     0,     3,     4,    18,    61,
       7,     8,    17,   102,    19,     7,     8,    65,    66,    15,
      16,    18,    20,    20,    21,    22,    26,    24,    25,    26,
      27,    28,    18,    17,    63,    19,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    98,    18,     3,     4,
      22,    80,     7,     8,    67,    68,   108,    11,    12,    13,
      14,    73,    74,    18,    22,    20,    21,    22,    18,    24,
      25,    26,    27,    28,     3,     4,    19,    22,     7,     8,
      19,    19,     3,     4,    63,    22,     7,     8,    23,    18,
      43,    20,    19,    22,    17,    24,    25,    18,    27,    28,
       3,     4,     3,    -1,     7,     8,    69,    70,    71,    72,
      -1,    -1,    -1,    -1,    -1,    18,    19
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    32,    54,    55,    56,    57,    18,    55,     0,
      19,    26,    44,    45,    20,    47,    32,    17,    19,     3,
       7,     8,    18,    21,    22,    24,    25,    26,    27,    28,
      31,    32,    33,    34,    36,    37,    38,    39,    40,    41,
      42,    46,    47,    48,    49,    50,    51,    52,    53,    45,
      47,    32,    36,    36,    31,    18,    18,    32,    43,    22,
      31,    18,    22,     6,    18,     9,    10,     7,     8,    11,
      12,    13,    14,    15,    16,    21,    49,    19,    31,    31,
      17,    22,    22,    31,    40,    19,    35,    41,    36,    36,
      37,    37,    38,    38,    38,    38,    39,    39,    22,    19,
      32,    19,    17,    19,    31,    46,    46,    41,    22,    23,
      31,    46,    19,    46
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    30,    31,    32,    33,    33,    33,    34,    34,    34,
      35,    35,    36,    36,    36,    37,    37,    37,    38,    38,
      38,    39,    39,    39,    39,    39,    40,    40,    40,    41,
      41,    42,    43,    43,    44,    44,    45,    46,    46,    46,
      46,    46,    47,    47,    48,    48,    49,    49,    50,    50,
      51,    51,    52,    52,    53,    53,    54,    54,    55,    56,
      56,    57
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       1,     3,     1,     2,     2,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     2,     1,     1,     1,
       1,     1,     3,     2,     1,     2,     1,     1,     2,     1,
       5,     7,     5,     9,     3,     2,     1,     2,     1,     5,
       4,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* expression: assignment_expression  */
#line 104 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1213 "tl_gram.c"
    break;

  case 3: /* identifier: TOKEN_ID  */
#line 108 "tl_gram.y"
        { (yyval.y_AST_Node) = act_ID((yyvsp[0].y_str)); }
#line 1219 "tl_gram.c"
    break;

  case 4: /* primary_expression: identifier  */
#line 112 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1225 "tl_gram.c"
    break;

  case 5: /* primary_expression: TOKEN_CONST_INT  */
#line 114 "tl_gram.y"
        { (yyval.y_AST_Node) = act_const_int((yyvsp[0].y_int)); }
#line 1231 "tl_gram.c"
    break;

  case 6: /* primary_expression: TOKEN_LPAREN expression TOKEN_RPAREN  */
#line 116 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[-1].y_AST_Node); }
#line 1237 "tl_gram.c"
    break;

  case 7: /* postfix_expression: primary_expression  */
#line 120 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1243 "tl_gram.c"
    break;

  case 8: /* postfix_expression: identifier TOKEN_LPAREN argument_expression_list TOKEN_RPAREN  */
#line 122 "tl_gram.y"
        { (yyval.y_AST_Node) = act_postfix_func((yyvsp[-3].y_AST_Node), (yyvsp[-1].y_AST_List)); }
#line 1249 "tl_gram.c"
    break;

  case 9: /* postfix_expression: identifier TOKEN_LPAREN TOKEN_RPAREN  */
#line 124 "tl_gram.y"
        { (yyval.y_AST_Node) = act_postfix_func((yyvsp[-2].y_AST_Node), NULL); }
#line 1255 "tl_gram.c"
    break;

  case 10: /* argument_expression_list: assignment_expression  */
#line 128 "tl_gram.y"
        { (yyval.y_AST_List) = act_argument_list(NULL, (yyvsp[0].y_AST_Node)); }
#line 1261 "tl_gram.c"
    break;

  case 11: /* argument_expression_list: argument_expression_list TOKEN_COMMA assignment_expression  */
#line 130 "tl_gram.y"
        { (yyval.y_AST_List) = act_argument_list((yyvsp[-2].y_AST_List), (yyvsp[0].y_AST_Node)); }
#line 1267 "tl_gram.c"
    break;

  case 12: /* unary_expression: postfix_expression  */
#line 134 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1273 "tl_gram.c"
    break;

  case 13: /* unary_expression: TOKEN_PLUS unary_expression  */
#line 136 "tl_gram.y"
        { (yyval.y_AST_Node) = act_unary_expr(AST_EXP_UNARY_PLUS, (yyvsp[0].y_AST_Node)); }
#line 1279 "tl_gram.c"
    break;

  case 14: /* unary_expression: TOKEN_MINUS unary_expression  */
#line 138 "tl_gram.y"
        { (yyval.y_AST_Node) = act_unary_expr(AST_EXP_UNARY_MINUS, (yyvsp[0].y_AST_Node)); }
#line 1285 "tl_gram.c"
    break;

  case 15: /* multiplicative_expression: unary_expression  */
#line 142 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1291 "tl_gram.c"
    break;

  case 16: /* multiplicative_expression: multiplicative_expression TOKEN_ASTERISK unary_expression  */
#line 144 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_MUL, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1297 "tl_gram.c"
    break;

  case 17: /* multiplicative_expression: multiplicative_expression TOKEN_SLASH unary_expression  */
#line 146 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_DIV, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1303 "tl_gram.c"
    break;

  case 18: /* additive_expression: multiplicative_expression  */
#line 150 "tl_gram.y"
        { (yyval.y_AST_Node) =(yyvsp[0].y_AST_Node); }
#line 1309 "tl_gram.c"
    break;

  case 19: /* additive_expression: additive_expression TOKEN_PLUS multiplicative_expression  */
#line 152 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_ADD, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1315 "tl_gram.c"
    break;

  case 20: /* additive_expression: additive_expression TOKEN_MINUS multiplicative_expression  */
#line 154 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_SUB, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1321 "tl_gram.c"
    break;

  case 21: /* relational_expression: additive_expression  */
#line 158 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1327 "tl_gram.c"
    break;

  case 22: /* relational_expression: relational_expression TOKEN_LT additive_expression  */
#line 160 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_LT, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1333 "tl_gram.c"
    break;

  case 23: /* relational_expression: relational_expression TOKEN_GT additive_expression  */
#line 162 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_GT, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1339 "tl_gram.c"
    break;

  case 24: /* relational_expression: relational_expression TOKEN_LTE additive_expression  */
#line 164 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_LTE, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1345 "tl_gram.c"
    break;

  case 25: /* relational_expression: relational_expression TOKEN_GTE additive_expression  */
#line 166 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_GTE, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1351 "tl_gram.c"
    break;

  case 26: /* equality_expression: relational_expression  */
#line 170 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1357 "tl_gram.c"
    break;

  case 27: /* equality_expression: equality_expression TOKEN_EQEQ relational_expression  */
#line 172 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_EQ, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1363 "tl_gram.c"
    break;

  case 28: /* equality_expression: equality_expression TOKEN_NE relational_expression  */
#line 174 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_NE, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1369 "tl_gram.c"
    break;

  case 29: /* assignment_expression: equality_expression  */
#line 178 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1375 "tl_gram.c"
    break;

  case 30: /* assignment_expression: identifier TOKEN_EQ equality_expression  */
#line 180 "tl_gram.y"
        { (yyval.y_AST_Node) = act_expr_n2(AST_EXP_ASGN, (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1381 "tl_gram.c"
    break;

  case 31: /* declaration: TOKEN_INT identifier_list TOKEN_SEMICOLON  */
#line 184 "tl_gram.y"
        { (yyval.y_AST_Node) = act_dec_int((yyvsp[-1].y_AST_Node)); }
#line 1387 "tl_gram.c"
    break;

  case 32: /* identifier_list: identifier  */
#line 188 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1393 "tl_gram.c"
    break;

  case 33: /* identifier_list: identifier_list TOKEN_COMMA identifier  */
#line 190 "tl_gram.y"
        { (yyval.y_AST_Node) = act_ident_list((yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1399 "tl_gram.c"
    break;

  case 34: /* parameter_list: parameter_declaration  */
#line 194 "tl_gram.y"
        { (yyval.y_AST_List) = act_param_list(NULL, (yyvsp[0].y_AST_Node)); }
#line 1405 "tl_gram.c"
    break;

  case 35: /* parameter_list: parameter_list TOKEN_COMMA parameter_declaration  */
#line 196 "tl_gram.y"
        { (yyval.y_AST_List) = act_param_list((yyvsp[-2].y_AST_List), (yyvsp[0].y_AST_Node)); }
#line 1411 "tl_gram.c"
    break;

  case 36: /* parameter_declaration: TOKEN_INT identifier  */
#line 200 "tl_gram.y"
        { (yyval.y_AST_Node) = act_param_dec((yyvsp[0].y_AST_Node)); }
#line 1417 "tl_gram.c"
    break;

  case 37: /* statement: compound_statement  */
#line 204 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1423 "tl_gram.c"
    break;

  case 38: /* statement: expression_statement  */
#line 206 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1429 "tl_gram.c"
    break;

  case 39: /* statement: if_statement  */
#line 208 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1435 "tl_gram.c"
    break;

  case 40: /* statement: iteration_statement  */
#line 210 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1441 "tl_gram.c"
    break;

  case 41: /* statement: return_statement  */
#line 212 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1447 "tl_gram.c"
    break;

  case 42: /* compound_statement: TOKEN_LBRACE block_item_list TOKEN_RBRACE  */
#line 216 "tl_gram.y"
        { (yyval.y_AST_Node) = act_compound_stm((yyvsp[-1].y_AST_List)); }
#line 1453 "tl_gram.c"
    break;

  case 43: /* compound_statement: TOKEN_LBRACE TOKEN_RBRACE  */
#line 218 "tl_gram.y"
        { (yyval.y_AST_Node) = act_compound_stm(NULL); }
#line 1459 "tl_gram.c"
    break;

  case 44: /* block_item_list: block_item  */
#line 222 "tl_gram.y"
        { (yyval.y_AST_List) = act_block_item((yyvsp[0].y_AST_Node)); }
#line 1465 "tl_gram.c"
    break;

  case 45: /* block_item_list: block_item_list block_item  */
#line 224 "tl_gram.y"
        { (yyval.y_AST_List) = act_block_item_list((yyvsp[-1].y_AST_List), (yyvsp[0].y_AST_Node)); }
#line 1471 "tl_gram.c"
    break;

  case 46: /* block_item: declaration  */
#line 228 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1477 "tl_gram.c"
    break;

  case 47: /* block_item: statement  */
#line 230 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1483 "tl_gram.c"
    break;

  case 48: /* expression_statement: expression TOKEN_SEMICOLON  */
#line 234 "tl_gram.y"
        { (yyval.y_AST_Node) = act_exp_stm((yyvsp[-1].y_AST_Node)); }
#line 1489 "tl_gram.c"
    break;

  case 49: /* expression_statement: TOKEN_SEMICOLON  */
#line 236 "tl_gram.y"
        { (yyval.y_AST_Node) = act_exp_stm(NULL); }
#line 1495 "tl_gram.c"
    break;

  case 50: /* if_statement: TOKEN_IF TOKEN_LPAREN expression TOKEN_RPAREN statement  */
#line 240 "tl_gram.y"
        { (yyval.y_AST_Node) = act_if_stm((yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node), NULL); }
#line 1501 "tl_gram.c"
    break;

  case 51: /* if_statement: TOKEN_IF TOKEN_LPAREN expression TOKEN_RPAREN statement TOKEN_ELSE statement  */
#line 242 "tl_gram.y"
        { (yyval.y_AST_Node) = act_if_stm((yyvsp[-4].y_AST_Node), (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1507 "tl_gram.c"
    break;

  case 52: /* iteration_statement: TOKEN_WHILE TOKEN_LPAREN expression TOKEN_RPAREN statement  */
#line 246 "tl_gram.y"
        { (yyval.y_AST_Node) = act_while_stm((yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1513 "tl_gram.c"
    break;

  case 53: /* iteration_statement: TOKEN_FOR TOKEN_LPAREN expression TOKEN_SEMICOLON expression TOKEN_SEMICOLON expression TOKEN_RPAREN statement  */
#line 248 "tl_gram.y"
        { (yyval.y_AST_Node) = act_for_stm((yyvsp[-6].y_AST_Node), (yyvsp[-4].y_AST_Node), (yyvsp[-2].y_AST_Node), (yyvsp[0].y_AST_Node)); }
#line 1519 "tl_gram.c"
    break;

  case 54: /* return_statement: TOKEN_RETURN expression TOKEN_SEMICOLON  */
#line 256 "tl_gram.y"
        { (yyval.y_AST_Node) = act_return_stm((yyvsp[-1].y_AST_Node)); }
#line 1525 "tl_gram.c"
    break;

  case 55: /* return_statement: TOKEN_RETURN TOKEN_SEMICOLON  */
#line 258 "tl_gram.y"
        { (yyval.y_AST_Node) = act_return_stm(NULL); }
#line 1531 "tl_gram.c"
    break;

  case 56: /* translation_unit: external_declaration  */
#line 262 "tl_gram.y"
        { (yyval.y_AST_List) = act_unit_list(NULL, (yyvsp[0].y_AST_Node)); }
#line 1537 "tl_gram.c"
    break;

  case 57: /* translation_unit: translation_unit external_declaration  */
#line 264 "tl_gram.y"
        { (yyval.y_AST_List) = act_unit_list((yyvsp[-1].y_AST_List), (yyvsp[0].y_AST_Node)); }
#line 1543 "tl_gram.c"
    break;

  case 58: /* external_declaration: function_definition  */
#line 268 "tl_gram.y"
        { (yyval.y_AST_Node) = (yyvsp[0].y_AST_Node); }
#line 1549 "tl_gram.c"
    break;

  case 59: /* function_definition: identifier TOKEN_LPAREN parameter_list TOKEN_RPAREN compound_statement  */
#line 272 "tl_gram.y"
        { (yyval.y_AST_Node) = act_function_def((yyvsp[-4].y_AST_Node), (yyvsp[-2].y_AST_List), (yyvsp[0].y_AST_Node)); }
#line 1555 "tl_gram.c"
    break;

  case 60: /* function_definition: identifier TOKEN_LPAREN TOKEN_RPAREN compound_statement  */
#line 274 "tl_gram.y"
        { (yyval.y_AST_Node) = act_function_def((yyvsp[-3].y_AST_Node), NULL, (yyvsp[0].y_AST_Node)); }
#line 1561 "tl_gram.c"
    break;

  case 61: /* file: translation_unit  */
#line 278 "tl_gram.y"
        { AST_root = (yyvsp[0].y_AST_List); }
#line 1567 "tl_gram.c"
    break;


#line 1571 "tl_gram.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 280 "tl_gram.y"


extern int yynerrs;

int
yyerror(const char *mes)
{
    fprintf(stderr, "[error %d] line %d: %s\n", yynerrs, yylineno, mes);
    return 0;
}
