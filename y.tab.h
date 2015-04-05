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
     WORD = 268,
     NUMBER = 269,
     FILENAME = 270,
     SEMICOLON = 271,
     OPEN_PAREN = 272,
     CLOSE_PAREN = 273,
     OPEN_CARAT = 274,
     CLOSE_CARAT = 275,
     PIPE = 276,
     QUOTE = 277,
     BACKSLASH = 278,
     AMPERSAND = 279,
     LESSTHAN = 280,
     GREATERTHAN = 281,
     DOUBLEQUOTE = 282,
     HOME_AND_PATH = 283,
     HOME = 284,
     ROOT = 285,
     DOT_DOT = 286,
     WORD_THAT_START_WITH_TILDA = 287
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
#define WORD 268
#define NUMBER 269
#define FILENAME 270
#define SEMICOLON 271
#define OPEN_PAREN 272
#define CLOSE_PAREN 273
#define OPEN_CARAT 274
#define CLOSE_CARAT 275
#define PIPE 276
#define QUOTE 277
#define BACKSLASH 278
#define AMPERSAND 279
#define LESSTHAN 280
#define GREATERTHAN 281
#define DOUBLEQUOTE 282
#define HOME_AND_PATH 283
#define HOME 284
#define ROOT 285
#define DOT_DOT 286
#define WORD_THAT_START_WITH_TILDA 287



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 2058 of yacc.c  */
#line 28 "unix.y"

        int number;
        char* string;


/* Line 2058 of yacc.c  */
#line 127 "y.tab.h"
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
