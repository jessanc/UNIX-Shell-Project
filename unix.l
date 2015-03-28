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
\n          /*ignore end of line */;
[ \t]+      /*ignore whitespace */;
[0-9]+      {yylval.number = atoi(yytext); return NUMBER;}
[a-zA-Z0-9\-\*\.\/]+    { yylval.string = strdup(yytext); return WORD; }
";"         return SEMICOLON;
"("         return OPEN_PAREN;
")"         return CLOSE_PAREN;
"<"         return OPEN_CARAT;
">"         return CLOSE_CARAT;
"|"         return PIPE;
"\""        return QUOTE;
"\\"        return BACKSLASH;
"&"         return AMPERSAND;
.           ECHO; // return (int) yytext[0];

%%
