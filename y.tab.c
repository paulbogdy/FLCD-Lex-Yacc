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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#define YYDEBUG 1

#line 77 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    SE = 258,                      /* SE  */
    GE = 259,                      /* GE  */
    AND = 260,                     /* AND  */
    OR = 261,                      /* OR  */
    EQ = 262,                      /* EQ  */
    DIF = 263,                     /* DIF  */
    PLUS = 264,                    /* PLUS  */
    MINUS = 265,                   /* MINUS  */
    MUL = 266,                     /* MUL  */
    DIV = 267,                     /* DIV  */
    MOD = 268,                     /* MOD  */
    ASSIGN = 269,                  /* ASSIGN  */
    SM = 270,                      /* SM  */
    GR = 271,                      /* GR  */
    COLON = 272,                   /* COLON  */
    COMMA = 273,                   /* COMMA  */
    OPEN = 274,                    /* OPEN  */
    CLOSED = 275,                  /* CLOSED  */
    OPENSQARED = 276,              /* OPENSQARED  */
    CLOSEDSQARED = 277,            /* CLOSEDSQARED  */
    OPENCURLY = 278,               /* OPENCURLY  */
    CLOSEDCURLY = 279,             /* CLOSEDCURLY  */
    IF = 280,                      /* IF  */
    ELSE = 281,                    /* ELSE  */
    WHILE = 282,                   /* WHILE  */
    FOR = 283,                     /* FOR  */
    INT = 284,                     /* INT  */
    CHAR = 285,                    /* CHAR  */
    BOOL = 286,                    /* BOOL  */
    FUNC = 287,                    /* FUNC  */
    MASTER = 288,                  /* MASTER  */
    NONE = 289,                    /* NONE  */
    MUT = 290,                     /* MUT  */
    READ = 291,                    /* READ  */
    WRITE = 292,                   /* WRITE  */
    ID = 293,                      /* ID  */
    NUM = 294,                     /* NUM  */
    CHARACTER = 295,               /* CHARACTER  */
    TRUE = 296,                    /* TRUE  */
    FALSE = 297                    /* FALSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define SE 258
#define GE 259
#define AND 260
#define OR 261
#define EQ 262
#define DIF 263
#define PLUS 264
#define MINUS 265
#define MUL 266
#define DIV 267
#define MOD 268
#define ASSIGN 269
#define SM 270
#define GR 271
#define COLON 272
#define COMMA 273
#define OPEN 274
#define CLOSED 275
#define OPENSQARED 276
#define CLOSEDSQARED 277
#define OPENCURLY 278
#define CLOSEDCURLY 279
#define IF 280
#define ELSE 281
#define WHILE 282
#define FOR 283
#define INT 284
#define CHAR 285
#define BOOL 286
#define FUNC 287
#define MASTER 288
#define NONE 289
#define MUT 290
#define READ 291
#define WRITE 292
#define ID 293
#define NUM 294
#define CHARACTER 295
#define TRUE 296
#define FALSE 297

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_SE = 3,                         /* SE  */
  YYSYMBOL_GE = 4,                         /* GE  */
  YYSYMBOL_AND = 5,                        /* AND  */
  YYSYMBOL_OR = 6,                         /* OR  */
  YYSYMBOL_EQ = 7,                         /* EQ  */
  YYSYMBOL_DIF = 8,                        /* DIF  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_MINUS = 10,                     /* MINUS  */
  YYSYMBOL_MUL = 11,                       /* MUL  */
  YYSYMBOL_DIV = 12,                       /* DIV  */
  YYSYMBOL_MOD = 13,                       /* MOD  */
  YYSYMBOL_ASSIGN = 14,                    /* ASSIGN  */
  YYSYMBOL_SM = 15,                        /* SM  */
  YYSYMBOL_GR = 16,                        /* GR  */
  YYSYMBOL_COLON = 17,                     /* COLON  */
  YYSYMBOL_COMMA = 18,                     /* COMMA  */
  YYSYMBOL_OPEN = 19,                      /* OPEN  */
  YYSYMBOL_CLOSED = 20,                    /* CLOSED  */
  YYSYMBOL_OPENSQARED = 21,                /* OPENSQARED  */
  YYSYMBOL_CLOSEDSQARED = 22,              /* CLOSEDSQARED  */
  YYSYMBOL_OPENCURLY = 23,                 /* OPENCURLY  */
  YYSYMBOL_CLOSEDCURLY = 24,               /* CLOSEDCURLY  */
  YYSYMBOL_IF = 25,                        /* IF  */
  YYSYMBOL_ELSE = 26,                      /* ELSE  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_INT = 29,                       /* INT  */
  YYSYMBOL_CHAR = 30,                      /* CHAR  */
  YYSYMBOL_BOOL = 31,                      /* BOOL  */
  YYSYMBOL_FUNC = 32,                      /* FUNC  */
  YYSYMBOL_MASTER = 33,                    /* MASTER  */
  YYSYMBOL_NONE = 34,                      /* NONE  */
  YYSYMBOL_MUT = 35,                       /* MUT  */
  YYSYMBOL_READ = 36,                      /* READ  */
  YYSYMBOL_WRITE = 37,                     /* WRITE  */
  YYSYMBOL_ID = 38,                        /* ID  */
  YYSYMBOL_NUM = 39,                       /* NUM  */
  YYSYMBOL_CHARACTER = 40,                 /* CHARACTER  */
  YYSYMBOL_TRUE = 41,                      /* TRUE  */
  YYSYMBOL_FALSE = 42,                     /* FALSE  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_program = 44,                   /* program  */
  YYSYMBOL_stmtlist = 45,                  /* stmtlist  */
  YYSYMBOL_stmt = 46,                      /* stmt  */
  YYSYMBOL_simplestmt = 47,                /* simplestmt  */
  YYSYMBOL_readstmt = 48,                  /* readstmt  */
  YYSYMBOL_writestmt = 49,                 /* writestmt  */
  YYSYMBOL_structstmt = 50,                /* structstmt  */
  YYSYMBOL_whilestmt = 51,                 /* whilestmt  */
  YYSYMBOL_forstmt = 52,                   /* forstmt  */
  YYSYMBOL_ifstmt = 53,                    /* ifstmt  */
  YYSYMBOL_decl = 54,                      /* decl  */
  YYSYMBOL_assigndecl = 55,                /* assigndecl  */
  YYSYMBOL_constdecl = 56,                 /* constdecl  */
  YYSYMBOL_assignment = 57,                /* assignment  */
  YYSYMBOL_expression = 58,                /* expression  */
  YYSYMBOL_logicexpr = 59,                 /* logicexpr  */
  YYSYMBOL_arithexpr = 60,                 /* arithexpr  */
  YYSYMBOL_var = 61,                       /* var  */
  YYSYMBOL_type = 62                       /* type  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  48
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   297


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    55,    55,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    76,
      77,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106
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
  "\"end of file\"", "error", "\"invalid token\"", "SE", "GE", "AND",
  "OR", "EQ", "DIF", "PLUS", "MINUS", "MUL", "DIV", "MOD", "ASSIGN", "SM",
  "GR", "COLON", "COMMA", "OPEN", "CLOSED", "OPENSQARED", "CLOSEDSQARED",
  "OPENCURLY", "CLOSEDCURLY", "IF", "ELSE", "WHILE", "FOR", "INT", "CHAR",
  "BOOL", "FUNC", "MASTER", "NONE", "MUT", "READ", "WRITE", "ID", "NUM",
  "CHARACTER", "TRUE", "FALSE", "$accept", "program", "stmtlist", "stmt",
  "simplestmt", "readstmt", "writestmt", "structstmt", "whilestmt",
  "forstmt", "ifstmt", "decl", "assigndecl", "constdecl", "assignment",
  "expression", "logicexpr", "arithexpr", "var", "type", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-32)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      10,   -12,    26,    24,   -32,    27,    32,    16,    21,    61,
      33,    41,    42,    31,    54,    56,    34,    50,    61,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
      -1,   -15,   -15,    43,    59,   -32,   -15,   -15,   -13,   -32,
     -32,   -11,   -11,   -15,   -32,   -32,   -32,    57,    87,    60,
      64,    47,    74,   -13,    73,   -32,    87,    81,   -32,   -32,
       1,   -11,   -32,    82,    85,    55,    83,   -11,   -11,   -11,
     -11,   -11,   -11,    84,    34,   -15,     1,   -32,   -32,   -11,
      69,    22,   -32,    13,   -11,   -11,   -11,   -11,   -11,    61,
     -32,   -32,   -32,   -32,   -32,   -32,    61,    91,   -32,    90,
      94,    95,    96,    97,   100,   101,   102,    99,   103,    77,
     -32,   -15,   -15,   -32,   -32,   -32,   -32,   -32,    98,   -32,
     105,   106,   108,   107,   109,   -32,   -32,    61,    61,   110,
     111,   -32,   -32
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     3,     5,
      11,    12,     6,    15,    16,    17,     7,     8,     9,    10,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     2,
       4,     0,     0,     0,    44,    37,    38,     0,     0,    36,
       0,     0,     0,     0,     0,    26,    27,     0,    46,    47,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,    13,    14,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
      33,    34,    32,    35,    30,    31,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,    39,    40,    41,    42,    43,    20,    18,
       0,     0,     0,     0,     0,    28,    29,     0,     0,     0,
       0,    21,    19
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,   -17,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   104,    -6,    20,   112,   -29,   -31,    -9,    78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    54,    55,    48,    49,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    40,    47,    50,    43,    56,    56,    35,    61,    30,
      62,    63,    65,    41,    64,    79,    58,    59,   100,   101,
      42,     3,    80,    44,    45,    46,     4,    44,    45,    46,
      81,    84,    85,    86,    87,    88,    90,    91,    92,    93,
      94,    95,     1,     5,     9,    35,    97,     6,    98,     7,
       8,    38,    31,   102,   103,   104,   105,   106,    67,    68,
      32,    33,    69,    70,    84,    85,    86,    87,    88,    34,
      71,    72,   107,    36,    39,    37,    53,    66,    51,   108,
      30,    42,   121,   122,    73,    74,    10,    30,    11,    12,
      67,    68,    75,    77,    69,    70,    13,    14,    15,    16,
      30,    78,    71,    72,    82,    83,    89,    96,    99,   109,
     129,   130,   110,   111,   112,    44,   113,   114,    30,    30,
     115,   116,   117,   118,   123,   124,   125,   119,   126,   120,
     127,    76,   128,     0,   131,   132,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57
};

static const yytype_int16 yycheck[] =
{
       9,    18,    31,    32,    19,    36,    37,    13,    19,    18,
      41,    42,    43,    14,    43,    14,    29,    30,     5,     6,
      21,    33,    21,    38,    39,    40,     0,    38,    39,    40,
      61,     9,    10,    11,    12,    13,    67,    68,    69,    70,
      71,    72,    32,    19,    23,    51,    75,    20,    79,    17,
      34,    17,    19,    84,    85,    86,    87,    88,     3,     4,
      19,    19,     7,     8,     9,    10,    11,    12,    13,    38,
      15,    16,    89,    19,    24,    19,    17,    20,    35,    96,
      89,    21,   111,   112,    20,    38,    25,    96,    27,    28,
       3,     4,    18,    20,     7,     8,    35,    36,    37,    38,
     109,    20,    15,    16,    22,    20,    23,    23,    39,    18,
     127,   128,    22,    19,    19,    38,    20,    20,   127,   128,
      20,    20,    20,    24,    26,    20,    20,    24,    20,   109,
      23,    53,    23,    -1,    24,    24,    -1,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    32,    44,    33,     0,    19,    20,    17,    34,    23,
      25,    27,    28,    35,    36,    37,    38,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      61,    19,    19,    19,    38,    56,    19,    19,    17,    24,
      45,    14,    21,    19,    38,    39,    40,    59,    60,    61,
      59,    35,    55,    17,    58,    59,    60,    58,    29,    30,
      62,    19,    60,    60,    59,    60,    20,     3,     4,     7,
       8,    15,    16,    20,    38,    18,    62,    20,    20,    14,
      21,    60,    22,    20,     9,    10,    11,    12,    13,    23,
      60,    60,    60,    60,    60,    60,    23,    59,    60,    39,
       5,     6,    60,    60,    60,    60,    60,    45,    45,    18,
      22,    19,    19,    20,    20,    20,    20,    20,    24,    24,
      57,    59,    59,    26,    20,    20,    20,    23,    23,    45,
      45,    24,    24
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    47,    47,    47,
      47,    47,    47,    48,    49,    50,    50,    50,    51,    52,
      53,    53,    54,    55,    56,    57,    58,    58,    59,    59,
      59,    59,    59,    59,    59,    59,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    62,    62,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     9,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     1,     1,     1,     7,    11,
       7,    11,     4,     2,     5,     3,     1,     1,     7,     7,
       3,     3,     3,     3,     3,     3,     1,     1,     1,     5,
       5,     5,     5,     5,     1,     4,     1,     1,     4
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
  case 2: /* program: FUNC MASTER OPEN CLOSED COLON NONE OPENCURLY stmtlist CLOSEDCURLY  */
#line 55 "parser.y"
                                                                           {
            printf("program -> func master(): None { stmtlist }\n");
       }
#line 1330 "y.tab.c"
    break;

  case 3: /* stmtlist: stmt  */
#line 58 "parser.y"
               { printf("stmtlist -> stmt\n"); }
#line 1336 "y.tab.c"
    break;

  case 4: /* stmtlist: stmt stmtlist  */
#line 59 "parser.y"
                        { printf("stmtlist -> stmt \\n stmtlist"); }
#line 1342 "y.tab.c"
    break;

  case 5: /* stmt: simplestmt  */
#line 60 "parser.y"
                 { printf("stmt -> simplestmt\n"); }
#line 1348 "y.tab.c"
    break;

  case 6: /* stmt: structstmt  */
#line 61 "parser.y"
                 { printf("stmt -> structstmt\n"); }
#line 1354 "y.tab.c"
    break;

  case 7: /* simplestmt: decl  */
#line 62 "parser.y"
                 { printf("simplestmt -> decl\n"); }
#line 1360 "y.tab.c"
    break;

  case 8: /* simplestmt: assigndecl  */
#line 63 "parser.y"
                       { printf("simplestmt -> assigndecl\n"); }
#line 1366 "y.tab.c"
    break;

  case 9: /* simplestmt: constdecl  */
#line 64 "parser.y"
                      { printf("simplestmt -> constdecl\n"); }
#line 1372 "y.tab.c"
    break;

  case 10: /* simplestmt: assignment  */
#line 65 "parser.y"
                       { printf("simplestmt -> assignment\n"); }
#line 1378 "y.tab.c"
    break;

  case 11: /* simplestmt: readstmt  */
#line 66 "parser.y"
                     { printf("simplestmt -> readstmt\n"); }
#line 1384 "y.tab.c"
    break;

  case 12: /* simplestmt: writestmt  */
#line 67 "parser.y"
                      { printf("simplestmt -> writestmt\n"); }
#line 1390 "y.tab.c"
    break;

  case 13: /* readstmt: READ OPEN expression CLOSED  */
#line 68 "parser.y"
                                      { printf("read(expression)\n"); }
#line 1396 "y.tab.c"
    break;

  case 14: /* writestmt: WRITE OPEN expression CLOSED  */
#line 69 "parser.y"
                                        { printf("write(expression)\n"); }
#line 1402 "y.tab.c"
    break;

  case 15: /* structstmt: whilestmt  */
#line 70 "parser.y"
                      { printf("structstmt -> whilestmt\n"); }
#line 1408 "y.tab.c"
    break;

  case 16: /* structstmt: forstmt  */
#line 71 "parser.y"
                    { printf("structstmt -> forstmt\n"); }
#line 1414 "y.tab.c"
    break;

  case 17: /* structstmt: ifstmt  */
#line 72 "parser.y"
                   { printf("structstmt -> ifstmt\n"); }
#line 1420 "y.tab.c"
    break;

  case 18: /* whilestmt: WHILE OPEN logicexpr CLOSED OPENCURLY stmtlist CLOSEDCURLY  */
#line 73 "parser.y"
                                                                      {
            printf("whilestmt -> while(logicexpr) -> { stmtlist }\n"); 
         }
#line 1428 "y.tab.c"
    break;

  case 19: /* forstmt: FOR OPEN assigndecl COMMA logicexpr COMMA assignment CLOSED OPENCURLY stmtlist CLOSEDCURLY  */
#line 76 "parser.y"
                                                                                                    { printf("forstmt -> for(assigndecl, logicexpr, assignment) { stmtlist }\n"); }
#line 1434 "y.tab.c"
    break;

  case 20: /* ifstmt: IF OPEN logicexpr CLOSED OPENCURLY stmtlist CLOSEDCURLY  */
#line 77 "parser.y"
                                                                {
        printf("ifstmt -> if(logicexpr) { stmtlist }\n"); }
#line 1441 "y.tab.c"
    break;

  case 21: /* ifstmt: IF OPEN logicexpr CLOSED OPENCURLY stmtlist CLOSEDCURLY ELSE OPENCURLY stmtlist CLOSEDCURLY  */
#line 79 "parser.y"
                                                                                                    { printf("ifstmt -> if(logicexpr) { stmtlist } else { stmtlist }\n"); }
#line 1447 "y.tab.c"
    break;

  case 22: /* decl: MUT ID COLON type  */
#line 80 "parser.y"
                        { printf("decl -> mut identifier: type\n"); }
#line 1453 "y.tab.c"
    break;

  case 23: /* assigndecl: MUT constdecl  */
#line 81 "parser.y"
                          { printf("assigndecl -> mut constdecl\n"); }
#line 1459 "y.tab.c"
    break;

  case 24: /* constdecl: ID COLON type ASSIGN arithexpr  */
#line 82 "parser.y"
                                          { printf("constdecl -> identifier: type = arithexpression\n"); }
#line 1465 "y.tab.c"
    break;

  case 25: /* assignment: var ASSIGN arithexpr  */
#line 83 "parser.y"
                                 { printf("assignment -> identifer = arithexpression\n"); }
#line 1471 "y.tab.c"
    break;

  case 26: /* expression: logicexpr  */
#line 84 "parser.y"
                      { printf("expression -> logicexpr\n"); }
#line 1477 "y.tab.c"
    break;

  case 27: /* expression: arithexpr  */
#line 85 "parser.y"
                      { printf("expression -> arithexpr\n"); }
#line 1483 "y.tab.c"
    break;

  case 28: /* logicexpr: OPEN logicexpr CLOSED AND OPEN logicexpr CLOSED  */
#line 86 "parser.y"
                                                           { printf("logicexpr -> logicexpr & logicexpr\n"); }
#line 1489 "y.tab.c"
    break;

  case 29: /* logicexpr: OPEN logicexpr CLOSED OR OPEN logicexpr CLOSED  */
#line 87 "parser.y"
                                                          { printf("logicexpr -> logicexpr | logicexpr\n"); }
#line 1495 "y.tab.c"
    break;

  case 30: /* logicexpr: arithexpr SM arithexpr  */
#line 88 "parser.y"
                                  { printf("logicexpr -> arithexpr < arithexpr\n"); }
#line 1501 "y.tab.c"
    break;

  case 31: /* logicexpr: arithexpr GR arithexpr  */
#line 89 "parser.y"
                                  { printf("logicexpr -> arithexpr > arithexpr\n"); }
#line 1507 "y.tab.c"
    break;

  case 32: /* logicexpr: arithexpr EQ arithexpr  */
#line 90 "parser.y"
                                  { printf("logicexpr -> arithexpr == arithexpr\n"); }
#line 1513 "y.tab.c"
    break;

  case 33: /* logicexpr: arithexpr SE arithexpr  */
#line 91 "parser.y"
                                  { printf("logicexpr -> arithexpr <= arithexpr\n"); }
#line 1519 "y.tab.c"
    break;

  case 34: /* logicexpr: arithexpr GE arithexpr  */
#line 92 "parser.y"
                                  { printf("logicexpr -> arithexpr >= arithexpr\n"); }
#line 1525 "y.tab.c"
    break;

  case 35: /* logicexpr: arithexpr DIF arithexpr  */
#line 93 "parser.y"
                                   { printf("logicexpr -> arithexpr != arithexpr\n"); }
#line 1531 "y.tab.c"
    break;

  case 36: /* arithexpr: var  */
#line 94 "parser.y"
               { printf("arithexpr -> var\n"); }
#line 1537 "y.tab.c"
    break;

  case 37: /* arithexpr: NUM  */
#line 95 "parser.y"
               { printf("arithexpr -> constint\n"); }
#line 1543 "y.tab.c"
    break;

  case 38: /* arithexpr: CHARACTER  */
#line 96 "parser.y"
                     { printf("arithexpr -> constchar\n"); }
#line 1549 "y.tab.c"
    break;

  case 39: /* arithexpr: OPEN arithexpr PLUS arithexpr CLOSED  */
#line 97 "parser.y"
                                                { printf("logicexpr -> arithexpr + arithexpr\n"); }
#line 1555 "y.tab.c"
    break;

  case 40: /* arithexpr: OPEN arithexpr MINUS arithexpr CLOSED  */
#line 98 "parser.y"
                                                 { printf("logicexpr -> arithexpr - arithexpr\n"); }
#line 1561 "y.tab.c"
    break;

  case 41: /* arithexpr: OPEN arithexpr MUL arithexpr CLOSED  */
#line 99 "parser.y"
                                               { printf("logicexpr -> arithexpr * arithexpr\n"); }
#line 1567 "y.tab.c"
    break;

  case 42: /* arithexpr: OPEN arithexpr DIV arithexpr CLOSED  */
#line 100 "parser.y"
                                               { printf("logicexpr -> arithexpr / arithexpr\n"); }
#line 1573 "y.tab.c"
    break;

  case 43: /* arithexpr: OPEN arithexpr MOD arithexpr CLOSED  */
#line 101 "parser.y"
                                               { printf("logicexpr -> arithexpr \% arithexpr\n"); }
#line 1579 "y.tab.c"
    break;

  case 44: /* var: ID  */
#line 102 "parser.y"
        { printf("var -> ID\n"); }
#line 1585 "y.tab.c"
    break;

  case 45: /* var: var OPENSQARED arithexpr CLOSEDSQARED  */
#line 103 "parser.y"
                                           { printf("var -> var[arithexpr]\n"); }
#line 1591 "y.tab.c"
    break;

  case 46: /* type: INT  */
#line 104 "parser.y"
          { printf("type -> int\n"); }
#line 1597 "y.tab.c"
    break;

  case 47: /* type: CHAR  */
#line 105 "parser.y"
           { printf("type -> char\n"); }
#line 1603 "y.tab.c"
    break;

  case 48: /* type: type OPENSQARED NUM CLOSEDSQARED  */
#line 106 "parser.y"
                                       { printf("type -> array\n"); }
#line 1609 "y.tab.c"
    break;


#line 1613 "y.tab.c"

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

#line 108 "parser.y"


extern FILE *yyin;

int yyerror(char *s)
{	
    printf("%s\n", s);
    return 1;
}

int main(int argc, char **argv)
{
	if(argc>1) yyin =  fopen(argv[1],"r");
	if(!yyparse()) fprintf(stderr, "\tOK\n");

    return 0;
} 
