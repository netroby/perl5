/* -*- buffer-read-only: t -*-
   !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
   This file is built by regen_perly.pl from perly.y.
   Any changes made here will be lost!
 */

#define PERL_BISON_VERSION  30000

#ifdef PERL_CORE
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
    GRAMPROG = 258,
    GRAMEXPR = 259,
    GRAMBLOCK = 260,
    GRAMBARESTMT = 261,
    GRAMFULLSTMT = 262,
    GRAMSTMTSEQ = 263,
    BAREWORD = 264,
    METHOD = 265,
    FUNCMETH = 266,
    THING = 267,
    PMFUNC = 268,
    PRIVATEREF = 269,
    QWLIST = 270,
    FUNC0OP = 271,
    FUNC0SUB = 272,
    UNIOPSUB = 273,
    LSTOPSUB = 274,
    PLUGEXPR = 275,
    PLUGSTMT = 276,
    LABEL = 277,
    FORMAT = 278,
    SUB = 279,
    ANONSUB = 280,
    PACKAGE = 281,
    USE = 282,
    WHILE = 283,
    UNTIL = 284,
    IF = 285,
    UNLESS = 286,
    ELSE = 287,
    ELSIF = 288,
    CONTINUE = 289,
    FOR = 290,
    GIVEN = 291,
    WHEN = 292,
    LOOPEX = 293,
    DOTDOT = 294,
    YADAYADA = 295,
    FUNC0 = 296,
    FUNC1 = 297,
    FUNC = 298,
    UNIOP = 299,
    LSTOP = 300,
    RELOP = 301,
    EQOP = 302,
    MULOP = 303,
    ADDOP = 304,
    DOLSHARP = 305,
    DO = 306,
    HASHBRACK = 307,
    NOAMP = 308,
    LOCAL = 309,
    MY = 310,
    REQUIRE = 311,
    COLONATTR = 312,
    FORMLBRACK = 313,
    FORMRBRACK = 314,
    PREC_LOW = 315,
    OROP = 316,
    DOROP = 317,
    ANDOP = 318,
    NOTOP = 319,
    ASSIGNOP = 320,
    OROR = 321,
    DORDOR = 322,
    ANDAND = 323,
    BITOROP = 324,
    BITANDOP = 325,
    SHIFTOP = 326,
    MATCHOP = 327,
    UMINUS = 328,
    REFGEN = 329,
    POWOP = 330,
    PREINC = 331,
    PREDEC = 332,
    POSTINC = 333,
    POSTDEC = 334,
    POSTJOIN = 335,
    ARROW = 336
  };
#endif

/* Value type.  */
#ifdef PERL_IN_TOKE_C
static bool
S_is_opval_token(int type) {
    switch (type) {
    case BAREWORD:
    case FUNC0OP:
    case FUNC0SUB:
    case FUNCMETH:
    case LSTOPSUB:
    case METHOD:
    case PLUGEXPR:
    case PLUGSTMT:
    case PMFUNC:
    case PRIVATEREF:
    case QWLIST:
    case THING:
    case UNIOPSUB:
	return 1;
    }
    return 0;
}
#endif /* PERL_IN_TOKE_C */
#endif /* PERL_CORE */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{

    I32	ival; /* __DEFAULT__ (marker for regen_perly.pl;
				must always be 1st union member) */
    char *pval;
    OP *opval;
    GV *gvval;

};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif



int yyparse (void);


/* Generated from:
 * 233778626e1c4f8b4103ca96d66b107b4527a7b7304f05e373aef634cc4b6f81 perly.y
 * b6fae5748f9bef6db4740aa5e122b84ac5181852d42474d0ecad621fa4253306 regen_perly.pl
 * ex: set ro: */
