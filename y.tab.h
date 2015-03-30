/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    SETENV = 258,
    PRINTENV = 259,
    UNSETENV = 260,
    CD = 261,
    LS = 262,
    EOLN = 263,
    ALIAS = 264,
    UNALIAS = 265,
    BYE = 266,
    NUMBER = 267,
    WORD = 268,
    SEMICOLON = 269,
    OPEN_PAREN = 270,
    CLOSE_PAREN = 271,
    OPEN_CARAT = 272,
    CLOSE_CARAT = 273,
    PIPE = 274,
    QUOTE = 275,
    BACKSLASH = 276,
    AMPERSAND = 277,
    LESSTHAN = 278,
    GREATERTHAN = 279,
    DOUBLEQUOTE = 280
  };
#endif
/* Tokens.  */
#define SETENV 258
#define PRINTENV 259
#define UNSETENV 260
#define CD 261
#define LS 262
#define EOLN 263
#define ALIAS 264
#define UNALIAS 265
#define BYE 266
#define NUMBER 267
#define WORD 268
#define SEMICOLON 269
#define OPEN_PAREN 270
#define CLOSE_PAREN 271
#define OPEN_CARAT 272
#define CLOSE_CARAT 273
#define PIPE 274
#define QUOTE 275
#define BACKSLASH 276
#define AMPERSAND 277
#define LESSTHAN 278
#define GREATERTHAN 279
#define DOUBLEQUOTE 280

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 25 "unix.y" /* yacc.c:1909  */

        int number;
        char* string;

#line 109 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
