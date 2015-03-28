%{#include <stdio.h>
#include <string.h>

void yyerror(const char *str){
    fprintf(stderr, "error: %s\n",str);
}

int yywrap(){
    return 1;
}
main(){
    fprintf(stderr, "\tWelcome to UNIX SHELL\n\n$ ");
    yyparse();
    return 0;
}

%}
%token SETENV PRINTENV UNSETENV CD ALIAS UNALIAS BYE
%token NUMBER WORD SEMICOLON OPEN_PAREN CLOSE_PAREN OPEN_CARAT CLOSE_CARAT PIPE QUOTE BACKSLASH AMPERSAND

%union
{
        int number;
        char* string;
}
%token <number> NUMBER
%token <string> WORD
%%

commands: /* empty */
     | commands command{printf("%s","$ ");};

command:
    setenv_case|printenv_case|unsetenv_case|cd_case|alias_case|unalias_case|bye_case|number_case|word_case;

setenv_case:
    SETENV {printf("\t setenv !!\n");};

printenv_case:
    PRINTENV {printf("\t printenv !!\n");};

unsetenv_case:
    UNSETENV {printf("\t unsetenv !!\n");};

cd_case:
    CD {printf("\t cd !!\n");};

alias_case:
    ALIAS {printf("\t alias !!\n");};

unalias_case:
    UNALIAS {printf("\t unalias !!\n");};

bye_case:
    BYE {printf("\t bye!! \n"); exit(0);};

number_case:
    NUMBER {printf("\t%d\n", yylval);};

word_case:
    WORD {printf("\t%s\n", yylval);};

%%

