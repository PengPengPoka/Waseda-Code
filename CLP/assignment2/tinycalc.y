%{
#include  <stdio.h>
int yylex(void);
int yyerror(const char *mes);
%}
%token  SYM_NONE
%token  SYM_ADD
%token  SYM_SUB
%token  SYM_MUL
%token  SYM_DIV
%token  SYM_CR
%token  SYM_INTEGER


%%

s : list
  ;

list :
     | list expr SYM_CR { printf("%d\n", $2); }
     ;

expr : term
     | expr SYM_ADD term
       { $$ = $1+$3; }
     | expr SYM_SUB term
       { $$ = $1-$3; }
     ;

term : prim_expr
     | term SYM_MUL prim_expr
       { $$ = $1*$3; }
     | term SYM_DIV prim_expr
       { $$ = $1/$3; }
     ;
prim_expr : SYM_INTEGER
          ;
%%
#include "lex.yy.c"
/* 
   flex tinycalc.l
   bison tinycalc.y
   gcc tinycalc.tab.c -o sample02 -lfl */

int
yyerror(const char *mes)
{
    fprintf(stderr, "%s\n", mes);
    return 0;
}

int
main()
{
    yyparse();
    return 0;
}
