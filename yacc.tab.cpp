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
#line 1 "yacc.y"

#include "main.h"
#include "yacc.tab.h"
extern "C"
{
	void yyerror(const char *s);
	int yyparse();
	extern int yylex();
}

void yyerror(const char *s, YYLTYPE *loc);
void yyerror(const char *s, int line, int col);
void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol);

extern int yylineno;
extern char* yytext;
extern char lineBuffer[500];
extern int yyleng;
extern int yycolumn;

bool haveSemanticError=false;
int rec_line,rec_pos;
char rec_buff[505];

Type* ParseTreeHead=NULL;

vector<string> syntaxErrorInformation; //存放语法错误信息


#line 101 "yacc.tab.c"

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

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROGRAM = 3,                    /* PROGRAM  */
  YYSYMBOL_CONST = 4,                      /* CONST  */
  YYSYMBOL_VAR = 5,                        /* VAR  */
  YYSYMBOL_ARRAY = 6,                      /* ARRAY  */
  YYSYMBOL_OF = 7,                         /* OF  */
  YYSYMBOL_PROCEDURE = 8,                  /* PROCEDURE  */
  YYSYMBOL_FUNCTION = 9,                   /* FUNCTION  */
  YYSYMBOL__BEGIN = 10,                    /* _BEGIN  */
  YYSYMBOL_END = 11,                       /* END  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_THEN = 13,                      /* THEN  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_TO = 15,                        /* TO  */
  YYSYMBOL_DO = 16,                        /* DO  */
  YYSYMBOL_ELSE = 17,                      /* ELSE  */
  YYSYMBOL_REPEAT = 18,                    /* REPEAT  */
  YYSYMBOL_UNTIL = 19,                     /* UNTIL  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_IDENTIFIER = 21,                /* IDENTIFIER  */
  YYSYMBOL_UINUM = 22,                     /* UINUM  */
  YYSYMBOL_UFNUM = 23,                     /* UFNUM  */
  YYSYMBOL_CHAR = 24,                      /* CHAR  */
  YYSYMBOL_TYPE = 25,                      /* TYPE  */
  YYSYMBOL_ASSIGNOP = 26,                  /* ASSIGNOP  */
  YYSYMBOL_RELOP = 27,                     /* RELOP  */
  YYSYMBOL_ADDOP = 28,                     /* ADDOP  */
  YYSYMBOL_MULOP = 29,                     /* MULOP  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_RANGEDOT = 31,                  /* RANGEDOT  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_ADD = 34,                       /* ADD  */
  YYSYMBOL_35_ = 35,                       /* '*'  */
  YYSYMBOL_36_ = 36,                       /* '/'  */
  YYSYMBOL_MUL = 37,                       /* MUL  */
  YYSYMBOL_UMINUS = 38,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_ELSE = 39,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_ONE = 40,                       /* ONE  */
  YYSYMBOL_TWO = 41,                       /* TWO  */
  YYSYMBOL_THREE = 42,                     /* THREE  */
  YYSYMBOL_43_ = 43,                       /* ';'  */
  YYSYMBOL_44_ = 44,                       /* '.'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* ','  */
  YYSYMBOL_48_ = 48,                       /* '='  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_50_ = 50,                       /* '['  */
  YYSYMBOL_51_ = 51,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 52,                  /* $accept  */
  YYSYMBOL_programstruct = 53,             /* programstruct  */
  YYSYMBOL_program_head = 54,              /* program_head  */
  YYSYMBOL_program_body = 55,              /* program_body  */
  YYSYMBOL_idlist = 56,                    /* idlist  */
  YYSYMBOL_const_declarations = 57,        /* const_declarations  */
  YYSYMBOL_const_declaration = 58,         /* const_declaration  */
  YYSYMBOL_const_value = 59,               /* const_value  */
  YYSYMBOL_var_declarations = 60,          /* var_declarations  */
  YYSYMBOL_var_declaration = 61,           /* var_declaration  */
  YYSYMBOL_type = 62,                      /* type  */
  YYSYMBOL_period = 63,                    /* period  */
  YYSYMBOL_subprogram_declarations = 64,   /* subprogram_declarations  */
  YYSYMBOL_subprogram = 65,                /* subprogram  */
  YYSYMBOL_subprogram_head = 66,           /* subprogram_head  */
  YYSYMBOL_formal_parameter = 67,          /* formal_parameter  */
  YYSYMBOL_parameter_list = 68,            /* parameter_list  */
  YYSYMBOL_parameter = 69,                 /* parameter  */
  YYSYMBOL_var_parameter = 70,             /* var_parameter  */
  YYSYMBOL_value_parameter = 71,           /* value_parameter  */
  YYSYMBOL_subprogram_body = 72,           /* subprogram_body  */
  YYSYMBOL_compound_statement = 73,        /* compound_statement  */
  YYSYMBOL_statement_list = 74,            /* statement_list  */
  YYSYMBOL_statement = 75,                 /* statement  */
  YYSYMBOL_else_part = 76,                 /* else_part  */
  YYSYMBOL_variable = 77,                  /* variable  */
  YYSYMBOL_id_varpart = 78,                /* id_varpart  */
  YYSYMBOL_procedure_call = 79,            /* procedure_call  */
  YYSYMBOL_expression_list = 80,           /* expression_list  */
  YYSYMBOL_expression = 81,                /* expression  */
  YYSYMBOL_simple_expression = 82,         /* simple_expression  */
  YYSYMBOL_term = 83,                      /* term  */
  YYSYMBOL_factor = 84                     /* factor  */
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
typedef yytype_int16 yy_state_t;

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYLAST   395

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      45,    46,    35,    32,    47,    33,    44,    36,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    43,
       2,    48,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    34,    37,    38,
      39,    40,    41,    42
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    76,    76,    84,    88,    92,    96,   100,   104,   109,
     114,   121,   126,   130,   134,   138,   142,   146,   150,   156,
     163,   167,   173,   177,   180,   184,   190,   195,   199,   203,
     207,   211,   215,   221,   225,   229,   233,   237,   241,   245,
     249,   253,   257,   263,   267,   270,   274,   280,   285,   289,
     293,   297,   301,   305,   311,   315,   321,   325,   329,   333,
     337,   341,   347,   352,   356,   360,   366,   370,   374,   379,
     383,   389,   393,   398,   402,   406,   410,   414,   418,   424,
     428,   431,   435,   441,   445,   449,   455,   459,   465,   469,
     475,   479,   483,   487,   493,   499,   503,   509,   513,   517,
     523,   527,   531,   535,   540,   544,   551,   555,   559,   563,
     568,   572,   578,   582,   587,   591,   596,   602,   606,   610,
     614,   619,   623,   628,   634,   638,   642,   648,   652,   656,
     662,   666,   670,   674,   678,   684,   688,   692,   698,   702,
     706,   710,   715,   719,   723,   727,   731,   735,   739
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
  "\"end of file\"", "error", "\"invalid token\"", "PROGRAM", "CONST",
  "VAR", "ARRAY", "OF", "PROCEDURE", "FUNCTION", "_BEGIN", "END", "IF",
  "THEN", "FOR", "TO", "DO", "ELSE", "REPEAT", "UNTIL", "WHILE",
  "IDENTIFIER", "UINUM", "UFNUM", "CHAR", "TYPE", "ASSIGNOP", "RELOP",
  "ADDOP", "MULOP", "NOT", "RANGEDOT", "'+'", "'-'", "ADD", "'*'", "'/'",
  "MUL", "UMINUS", "LOWER_THAN_ELSE", "ONE", "TWO", "THREE", "';'", "'.'",
  "'('", "')'", "','", "'='", "':'", "'['", "']'", "$accept",
  "programstruct", "program_head", "program_body", "idlist",
  "const_declarations", "const_declaration", "const_value",
  "var_declarations", "var_declaration", "type", "period",
  "subprogram_declarations", "subprogram", "subprogram_head",
  "formal_parameter", "parameter_list", "parameter", "var_parameter",
  "value_parameter", "subprogram_body", "compound_statement",
  "statement_list", "statement", "else_part", "variable", "id_varpart",
  "procedure_call", "expression_list", "expression", "simple_expression",
  "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-144)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-124)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     273,   123,   232,   109,    91,   192,   111,   200,    18,  -144,
     192,   321,   256,   223,   151,   192,   331,   197,   197,   257,
     248,   270,    88,   277,     6,   120,  -144,   280,  -144,   290,
     306,    97,  -144,    -9,    71,   308,    41,  -144,  -144,  -144,
    -144,  -144,   286,   247,   334,   335,   284,    24,   130,   233,
    -144,  -144,  -144,  -144,  -144,   336,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   323,   326,  -144,  -144,  -144,   310,
      38,  -144,   174,    16,   197,   197,   281,   282,   303,   132,
     145,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,   286,
     286,   272,    17,  -144,  -144,  -144,  -144,   304,    30,  -144,
     307,   210,   307,   267,   338,   303,   267,   155,  -144,   112,
    -144,   337,  -144,  -144,  -144,   192,   192,  -144,  -144,  -144,
    -144,   339,   163,   174,   174,   196,    19,  -144,   311,    32,
     266,  -144,  -144,  -144,   267,   267,   267,  -144,   170,   203,
     333,  -144,    25,   105,   104,   267,   146,  -144,   303,  -144,
     303,   267,   151,  -144,  -144,   340,    13,  -144,    14,  -144,
    -144,  -144,  -144,  -144,   285,    31,    58,  -144,  -144,  -144,
     341,   342,   152,   171,  -144,  -144,    51,   303,   303,   267,
     189,   202,   267,   216,   267,   267,   242,   267,   303,   303,
      44,  -144,  -144,    15,  -144,  -144,  -144,   354,   343,   346,
     347,   363,   346,   243,  -144,  -144,   348,   164,    98,    98,
    -144,  -144,  -144,  -144,  -144,  -144,    47,  -144,  -144,   355,
     355,   187,   267,   333,   267,   333,   187,   267,  -144,   359,
      28,   283,   337,  -144,   332,  -144,  -144,   267,  -144,   267,
     267,  -144,  -144,  -144,   345,    22,   352,   353,   173,  -144,
    -144,  -144,  -144,  -144,   267,  -144,   303,  -144,  -144,   333,
     333,  -144,   267,   267,   267,   171,  -144,  -144,  -144,   357,
     358,   360,  -144,  -144,  -144,  -144,  -144,   365,   367,   213,
      49,  -144,  -144,  -144,   303,   303,   303,   303,   106,   139,
    -144,  -144,  -144,  -144
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    23,     0,    16,     0,     1,
      23,     0,     0,     0,    44,    23,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     5,     0,    68,     0,
       0,     0,    21,     0,     0,    18,     0,     3,     6,     4,
       2,    24,     0,     0,    25,    22,     0,     0,     0,     0,
       8,    10,     9,     7,    12,     0,    13,    14,    15,    11,
      35,    38,    41,    42,     0,     0,    32,    29,    28,     0,
       0,    45,     0,     0,    46,    43,     0,     0,   113,     0,
       0,    19,    20,    33,    36,    39,    34,    37,    40,     0,
       0,     0,     0,    54,    53,    52,    48,     0,     0,    78,
      80,    77,    80,     0,     0,   113,     0,   121,   102,     0,
      99,     0,   101,    67,    66,    23,    23,    30,    31,    27,
      26,    59,     0,     0,     0,     0,     0,    71,     0,     0,
     120,   138,   139,   148,     0,     0,     0,   140,     0,   129,
     134,   137,     0,     0,     0,     0,     0,   116,    96,    95,
     113,     0,    44,    70,    69,     0,     0,    60,     0,    49,
      50,    51,    47,    81,     0,     0,     0,    85,    86,    87,
       0,    76,     0,     0,   146,   147,     0,   113,   113,     0,
       0,     0,     0,     0,     0,     0,   113,     0,   113,   113,
       0,   125,   118,     0,    98,    97,   100,     0,     0,     0,
       0,     0,    61,     0,    89,    88,    93,     0,    82,     0,
      79,    73,    74,    75,    72,   143,     0,   145,   144,   115,
     115,   127,     0,   130,     0,   132,   128,     0,   135,     0,
       0,   120,   140,   112,     0,   110,   109,   123,   122,     0,
     119,   117,    94,    65,     0,     0,     0,     0,     0,    91,
      92,    90,    84,    83,   142,   141,   113,   104,   103,   131,
     133,   136,     0,     0,     0,     0,   111,   126,   124,     0,
       0,     0,    56,    57,    58,    55,   114,     0,     0,     0,
       0,    63,    64,    62,   113,   113,   113,   113,   142,   141,
     106,   107,   108,   105
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,   383,   327,    -6,   169,  -144,   -15,   234,  -144,
     -68,   263,  -144,  -144,  -144,   126,  -144,    90,  -144,   224,
     271,   -47,   287,  -142,   175,   -78,  -144,  -144,  -143,  -102,
       5,   -65,  -125
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     3,     4,    13,   165,    14,    25,    66,    28,    48,
      94,   156,    49,    79,    80,   127,   166,   167,   168,   169,
     153,   108,   109,   110,   257,   137,   147,   112,   190,   191,
     139,   140,   141
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     111,   138,    81,   193,   144,    96,   194,    42,   195,   174,
     175,    33,    34,    36,   199,   202,   240,    95,   121,    18,
     163,    47,    92,   270,   164,    72,   184,   111,    68,   263,
     216,   124,   206,   171,   176,   219,   220,    54,    55,    90,
      32,    93,    58,   264,   194,   237,   235,   236,   254,   196,
     288,   185,   217,   271,    43,   159,   160,   162,   228,   208,
     200,   200,   239,    19,   201,   203,   241,   122,    97,    98,
     111,    55,   111,    73,   117,   118,   120,    55,    55,   125,
     207,   172,   229,   230,   233,   234,    91,    59,    55,    39,
     238,   239,    10,   255,   239,   289,   239,   218,    52,   111,
     111,   209,   261,   164,   210,   188,   186,  -123,   232,     9,
     111,   111,    15,   148,   276,   223,   225,    56,    55,    32,
     189,    44,   280,   149,   187,  -123,     2,   130,   131,   132,
     133,    74,    40,   113,    11,   267,   134,   268,   267,   135,
    -122,    53,   290,   291,   292,   293,   115,   192,   150,  -123,
     242,   136,   267,   213,    16,   150,    27,   259,  -122,   260,
     277,   278,   279,    45,   157,   250,     5,   130,   131,   132,
     133,   177,   215,    75,   274,   114,   134,   214,   111,   135,
      92,  -120,  -122,   178,   221,   155,   267,   226,   116,   251,
     222,   136,   130,   131,   132,   133,    12,   161,   275,    93,
     145,   134,    92,   224,   135,   146,   111,   111,   111,   111,
     130,   131,   132,   133,   286,   180,   136,   227,    32,   134,
     181,    93,   135,   130,   131,   132,   133,   128,   129,   287,
     179,   180,   134,     7,   136,   135,   181,   130,   131,   132,
     133,    76,    77,    78,   247,    17,   134,   136,    67,   135,
     248,   182,    78,     8,   103,   126,   104,    23,    35,   -80,
     105,   136,   106,   231,   131,   132,   133,    26,    60,    61,
      62,    63,   134,   119,     1,   135,     2,    24,    32,    64,
      65,    46,    99,   101,   152,   152,   204,   136,   130,   131,
     132,   133,    37,    60,    61,    62,    63,   134,   252,   253,
     135,    32,   100,   102,    64,    65,    32,    60,    61,    62,
      63,   173,   136,    78,    38,   103,   146,   104,    64,    65,
      41,   105,    21,   106,   107,    12,   -23,    71,   265,   -23,
     -23,   -23,    30,   146,    50,    12,   -23,    20,    22,   -23,
     -23,   -23,    29,    31,    83,    84,    85,    86,    87,    88,
      51,    55,   126,   123,    57,    69,    70,    82,    89,   142,
     170,   155,   183,   151,    78,   243,   211,   212,   244,   245,
     246,   198,   256,   249,   262,   266,   269,   272,   273,   281,
     282,   284,   283,   285,     6,   158,   197,   154,   205,     0,
       0,     0,   143,     0,     0,   258
};

static const yytype_int16 yycheck[] =
{
      78,   103,    49,   146,   106,    73,   148,     1,   150,   134,
     135,    17,    18,    19,     1,     1,     1,     1,     1,     1,
       1,    27,     6,     1,     5,     1,     1,   105,    43,     1,
     173,     1,     1,     1,   136,   177,   178,    46,    47,     1,
      21,    25,     1,    15,   186,     1,   188,   189,     1,   151,
       1,    26,     1,    31,    48,   123,   124,   125,   183,     1,
      47,    47,    47,    45,    51,    51,    51,    50,    74,    75,
     148,    47,   150,    49,    89,    90,    91,    47,    47,    49,
      49,    49,   184,   185,   186,   187,    48,    46,    47,     1,
      46,    47,     1,    46,    47,    46,    47,    46,     1,   177,
     178,    43,   227,     5,    46,     1,     1,     1,   186,     0,
     188,   189,     1,     1,   256,   180,   181,    46,    47,    21,
      16,     1,   265,    11,    19,    19,     3,    21,    22,    23,
      24,     1,    44,     1,    43,   237,    30,   239,   240,    33,
       1,    44,   284,   285,   286,   287,     1,     1,    43,    43,
     197,    45,   254,     1,    43,    43,     5,   222,    19,   224,
     262,   263,   264,    43,     1,     1,    43,    21,    22,    23,
      24,     1,     1,    43,     1,    43,    30,    25,   256,    33,
       6,    26,    43,    13,   179,    22,   288,   182,    43,    25,
       1,    45,    21,    22,    23,    24,     4,     1,    25,    25,
      45,    30,     6,     1,    33,    50,   284,   285,   286,   287,
      21,    22,    23,    24,     1,    28,    45,     1,    21,    30,
      33,    25,    33,    21,    22,    23,    24,   101,   102,    16,
      27,    28,    30,     1,    45,    33,    33,    21,    22,    23,
      24,     8,     9,    10,     1,    45,    30,    45,     1,    33,
       7,    48,    10,    21,    12,    45,    14,     1,     1,    49,
      18,    45,    20,    21,    22,    23,    24,    44,    21,    22,
      23,    24,    30,     1,     1,    33,     3,    21,    21,    32,
      33,     1,     1,     1,   115,   116,     1,    45,    21,    22,
      23,    24,    44,    21,    22,    23,    24,    30,   208,   209,
      33,    21,    21,    21,    32,    33,    21,    21,    22,    23,
      24,    45,    45,    10,    44,    12,    50,    14,    32,    33,
      43,    18,     1,    20,    21,     4,     5,    43,    45,     8,
       9,    10,     1,    50,    44,     4,     5,    10,    11,     8,
       9,    10,    15,    16,    21,    22,    23,    21,    22,    23,
      44,    47,    45,    49,    46,    21,    21,    21,    48,    21,
      49,    22,    29,    26,    10,    22,    25,    25,    22,    22,
       7,    31,    17,    25,    15,    43,    31,    25,    25,    22,
      22,    16,    22,    16,     1,   122,   152,   116,   164,    -1,
      -1,    -1,   105,    -1,    -1,   220
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    53,    54,    43,    54,     1,    21,     0,
       1,    43,     4,    55,    57,     1,    43,    45,     1,    45,
      55,     1,    55,     1,    21,    58,    44,     5,    60,    55,
       1,    55,    21,    56,    56,     1,    56,    44,    44,     1,
      44,    43,     1,    48,     1,    43,     1,    56,    61,    64,
      44,    44,     1,    44,    46,    47,    46,    46,     1,    46,
      21,    22,    23,    24,    32,    33,    59,     1,    59,    21,
      21,    43,     1,    49,     1,    43,     8,     9,    10,    65,
      66,    73,    21,    21,    22,    23,    21,    22,    23,    48,
       1,    48,     6,    25,    62,     1,    62,    56,    56,     1,
      21,     1,    21,    12,    14,    18,    20,    21,    73,    74,
      75,    77,    79,     1,    43,     1,    43,    59,    59,     1,
      59,     1,    50,    49,     1,    49,    45,    67,    67,    67,
      21,    22,    23,    24,    30,    33,    45,    77,    81,    82,
      83,    84,    21,    74,    81,    45,    50,    78,     1,    11,
      43,    26,    57,    72,    72,    22,    63,     1,    63,    62,
      62,     1,    62,     1,     5,    56,    68,    69,    70,    71,
      49,     1,    49,    45,    84,    84,    81,     1,    13,    27,
      28,    33,    48,    29,     1,    26,     1,    19,     1,    16,
      80,    81,     1,    80,    75,    75,    81,    60,    31,     1,
      47,    51,     1,    51,     1,    71,     1,    49,     1,    43,
      46,    25,    25,     1,    25,     1,    80,     1,    46,    75,
      75,    82,     1,    83,     1,    83,    82,     1,    84,    81,
      81,    21,    77,    81,    81,    75,    75,     1,    46,    47,
       1,    51,    73,    22,    22,    22,     7,     1,     7,    25,
       1,    25,    69,    69,     1,    46,    17,    76,    76,    83,
      83,    84,    15,     1,    15,    45,    43,    81,    81,    31,
       1,    31,    25,    25,     1,    25,    75,    81,    81,    81,
      80,    22,    22,    22,    16,    16,     1,    16,     1,    46,
      75,    75,    75,    75
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    54,    54,    54,    54,    54,    54,    54,    54,    55,
      56,    56,    57,    57,    57,    57,    58,    58,    58,    58,
      58,    58,    58,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    65,
      65,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    68,    68,    68,    69,    69,    70,    70,
      71,    71,    71,    71,    72,    73,    73,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    78,    78,    78,
      78,    79,    79,    79,    80,    80,    80,    81,    81,    81,
      82,    82,    82,    82,    82,    83,    83,    83,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     4,     4,     4,     4,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     2,     3,     4,     4,
       3,     1,     3,     0,     3,     3,     5,     5,     3,     3,
       5,     5,     3,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     1,     3,     0,     3,     3,     5,     3,     5,
       5,     5,     3,     3,     1,     6,     6,     6,     6,     2,
       3,     4,     5,     5,     5,     3,     3,     3,     0,     3,
       3,     3,     5,     5,     5,     5,     4,     2,     2,     3,
       0,     2,     3,     3,     3,     1,     1,     1,     2,     2,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     1,
       3,     1,     1,     5,     5,     8,     8,     8,     8,     4,
       4,     5,     4,     0,     2,     0,     2,     3,     2,     3,
       0,     1,     4,     4,     3,     1,     3,     3,     3,     1,
       3,     4,     3,     4,     1,     3,     4,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     2,     2,     1
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

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YYLOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YYLOCATION_PRINT

#  if defined YY_LOCATION_PRINT

   /* Temporary convenience wrapper in case some people defined the
      undocumented and private YY_LOCATION_PRINT macros.  */
#   define YYLOCATION_PRINT(File, Loc)  YY_LOCATION_PRINT(File, *(Loc))

#  elif defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
}

#   define YYLOCATION_PRINT  yy_location_print_

    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT(File, Loc)  YYLOCATION_PRINT(File, &(Loc))

#  else

#   define YYLOCATION_PRINT(File, Loc) ((void) 0)
    /* Temporary convenience wrapper in case some people defined the
       undocumented and private YY_LOCATION_PRINT macros.  */
#   define YY_LOCATION_PRINT  YYLOCATION_PRINT

#  endif
# endif /* !defined YYLOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (yylocationp);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YYLOCATION_PRINT (yyo, yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YY_USE (yyvaluep);
  YY_USE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* programstruct: program_head ';' program_body '.'  */
#line 76 "yacc.y"
                                                 { //正常
			   		ParseTreeHead=yyval=new Type;
			   		yyval->token = "programstruct";
			   		yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]);
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					if(yylex()) //多余的内容
						yyerror("redundant content at the end!", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					YYACCEPT;
			   	}
#line 1513 "yacc.tab.c"
    break;

  case 3: /* programstruct: program_head error program_body '.'  */
#line 84 "yacc.y"
                                                                     { //ERROR 缺少分号 checked
			   		ParseTreeHead=yyval=new Type;
			   		yyval->token = "programstruct";
					yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
			   	}
#line 1523 "yacc.tab.c"
    break;

  case 4: /* programstruct: program_head ';' program_body error  */
#line 88 "yacc.y"
                                                                     { //ERROR 缺少点号 checked
			   		ParseTreeHead=yyval=new Type;
			   		yyval->token = "programstruct";
					yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			   	}
#line 1533 "yacc.tab.c"
    break;

  case 5: /* programstruct: error ';' program_body '.'  */
#line 92 "yacc.y"
                                                            { //ERROR program_head识别失败 checked
			   		ParseTreeHead=yyval=new Type;
			   		yyval->token = "programstruct";
					yyerror("fatal error in program head, maybe missing keyword \"program\"",(yylsp[-3]).first_line, (yylsp[-3]).first_column, (yylsp[-3]).last_line, (yylsp[-3]).last_column);
			   	}
#line 1543 "yacc.tab.c"
    break;

  case 6: /* programstruct: program_head ';' error '.'  */
#line 96 "yacc.y"
                                                            { //ERROR program_body识别失败 unchecked
			   		ParseTreeHead=yyval=new Type;
			   		yyval->token = "programstruct";
					yyerror("fatal error in program body");
			   	}
#line 1553 "yacc.tab.c"
    break;

  case 7: /* programstruct: error program_head ';' program_body '.'  */
#line 100 "yacc.y"
                                                                         { //ERROR program_head前包含非法字符 checked
					ParseTreeHead=yyval=new Type;
					yyval->token = "programstruct";
					yyerror("invalid symbol before program head", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
				}
#line 1563 "yacc.tab.c"
    break;

  case 8: /* programstruct: error program_head error program_body '.'  */
#line 104 "yacc.y"
                                                                           { //ERROR program_head前包含非法记号、缺失分号 checked
					ParseTreeHead=yyval=new Type;
					yyval->token = "programstruct";
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("missing a semicolon here", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
				}
#line 1574 "yacc.tab.c"
    break;

  case 9: /* programstruct: error program_head ';' program_body error  */
#line 109 "yacc.y"
                                                                           { //ERROR program_head前包含非法记号、缺失点号 checked
					ParseTreeHead=yyval=new Type;
					yyval->token = "programstruct";
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("missing a dot here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
				}
#line 1585 "yacc.tab.c"
    break;

  case 10: /* programstruct: error program_head ';' error '.'  */
#line 114 "yacc.y"
                                                                  { //ERROR program_head前包含非法记号、program_body识别失败 unchecked
					ParseTreeHead=yyval=new Type;
					yyval->token = "programstruct";
					yyerror("invalid token before program head, maybe missing keyword \"program\"", (yyloc).first_line, (yyloc).first_column, (yylsp[-3]).first_line, (yylsp[-3]).first_column-1);
					yyerror("fatal error in program body", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
				}
#line 1596 "yacc.tab.c"
    break;

  case 11: /* program_head: PROGRAM IDENTIFIER '(' idlist ')'  */
#line 121 "yacc.y"
                                                 { //正常
					yyval=new Type;
					yyval->token = "program_head";
					yyval->children.push_back(yyvsp[-4]); yyval->children.push_back(yyvsp[-3]);
					yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1607 "yacc.tab.c"
    break;

  case 12: /* program_head: PROGRAM error '(' idlist ')'  */
#line 126 "yacc.y"
                                                              { //ERROR 缺少主程序名 checked
					yyval=new Type;
					yyval->token = "program_head";
					yyerror("missing program name here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
				}
#line 1617 "yacc.tab.c"
    break;

  case 13: /* program_head: PROGRAM IDENTIFIER error idlist ')'  */
#line 130 "yacc.y"
                                                                     { //ERROR 缺少左括号 checked
					yyval=new Type;
					yyval->token = "program_head";
					yyerror("missing a left bracket here", (yylsp[-1]).first_line, (yylsp[-1]).first_column-1);
				}
#line 1627 "yacc.tab.c"
    break;

  case 14: /* program_head: PROGRAM IDENTIFIER '(' error ')'  */
#line 134 "yacc.y"
                                                                  { //ERROR idlist识别失败 checked
					yyval=new Type;
					yyval->token = "program_head";
					yyerror("program identifier list missing or imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1637 "yacc.tab.c"
    break;

  case 15: /* program_head: PROGRAM IDENTIFIER '(' idlist error  */
#line 138 "yacc.y"
                                                                     { //ERROR 缺少右括号 checked
					yyval=new Type;
					yyval->token = "program_head";
					yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
				}
#line 1647 "yacc.tab.c"
    break;

  case 16: /* program_head: PROGRAM error  */
#line 142 "yacc.y"
                                               { //ERROR program head checked
					yyval=new Type;
					yyval->token = "program_head";
					yyerror("program head imcomplete", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1657 "yacc.tab.c"
    break;

  case 17: /* program_head: PROGRAM IDENTIFIER error  */
#line 146 "yacc.y"
                                                          { //ERROR idlist缺失 checked
					yyval=new Type;
					yyval->token = "program_head";
					yyerror("program identifier list missing or imcomplete", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
				}
#line 1667 "yacc.tab.c"
    break;

  case 18: /* program_head: PROGRAM IDENTIFIER '(' error  */
#line 150 "yacc.y"
                                                              { //ERROR idlist缺失 checked
					yyval=new Type;
					yyval->token = "program_head";
					yyerror("program identifier list missing or imcomplete", (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
				}
#line 1677 "yacc.tab.c"
    break;

  case 19: /* program_body: const_declarations var_declarations subprogram_declarations compound_statement  */
#line 156 "yacc.y"
                                                                                              { //正常
					yyval=new Type;
					yyval->token = "program_body";
					yyval->children.push_back(yyvsp[-3]); yyval->children.push_back(yyvsp[-2]);
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1688 "yacc.tab.c"
    break;

  case 20: /* idlist: idlist ',' IDENTIFIER  */
#line 163 "yacc.y"
                             { //正常 idlist的产生式不打算加入error
			yyval=new Type;
			yyval->token = "idlist";
			yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
		}
#line 1698 "yacc.tab.c"
    break;

  case 21: /* idlist: IDENTIFIER  */
#line 167 "yacc.y"
                            { //正常
			yyval=new Type;
		   	yyval->token = "idlist";
			yyval->children.push_back(yyvsp[0]);
		}
#line 1708 "yacc.tab.c"
    break;

  case 22: /* const_declarations: CONST const_declaration ';'  */
#line 173 "yacc.y"
                                                { //正常
						yyval=new Type;
						yyval->token = "const_declarations";
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1718 "yacc.tab.c"
    break;

  case 23: /* const_declarations: %empty  */
#line 177 "yacc.y"
                                          { //正常
						yyval=new Type;
						yyval->token = "const_declarations";
					}
#line 1727 "yacc.tab.c"
    break;

  case 24: /* const_declarations: CONST error ';'  */
#line 180 "yacc.y"
                                                          { //ERROR 常量定义出现错误 checked
						yyval=new Type;
						yyval->token = "const_declarations";
						yyerror("fatal error in const declarations", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1737 "yacc.tab.c"
    break;

  case 25: /* const_declarations: CONST const_declaration error  */
#line 184 "yacc.y"
                                                                        { //ERROR 缺少分号 checked
						yyval=new Type;
						yyval->token = "const_declarations";
						yyerror("missing a semicolon here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1747 "yacc.tab.c"
    break;

  case 26: /* const_declaration: const_declaration ';' IDENTIFIER '=' const_value  */
#line 190 "yacc.y"
                                                                        { //正常
						yyval=new Type;
						yyval->token = "const_declaration";
						yyval->children.push_back(yyvsp[-4]); yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1758 "yacc.tab.c"
    break;

  case 27: /* const_declaration: const_declaration ';' IDENTIFIER '=' error  */
#line 195 "yacc.y"
                                                                                    { //常数初始化右值缺失 checked
						yyval=new Type;
						yyval->token = "const_declaration";
						yyerror("constant definition missing initial r-value", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1768 "yacc.tab.c"
    break;

  case 28: /* const_declaration: IDENTIFIER '=' const_value  */
#line 199 "yacc.y"
                                                                    { //正常
						yyval=new Type;
						yyval->token = "const_declaration";
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1778 "yacc.tab.c"
    break;

  case 29: /* const_declaration: IDENTIFIER '=' error  */
#line 203 "yacc.y"
                                                              { //常数初始化右值缺失 checked
						yyval=new Type;
						yyval->token = "const_declaration";
						yyerror("constant definition missing initial r-value", (yylsp[0]).first_line, (yylsp[0]).first_column, (yylsp[0]).last_line, (yylsp[0]).last_column);
					}
#line 1788 "yacc.tab.c"
    break;

  case 30: /* const_declaration: const_declaration error IDENTIFIER '=' const_value  */
#line 207 "yacc.y"
                                                                                            { //ERROR 缺少分号 checked
						yyval=new Type;
						yyval->token = "const_declaration";
						yyerror("missing a semicolon here", (yylsp[-4]).first_line, (yylsp[-4]).first_column, (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 1798 "yacc.tab.c"
    break;

  case 31: /* const_declaration: const_declaration ';' IDENTIFIER error const_value  */
#line 211 "yacc.y"
                                                                                            { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new Type;
						yyval->token = "const_declaration";
						yyerror("missing a equal sign here",(yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 1808 "yacc.tab.c"
    break;

  case 32: /* const_declaration: IDENTIFIER error const_value  */
#line 215 "yacc.y"
                                                                      { //ERROR 缺少等号（常量的初始化用的是等号，而不是赋值号） checked
						yyval=new Type;
						yyval->token = "const_declaration";
						yyerror("missing a equal sign here", (yylsp[-1]).first_line, (yylsp[-1]).first_column, (yylsp[-1]).last_line, (yylsp[-1]).last_column);
					}
#line 1818 "yacc.tab.c"
    break;

  case 33: /* const_value: '+' IDENTIFIER  */
#line 221 "yacc.y"
                               { //正常，该非终结符的产生式不打算加入error
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1828 "yacc.tab.c"
    break;

  case 34: /* const_value: '-' IDENTIFIER  */
#line 225 "yacc.y"
                                                 { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1838 "yacc.tab.c"
    break;

  case 35: /* const_value: IDENTIFIER  */
#line 229 "yacc.y"
                                             { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[0]);
				}
#line 1848 "yacc.tab.c"
    break;

  case 36: /* const_value: '+' UINUM  */
#line 233 "yacc.y"
                                            { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1858 "yacc.tab.c"
    break;

  case 37: /* const_value: '-' UINUM  */
#line 237 "yacc.y"
                                            { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1868 "yacc.tab.c"
    break;

  case 38: /* const_value: UINUM  */
#line 241 "yacc.y"
                                        { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[0]);
				}
#line 1878 "yacc.tab.c"
    break;

  case 39: /* const_value: '+' UFNUM  */
#line 245 "yacc.y"
                                            { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1888 "yacc.tab.c"
    break;

  case 40: /* const_value: '-' UFNUM  */
#line 249 "yacc.y"
                                            { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 1898 "yacc.tab.c"
    break;

  case 41: /* const_value: UFNUM  */
#line 253 "yacc.y"
                                        { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[0]);
				}
#line 1908 "yacc.tab.c"
    break;

  case 42: /* const_value: CHAR  */
#line 257 "yacc.y"
                                      { //正常
					yyval=new Type;
					yyval->token = "const_value";
					yyval->children.push_back(yyvsp[0]);
				}
#line 1918 "yacc.tab.c"
    break;

  case 43: /* var_declarations: VAR var_declaration ';'  */
#line 263 "yacc.y"
                                               { //正常
						yyval=new Type;
						yyval->token = "var_declarations";
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1928 "yacc.tab.c"
    break;

  case 44: /* var_declarations: %empty  */
#line 267 "yacc.y"
                                          { //正常
						yyval=new Type;
						yyval->token = "var_declarations";
					}
#line 1937 "yacc.tab.c"
    break;

  case 45: /* var_declarations: VAR error ';'  */
#line 270 "yacc.y"
                                                       { //ERROR 变量定义出现错误 checked
						yyval=new Type;
						yyval->token = "var_declarations";
						yyerror("fatal error in variant declarations", (yylsp[-2]).first_line, (yylsp[-2]).first_column, (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 1947 "yacc.tab.c"
    break;

  case 46: /* var_declarations: VAR var_declaration error  */
#line 274 "yacc.y"
                                                                   { //ERROR 缺少分号 checked
						yyval=new Type;
						yyval->token = "var_declarations";
						yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 1957 "yacc.tab.c"
    break;

  case 47: /* var_declaration: var_declaration ';' idlist ':' type  */
#line 280 "yacc.y"
                                                            { //正常
						yyval=new Type;
						yyval->token = "var_declaration";
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]); yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1968 "yacc.tab.c"
    break;

  case 48: /* var_declaration: idlist ':' type  */
#line 285 "yacc.y"
                                                          { //正常
						yyval=new Type;
						yyval->token ="var_declaration";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
					}
#line 1978 "yacc.tab.c"
    break;

  case 49: /* var_declaration: var_declaration error idlist ':' type  */
#line 289 "yacc.y"
                                                                                { //ERROR 缺少分号 checked
						yyval=new Type;
						yyval->token = "var_declaration";
						yyerror("missing a semicolon here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 1988 "yacc.tab.c"
    break;

  case 50: /* var_declaration: var_declaration ';' idlist error type  */
#line 293 "yacc.y"
                                                                                { //ERROR 缺少冒号 checked
						yyval=new Type;
						yyval->token = "var_declaration";
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 1998 "yacc.tab.c"
    break;

  case 51: /* var_declaration: var_declaration ';' idlist ':' error  */
#line 297 "yacc.y"
                                                                               { //ERROR type识别失败 checked
						yyval=new Type;
						yyval->token = "var_declaration";
						yyerror("missing a type here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2008 "yacc.tab.c"
    break;

  case 52: /* var_declaration: idlist ':' error  */
#line 301 "yacc.y"
                                                           { //ERROR type识别失败 checked
						yyval=new Type;
						yyval->token ="var_declaration";
						yyerror("missing a type here", (yylsp[0]).last_line, (yylsp[0]).last_column+1);
					}
#line 2018 "yacc.tab.c"
    break;

  case 53: /* var_declaration: idlist error type  */
#line 305 "yacc.y"
                                                            { //ERROR 缺少分号 checked
						yyval=new Type;
						yyval->token ="var_declaration";
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2028 "yacc.tab.c"
    break;

  case 54: /* type: TYPE  */
#line 311 "yacc.y"
            { //正常
			yyval=new Type;
			yyval->token = "type";
			yyval->children.push_back(yyvsp[0]);
		}
#line 2038 "yacc.tab.c"
    break;

  case 55: /* type: ARRAY '[' period ']' OF TYPE  */
#line 315 "yacc.y"
                                              { //正常
			yyval=new Type;
			yyval->token = "type";
			yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
			yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2050 "yacc.tab.c"
    break;

  case 56: /* type: ARRAY error period ']' OF TYPE  */
#line 321 "yacc.y"
                                                { //ERROR 缺少左中括号 checked
			yyval=new Type;
			yyval->token = "type";
			yyerror("missing a left square bracket here", (yylsp[-5]).last_line, (yylsp[-5]).last_column+1);
		}
#line 2060 "yacc.tab.c"
    break;

  case 57: /* type: ARRAY '[' period ']' error TYPE  */
#line 325 "yacc.y"
                                                 { //ERROR 缺少OF关键字 checked
			yyval=new Type;
			yyval->token = "type";
			yyerror("missing keyword \"OF\" here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1, (yylsp[0]).first_line, (yylsp[0]).first_column-1);
		}
#line 2070 "yacc.tab.c"
    break;

  case 58: /* type: ARRAY '[' period ']' OF error  */
#line 329 "yacc.y"
                                               { //ERROR 数组元素类型识别失败 checked
			yyval=new Type;
			yyval->token = "type";
			yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 2080 "yacc.tab.c"
    break;

  case 59: /* type: ARRAY error  */
#line 333 "yacc.y"
                             { //ERROR 不完整的数组类型 checked
			yyval=new Type;
			yyval->token = "type";
			yyerror("incomplete array type", &(yyloc));
		}
#line 2090 "yacc.tab.c"
    break;

  case 60: /* type: ARRAY '[' error  */
#line 337 "yacc.y"
                                 { //ERROR 不完整的数组类型 checked
			yyval=new Type;
			yyval->token = "type";
			yyerror("incomplete array type", &(yyloc));
		}
#line 2100 "yacc.tab.c"
    break;

  case 61: /* type: ARRAY '[' period error  */
#line 341 "yacc.y"
                                        { //ERROR 不完整的数组类型 checked
			yyval=new Type;
			yyval->token = "type";
			yyerror("incomplete array type", &(yyloc));
		}
#line 2110 "yacc.tab.c"
    break;

  case 62: /* period: period ',' UINUM RANGEDOT UINUM  */
#line 347 "yacc.y"
                                       { //正常
			yyval=new Type;
			yyval->token="period";
			yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2121 "yacc.tab.c"
    break;

  case 63: /* period: period error UINUM RANGEDOT UINUM  */
#line 352 "yacc.y"
                                                   { //ERROR 缺少逗号 checked
			yyval=new Type;
			yyval->token="period";
			yyerror("missing a comma here", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
		}
#line 2131 "yacc.tab.c"
    break;

  case 64: /* period: period ',' UINUM error UINUM  */
#line 356 "yacc.y"
                                              { //ERROR 缺少双点号 checked
			yyval=new Type;
			yyval->token="period";
			yyerror("missing range dot .. here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2141 "yacc.tab.c"
    break;

  case 65: /* period: UINUM RANGEDOT UINUM  */
#line 360 "yacc.y"
                                      { //正常
			yyval=new Type;
			yyval->token="period";
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2151 "yacc.tab.c"
    break;

  case 66: /* subprogram_declarations: subprogram_declarations subprogram ';'  */
#line 366 "yacc.y"
                                                                      { //正常
								yyval=new Type;
								yyval->token="subprogram_declarations";
								yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
							}
#line 2161 "yacc.tab.c"
    break;

  case 67: /* subprogram_declarations: subprogram_declarations subprogram error  */
#line 370 "yacc.y"
                                                                                                  { //ERROR 缺少分号 checked
								yyval=new Type;
								yyval->token="subprogram_declarations";
								yyerror("missing a semicolon here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
							}
#line 2171 "yacc.tab.c"
    break;

  case 68: /* subprogram_declarations: %empty  */
#line 374 "yacc.y"
                                                          { //正常
								yyval=new Type;
								yyval->token ="subprogram_declarations";
							}
#line 2180 "yacc.tab.c"
    break;

  case 69: /* subprogram: subprogram_head ';' subprogram_body  */
#line 379 "yacc.y"
                                               { //正常
				yyval=new Type;
				yyval->token="subprogram";
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2190 "yacc.tab.c"
    break;

  case 70: /* subprogram: subprogram_head error subprogram_body  */
#line 383 "yacc.y"
                                                               { //ERROR 缺少分号 checked
				yyval=new Type;
				yyval->token="subprogram";
				yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			}
#line 2200 "yacc.tab.c"
    break;

  case 71: /* subprogram_head: PROCEDURE IDENTIFIER formal_parameter  */
#line 389 "yacc.y"
                                                             { //正常
						yyval=new Type;
						yyval->token="subprogram_head";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2210 "yacc.tab.c"
    break;

  case 72: /* subprogram_head: FUNCTION IDENTIFIER formal_parameter ':' TYPE  */
#line 393 "yacc.y"
                                                                                       { //正常
						yyval=new Type;
						yyval->token="subprogram_head";
						yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2221 "yacc.tab.c"
    break;

  case 73: /* subprogram_head: FUNCTION error formal_parameter ':' TYPE  */
#line 398 "yacc.y"
                                                                                  { //ERROR 函数名缺失 checked
						yyval=new Type;
						yyval->token="subprogram_head";
						yyerror("missing function name", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
					}
#line 2231 "yacc.tab.c"
    break;

  case 74: /* subprogram_head: FUNCTION IDENTIFIER formal_parameter error TYPE  */
#line 402 "yacc.y"
                                                                                         { //ERROR 缺少冒号 checked
						yyval=new Type;
						yyval->token="subprogram_head";
						yyerror("missing a colon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column);
					}
#line 2241 "yacc.tab.c"
    break;

  case 75: /* subprogram_head: FUNCTION IDENTIFIER formal_parameter ':' error  */
#line 406 "yacc.y"
                                                                                        { //ERROR 缺少基本类型关键字 checked
						yyval=new Type;
						yyval->token="subprogram_head";
						yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2251 "yacc.tab.c"
    break;

  case 76: /* subprogram_head: FUNCTION IDENTIFIER formal_parameter error  */
#line 410 "yacc.y"
                                                                                    { //ERROR 缺少基本类型关键字 checked
						yyval=new Type;
						yyval->token="subprogram_head";
						yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2261 "yacc.tab.c"
    break;

  case 77: /* subprogram_head: FUNCTION error  */
#line 414 "yacc.y"
                                                        { //ERROR 不完整的函数头 checked
						yyval=new Type;
						yyval->token="subprogram_head";
						yyerror("incomplete function head", &(yyloc));
					}
#line 2271 "yacc.tab.c"
    break;

  case 78: /* subprogram_head: PROCEDURE error  */
#line 418 "yacc.y"
                                                         { //ERROR 不完整的过程头 checked
						yyval=new Type;
						yyval->token="subprogram_head";
						yyerror("incomplete procedure head", &(yyloc));
					}
#line 2281 "yacc.tab.c"
    break;

  case 79: /* formal_parameter: '(' parameter_list ')'  */
#line 424 "yacc.y"
                                              { //正常
						yyval=new Type;
						yyval->token="formal_parameter";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2291 "yacc.tab.c"
    break;

  case 80: /* formal_parameter: %empty  */
#line 428 "yacc.y"
                                          { //正常
						yyval=new Type;
						yyval->token="formal_parameter";
					}
#line 2300 "yacc.tab.c"
    break;

  case 81: /* formal_parameter: '(' error  */
#line 431 "yacc.y"
                                                   { //ERROR 不完整的形参列表
						yyval=new Type;
						yyval->token="formal_parameter";
						yyerror("incomplete formal parameter list", &(yyloc));
					}
#line 2310 "yacc.tab.c"
    break;

  case 82: /* formal_parameter: '(' parameter_list error  */
#line 435 "yacc.y"
                                                                  { //ERROR 右括号缺失
						yyval=new Type;
						yyval->token="formal_parameter";
						yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2320 "yacc.tab.c"
    break;

  case 83: /* parameter_list: parameter_list ';' parameter  */
#line 441 "yacc.y"
                                            { //正常
					yyval=new Type;
					yyval->token="parameter_list";
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				}
#line 2330 "yacc.tab.c"
    break;

  case 84: /* parameter_list: parameter_list error parameter  */
#line 445 "yacc.y"
                                                                { //ERROR 缺少分号 checked
					yyval=new Type;
					yyval->token="parameter_list";
					yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 2340 "yacc.tab.c"
    break;

  case 85: /* parameter_list: parameter  */
#line 449 "yacc.y"
                                           { //正常
					yyval=new Type;
					yyval->token="parameter_list";
					yyval->children.push_back(yyvsp[0]);
				}
#line 2350 "yacc.tab.c"
    break;

  case 86: /* parameter: var_parameter  */
#line 455 "yacc.y"
                              { //正常，非终结符parameter的产生式不打算加入error
				yyval=new Type;
				yyval->token="parameter";
				yyval->children.push_back(yyvsp[0]);
			}
#line 2360 "yacc.tab.c"
    break;

  case 87: /* parameter: value_parameter  */
#line 459 "yacc.y"
                                         { //正常
				yyval=new Type;
				yyval->token="parameter";
				yyval->children.push_back(yyvsp[0]);
			}
#line 2370 "yacc.tab.c"
    break;

  case 88: /* var_parameter: VAR value_parameter  */
#line 465 "yacc.y"
                                   { //正常
					yyval=new Type;
					yyval->token="var_parameter";
					yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
				}
#line 2380 "yacc.tab.c"
    break;

  case 89: /* var_parameter: VAR error  */
#line 469 "yacc.y"
                                           { //ERROR 不完整的引用参数列表 checked
					yyval=new Type;
					yyval->token="var_parameter";
					yyerror("incomplete refereced parameter list", &(yyloc));
				}
#line 2390 "yacc.tab.c"
    break;

  case 90: /* value_parameter: idlist ':' TYPE  */
#line 475 "yacc.y"
                                       { //正常
						yyval=new Type;
						yyval->token="value_parameter";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2400 "yacc.tab.c"
    break;

  case 91: /* value_parameter: idlist error TYPE  */
#line 479 "yacc.y"
                                                           { //ERROR 缺少分号 checked
						yyval=new Type;
						yyval->token="value_parameter";
						yyerror("missing a colon here", (yylsp[-2]).first_line, (yylsp[-2]).last_column+1);
					}
#line 2410 "yacc.tab.c"
    break;

  case 92: /* value_parameter: idlist ':' error  */
#line 483 "yacc.y"
                                                          { //ERROR 缺少基本类型关键字 checked
						yyval=new Type;
						yyval->token="value_parameter";
						yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2420 "yacc.tab.c"
    break;

  case 93: /* value_parameter: idlist error  */
#line 487 "yacc.y"
                                                      { //ERROR 缺少基本类型关键字 checked
						yyval=new Type;
						yyval->token="value_parameter";
						yyerror("missing a base type keyword here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2430 "yacc.tab.c"
    break;

  case 94: /* subprogram_body: const_declarations var_declarations compound_statement  */
#line 493 "yacc.y"
                                                                              { //正常
						yyval=new Type;
						yyval->token="subprogram_body";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2440 "yacc.tab.c"
    break;

  case 95: /* compound_statement: _BEGIN statement_list END  */
#line 499 "yacc.y"
                                             { //正常
						yyval=new Type;
						yyval->token="compound_statement";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2450 "yacc.tab.c"
    break;

  case 96: /* compound_statement: _BEGIN statement_list error  */
#line 503 "yacc.y"
                                                                     { //ERROR 缺少END关键字 checked
						yyval=new Type;
						yyval->token="compound_statement";
						yyerror("missing keyword \"end\"", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
					}
#line 2460 "yacc.tab.c"
    break;

  case 97: /* statement_list: statement_list ';' statement  */
#line 509 "yacc.y"
                                            { //正常
					yyval=new Type;
					yyval->token="statement_list";
					yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]); yyval->children.push_back(yyvsp[0]);
				}
#line 2470 "yacc.tab.c"
    break;

  case 98: /* statement_list: statement_list error statement  */
#line 513 "yacc.y"
                                                                { //ERROR 缺失分号 这里引发了3个规约规约冲突 checked
					yyval=new Type;
					yyval->token="statement_list";
					yyerror("missing a semicolon here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
				}
#line 2480 "yacc.tab.c"
    break;

  case 99: /* statement_list: statement  */
#line 517 "yacc.y"
                                           { //正常
					yyval=new Type;
					yyval->token="statement_list";
					yyval->children.push_back(yyvsp[0]);
				}
#line 2490 "yacc.tab.c"
    break;

  case 100: /* statement: variable ASSIGNOP expression  */
#line 523 "yacc.y"
                                            { //正常
				yyval=new Type;
				yyval->token="statement";
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2500 "yacc.tab.c"
    break;

  case 101: /* statement: procedure_call  */
#line 527 "yacc.y"
                                        { //正常
				yyval=new Type;
				yyval->token="statement";
				yyval->children.push_back(yyvsp[0]);
			}
#line 2510 "yacc.tab.c"
    break;

  case 102: /* statement: compound_statement  */
#line 531 "yacc.y"
                                            { //正常
				yyval=new Type;
				yyval->token="statement";
				yyval->children.push_back(yyvsp[0]);
			}
#line 2520 "yacc.tab.c"
    break;

  case 103: /* statement: IF expression THEN statement else_part  */
#line 535 "yacc.y"
                                                                { //正常
				yyval=new Type;
				yyval->token="statement";
				yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2531 "yacc.tab.c"
    break;

  case 104: /* statement: IF expression error statement else_part  */
#line 540 "yacc.y"
                                                                 { //ERROR 缺少then关键字 checked
				yyval=new Type;
				yyval->token="statement";
				yyerror("missing keyword \"then\"", (yylsp[-3]).last_line, (yylsp[-3]).last_column+1);
			}
#line 2541 "yacc.tab.c"
    break;

  case 105: /* statement: FOR IDENTIFIER ASSIGNOP expression TO expression DO statement  */
#line 544 "yacc.y"
                                                                                       { //正常
				yyval=new Type;
				yyval->token="statement";
				yyval->children.push_back(yyvsp[-7]);yyval->children.push_back(yyvsp[-6]);
				yyval->children.push_back(yyvsp[-5]);yyval->children.push_back(yyvsp[-4]);
				yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2554 "yacc.tab.c"
    break;

  case 106: /* statement: FOR IDENTIFIER error expression TO expression DO statement  */
#line 551 "yacc.y"
                                                                                    { //ERROR 缺少赋值号 checked
				yyval=new Type;
				yyval->token="statement";
				yyerror("missing assignop \":=\"", (yylsp[-6]).last_line, (yylsp[-6]).last_column+1);
			}
#line 2564 "yacc.tab.c"
    break;

  case 107: /* statement: FOR IDENTIFIER ASSIGNOP expression error expression DO statement  */
#line 555 "yacc.y"
                                                                                          { //ERROR 缺少关键字to checked
				yyval=new Type;
				yyval->token="statement";
				yyerror("missing keywrod \"to\"", (yylsp[-4]).last_line, (yylsp[-4]).last_column+1);
			}
#line 2574 "yacc.tab.c"
    break;

  case 108: /* statement: FOR IDENTIFIER ASSIGNOP expression TO expression error statement  */
#line 559 "yacc.y"
                                                                                          { //ERROR 缺少关键字do checked
				yyval=new Type;
				yyval->token="statement";
				yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-4]).last_column+1);
			}
#line 2584 "yacc.tab.c"
    break;

  case 109: /* statement: WHILE expression DO statement  */
#line 563 "yacc.y"
                                                       { //正常
				yyval=new Type;
				yyval->token="statement";
				yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2595 "yacc.tab.c"
    break;

  case 110: /* statement: WHILE expression error statement  */
#line 568 "yacc.y"
                                                          { //ERROR 缺少关键字do checked
				yyval=new Type;
				yyval->token="statement";
				yyerror("missing keywrod \"do\"", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
			}
#line 2605 "yacc.tab.c"
    break;

  case 111: /* statement: REPEAT statement_list UNTIL expression ';'  */
#line 572 "yacc.y"
                                                                    { //正常
				yyval=new Type;
				yyval->token="statement";
				yyval->children.push_back(yyvsp[-4]);yyval->children.push_back(yyvsp[-3]);
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);
				yyval->children.push_back(yyvsp[0]);
			}
#line 2617 "yacc.tab.c"
    break;

  case 112: /* statement: REPEAT statement_list error expression  */
#line 578 "yacc.y"
                                                                { //ERROR 缺少关键字until checked
				yyval=new Type;
				yyval->token="statement";
				yyerror("missing keywrod \"until\"", (yylsp[0]).first_line, (yylsp[0]).first_column);
			}
#line 2627 "yacc.tab.c"
    break;

  case 113: /* statement: %empty  */
#line 582 "yacc.y"
                          { //正常
				yyval=new Type;
				yyval->token="statement";
			}
#line 2636 "yacc.tab.c"
    break;

  case 114: /* else_part: ELSE statement  */
#line 587 "yacc.y"
                              { //正常 非终结符else_part的产生式不打算加error
				yyval=new Type;
				yyval->token="else_part";
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2646 "yacc.tab.c"
    break;

  case 115: /* else_part: %empty  */
#line 591 "yacc.y"
                                               { //正常
				yyval=new Type;
				yyval->token="else_part";
			}
#line 2655 "yacc.tab.c"
    break;

  case 116: /* variable: IDENTIFIER id_varpart  */
#line 596 "yacc.y"
                                     { //正常
				yyval=new Type;
				yyval->token="variable";
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2665 "yacc.tab.c"
    break;

  case 117: /* id_varpart: '[' expression_list ']'  */
#line 602 "yacc.y"
                                   { //正常
				yyval=new Type;
				yyval->token="id_varpart";
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2675 "yacc.tab.c"
    break;

  case 118: /* id_varpart: '[' error  */
#line 606 "yacc.y"
                                   { //ERROR 不完整的数组下标列表 checked
				yyval=new Type;
				yyval->token="id_varpart";
				yyerror("incomplete expression list of array subindex", &(yyloc));
			}
#line 2685 "yacc.tab.c"
    break;

  case 119: /* id_varpart: '[' expression_list error  */
#line 610 "yacc.y"
                                                   { //ERROR 缺失右中括号 checked
				yyval=new Type;
				yyval->token="id_varpart";
				yyerror("missing a right square bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			}
#line 2695 "yacc.tab.c"
    break;

  case 120: /* id_varpart: %empty  */
#line 614 "yacc.y"
                          { //正常
				yyval=new Type;
				yyval->token="id_varpart";
			}
#line 2704 "yacc.tab.c"
    break;

  case 121: /* procedure_call: IDENTIFIER  */
#line 619 "yacc.y"
                          { //正常
				yyval=new Type;
				yyval->token="procedure_call";
				yyval->children.push_back(yyvsp[0]);
			}
#line 2714 "yacc.tab.c"
    break;

  case 122: /* procedure_call: IDENTIFIER '(' expression_list ')'  */
#line 623 "yacc.y"
                                                            { //正常
				yyval=new Type;
				yyval->token="procedure_call";
				yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
				yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2725 "yacc.tab.c"
    break;

  case 123: /* procedure_call: IDENTIFIER '(' expression_list error  */
#line 628 "yacc.y"
                                                              { //ERROR 缺少右括号 checked
				yyval=new Type;
				yyval->token="procedure_call";
				yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
			}
#line 2735 "yacc.tab.c"
    break;

  case 124: /* expression_list: expression_list ',' expression  */
#line 634 "yacc.y"
                                                      { //正常
						yyval=new Type;
						yyval->token="expression_list";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2745 "yacc.tab.c"
    break;

  case 125: /* expression_list: expression  */
#line 638 "yacc.y"
                                                    { //正常
						yyval=new Type;
						yyval->token="expression_list";
						yyval->children.push_back(yyvsp[0]);
					}
#line 2755 "yacc.tab.c"
    break;

  case 126: /* expression_list: expression_list error expression  */
#line 642 "yacc.y"
                                                                          { //ERROR 缺少逗号 这里引发了一个移进规约冲突 checked
						yyval=new Type;
						yyval->token="expression_list";
						yyerror("missing a comma here", (yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2765 "yacc.tab.c"
    break;

  case 127: /* expression: simple_expression RELOP simple_expression  */
#line 648 "yacc.y"
                                                     { //正常
				yyval=new Type;
				yyval->token="expression";
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2775 "yacc.tab.c"
    break;

  case 128: /* expression: simple_expression '=' simple_expression  */
#line 652 "yacc.y"
                                                                 { //正常
				yyval=new Type;
				yyval->token="expression";
				yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
			}
#line 2785 "yacc.tab.c"
    break;

  case 129: /* expression: simple_expression  */
#line 656 "yacc.y"
                                           { //正常
				yyval=new Type;
				yyval->token="expression";
				yyval->children.push_back(yyvsp[0]);
			}
#line 2795 "yacc.tab.c"
    break;

  case 130: /* simple_expression: simple_expression ADDOP term  */
#line 662 "yacc.y"
                                                    { //正常
						yyval=new Type;
						yyval->token="simple_expression";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2805 "yacc.tab.c"
    break;

  case 131: /* simple_expression: simple_expression ADDOP error term  */
#line 666 "yacc.y"
                                                                                      {//error，缺少操作数
						yyval=new Type;
						yyval->token="simple_expression";
						yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2815 "yacc.tab.c"
    break;

  case 132: /* simple_expression: simple_expression '-' term  */
#line 670 "yacc.y"
                                                                    { //正常
						yyval=new Type;
						yyval->token="simple_expression";
						yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
					}
#line 2825 "yacc.tab.c"
    break;

  case 133: /* simple_expression: simple_expression '-' error term  */
#line 674 "yacc.y"
                                                                                    {//error，缺少操作数
						yyval=new Type;
						yyval->token="simple_expression";
						yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
					}
#line 2835 "yacc.tab.c"
    break;

  case 134: /* simple_expression: term  */
#line 678 "yacc.y"
                                              { //正常
						yyval=new Type;
						yyval->token="simple_expression";
						yyval->children.push_back(yyvsp[0]);
					}
#line 2845 "yacc.tab.c"
    break;

  case 135: /* term: term MULOP factor  */
#line 684 "yacc.y"
                         { //正常
			yyval=new Type;
			yyval->token="term";
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2855 "yacc.tab.c"
    break;

  case 136: /* term: term MULOP error factor  */
#line 688 "yacc.y"
                                                   { //error,缺少操作数
			yyval=new Type;
			yyval->token="term";
			yyerror("missing operand",(yylsp[-2]).last_line, (yylsp[-2]).last_column+1);
		}
#line 2865 "yacc.tab.c"
    break;

  case 137: /* term: factor  */
#line 692 "yacc.y"
                        { //正常
			yyval=new Type;
			yyval->token="term";
			yyval->children.push_back(yyvsp[0]);
		}
#line 2875 "yacc.tab.c"
    break;

  case 138: /* factor: UINUM  */
#line 698 "yacc.y"
             { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[0]);
		}
#line 2885 "yacc.tab.c"
    break;

  case 139: /* factor: UFNUM  */
#line 702 "yacc.y"
                       { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[0]);
		}
#line 2895 "yacc.tab.c"
    break;

  case 140: /* factor: variable  */
#line 706 "yacc.y"
                          { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[0]);
		}
#line 2905 "yacc.tab.c"
    break;

  case 141: /* factor: IDENTIFIER '(' expression_list ')'  */
#line 710 "yacc.y"
                                                    { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[-3]);yyval->children.push_back(yyvsp[-2]);
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2916 "yacc.tab.c"
    break;

  case 142: /* factor: IDENTIFIER '(' expression_list error  */
#line 715 "yacc.y"
                                                      { //ERROR 缺少右括号 这里引发了一个移进规约冲突
			yyval=new Type;
			yyval->token="factor";
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 2926 "yacc.tab.c"
    break;

  case 143: /* factor: IDENTIFIER '(' error  */
#line 719 "yacc.y"
                                      { //ERROR 函数调用的表达式列表缺失
			yyval=new Type;
			yyval->token="factor";
			yyerror("missing actual parameter list of function call", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 2936 "yacc.tab.c"
    break;

  case 144: /* factor: '(' expression ')'  */
#line 723 "yacc.y"
                                    { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[-2]);yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2946 "yacc.tab.c"
    break;

  case 145: /* factor: '(' expression error  */
#line 727 "yacc.y"
                                      { //ERROR 缺少右括号
			yyval=new Type;
			yyval->token="factor";
			yyerror("missing a right bracket here", (yylsp[-1]).last_line, (yylsp[-1]).last_column+1);
		}
#line 2956 "yacc.tab.c"
    break;

  case 146: /* factor: NOT factor  */
#line 731 "yacc.y"
                            { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2966 "yacc.tab.c"
    break;

  case 147: /* factor: '-' factor  */
#line 735 "yacc.y"
                            { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[-1]);yyval->children.push_back(yyvsp[0]);
		}
#line 2976 "yacc.tab.c"
    break;

  case 148: /* factor: CHAR  */
#line 739 "yacc.y"
                      { //正常
			yyval=new Type;
			yyval->token="factor";
			yyval->children.push_back(yyvsp[0]);
		}
#line 2986 "yacc.tab.c"
    break;


#line 2990 "yacc.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 745 "yacc.y"



void yyerror(const char *s){
	haveSemanticError = true;//错误标志，含有语法错误
	string errorInformation;//定义错误信息
	errorInformation += string(s);//添加错误信息
	errorInformation += ", location: " + to_string(yylineno-1) + "." + to_string(yycolumn-yyleng);//添加错误位置
	syntaxErrorInformation.push_back(errorInformation);//存放错误信息
}

void yyerror(const char *s, YYLTYPE *loc){//处理单个字符的错误
	haveSemanticError = true;
	string errorInformation;
	errorInformation = "syntax error, " + string(s) + ", location: " + to_string(loc->first_line) + "." + to_string(loc->first_column) + "-" + to_string(loc->last_line) + "." + to_string(loc->last_column);
	syntaxErrorInformation.push_back(errorInformation);
}

void yyerror(const char *s, int line, int col){//处理一行以内的错误
	haveSemanticError = true;
	string errorInformation;
	errorInformation = "syntax error, " + string(s) + ", location: " + to_string(line) + "." + to_string(col);
	syntaxErrorInformation.push_back(errorInformation);
}

void yyerror(const char *s, int startLine, int startCol, int endLine, int endCol){//处理涉及多行的错误
	haveSemanticError = true;
	string errorInformation;
	errorInformation = "syntax error, " + string(s) + ", location: " + to_string(startLine) + "." + to_string(startCol) + "-" + to_string(endLine) + "." + to_string(endCol);
	syntaxErrorInformation.push_back(errorInformation);
}
