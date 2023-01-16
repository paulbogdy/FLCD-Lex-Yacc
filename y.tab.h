/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
