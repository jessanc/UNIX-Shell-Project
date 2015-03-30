%{#include <stdio.h>
#include "y.tab.h"
%}

%%
setenv      return SETENV;
printenv    return PRINTENV;
unsetenv    return UNSETENV;
cd          return CD;
alias       return ALIAS;
unalias     return UNALIAS;
bye         return BYE;

ls          return LS;
\n          return EOLN;
[ \t]+      /*ignore whitespace */;
[0-9]+      {yylval.number = atoi(yytext); return NUMBER;}
[a-zA-Z0-9\-()\*\.\/..~?${}]+    { yylval.string = strdup(yytext); return WORD; } // filename

[<]			return LESSTHAN;
[>]			return GREATERTHAN;
[|]			return PIPE;
[\"]	    return DOUBLEQUOTE;
[\\]		return BACKSLASH;
[&]			return AMPERSAND;

.           { yyerror("unrecongnized character"); return 0;}

%%
