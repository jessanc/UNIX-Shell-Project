%{#include <stdio.h>
#include "y.tab.h"
%}
%%
[0-9]+  return NUMBER;
hello   return HELLO;
bye     return BYE;
on|off  return STATE;
\n      /*ignore end of line */;
[~][/][a-zA-Z0-9\-()\*\._]+    { yylval.string = strdup(yytext); return WORD_THAT_START_WITH_TILDA; }

%%
