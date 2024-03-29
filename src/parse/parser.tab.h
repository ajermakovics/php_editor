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




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



