%{
#include <stdio.h>
#if 0
enum {
SYM_NONE, SYM_ADD, SYM_SUB, SYM_MUL, SYM_DIV, SYM_CR, SYM_INTEGER
};
#endif
char token_kind[][5] = {"none", "add", "sub", "mul", "div", "cr", "int"};
int yylval;
%}

%%
"+"    return  SYM_ADD;
"-"    return  SYM_SUB;
"*"    return  SYM_MUL;
"/"    return  SYM_DIV;
"\n"   return  SYM_CR; 
[0-9]+ {
         yylval = atoi(yytext);
         return  SYM_INTEGER;
       }

%%
/* flex tinycalc.l
   gcc -o sample01 lex.yy.c -ll */
#if 0
int main(int arc, char** argv)
{
    int token;

    yyin = stdin;
    while ((token = yylex()) != 0) {
        printf("token(%s): val(%d), text(%s)\n",
	       token_kind[token], yylval, yytext);
    }
}
#endif
