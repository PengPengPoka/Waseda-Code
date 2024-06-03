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

#ifndef YY_YY_TL_GRAM_H_INCLUDED
# define YY_YY_TL_GRAM_H_INCLUDED
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
    TOKEN_CONST_INT = 258,         /* TOKEN_CONST_INT  */
    TOKEN_ID = 259,                /* TOKEN_ID  */
    TOKEN_LEX_ERROR = 260,         /* TOKEN_LEX_ERROR  */
    TOKEN_EQ = 261,                /* TOKEN_EQ  */
    TOKEN_PLUS = 262,              /* TOKEN_PLUS  */
    TOKEN_MINUS = 263,             /* TOKEN_MINUS  */
    TOKEN_ASTERISK = 264,          /* TOKEN_ASTERISK  */
    TOKEN_SLASH = 265,             /* TOKEN_SLASH  */
    TOKEN_LT = 266,                /* TOKEN_LT  */
    TOKEN_LTE = 267,               /* TOKEN_LTE  */
    TOKEN_GTE = 268,               /* TOKEN_GTE  */
    TOKEN_GT = 269,                /* TOKEN_GT  */
    TOKEN_EQEQ = 270,              /* TOKEN_EQEQ  */
    TOKEN_NE = 271,                /* TOKEN_NE  */
    TOKEN_COMMA = 272,             /* TOKEN_COMMA  */
    TOKEN_LPAREN = 273,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 274,            /* TOKEN_RPAREN  */
    TOKEN_LBRACE = 275,            /* TOKEN_LBRACE  */
    TOKEN_RBRACE = 276,            /* TOKEN_RBRACE  */
    TOKEN_SEMICOLON = 277,         /* TOKEN_SEMICOLON  */
    TOKEN_ELSE = 278,              /* TOKEN_ELSE  */
    TOKEN_FOR = 279,               /* TOKEN_FOR  */
    TOKEN_IF = 280,                /* TOKEN_IF  */
    TOKEN_INT = 281,               /* TOKEN_INT  */
    TOKEN_RETURN = 282,            /* TOKEN_RETURN  */
    TOKEN_WHILE = 283,             /* TOKEN_WHILE  */
    TOKEN_DO = 284                 /* TOKEN_DO  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "tl_gram.y"

    char      *y_str;
    int        y_int;
    AST_Node  *y_AST_Node;
    AST_List  *y_AST_List;

#line 100 "tl_gram.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_TL_GRAM_H_INCLUDED  */
