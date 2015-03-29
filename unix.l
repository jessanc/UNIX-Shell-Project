%{#include <stdio.h>
#include "y.tab.h"
%}

%%
setenv      return SETENV;
printenv    return PRINTENV;
unsetenv    return UNSETENV;
cd          return CD;
ls          return LS;
alias       return ALIAS;
unalias     return UNALIAS;
bye         return BYE;
\n          /*ignore end of line */;
[ \t]+      /*ignore whitespace */;
[0-9]+      {yylval.number = atoi(yytext); return NUMBER;}
[a-zA-Z0-9\-\*\.\/]+    { yylval.string = strdup(yytext); return WORD; } // filename
";"      printf("Semicolon\n");
"("      printf("Open parentheses\n");
")"      printf("Close parentheses\n");
.           { yyerror("unrecongnized character"); return 0;}

%%
