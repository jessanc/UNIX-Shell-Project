/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     SETENV = 258,
     PRINTENV = 259,
     UNSETENV = 260,
     CD = 261,
     LS = 262,
     EOLN = 263,
     ALIAS = 264,
     UNALIAS = 265,
     BYE = 266,
     FLAG = 267,
     NUMBER = 268,
     WORD = 269,
     SEMICOLON = 270,
     OPEN_PAREN = 271,
     CLOSE_PAREN = 272,
     OPEN_CARAT = 273,
     CLOSE_CARAT = 274,
     PIPE = 275,
     QUOTE = 276,
     BACKSLASH = 277,
     AMPERSAND = 278,
     LESSTHAN = 279,
     GREATERTHAN = 280,
     DOUBLEQUOTE = 281,
     HOME_AND_PATH = 282,
     HOME = 283,
     ROOT = 284,
     DOT_DOT = 285
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
#define FLAG 267
#define NUMBER 268
#define WORD 269
#define SEMICOLON 270
#define OPEN_PAREN 271
#define CLOSE_PAREN 272
#define OPEN_CARAT 273
#define CLOSE_CARAT 274
#define PIPE 275
#define QUOTE 276
#define BACKSLASH 277
#define AMPERSAND 278
#define LESSTHAN 279
#define GREATERTHAN 280
#define DOUBLEQUOTE 281
#define HOME_AND_PATH 282
#define HOME 283
#define ROOT 284
#define DOT_DOT 285



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 27 "unix.y"

        int number;
        char* string;


/* Line 2058 of yacc.c  */
#line 123 "y.tab.h"
} YYSTYPE;
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
