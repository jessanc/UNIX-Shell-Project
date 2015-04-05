%{#include <stdio.h>
#include <string.h>

void yyerror(const char *str) {fprintf(stderr,"error: %s\n",str);}
int yywrap(){return 1;}
main(){yyparse();}
%}
%token NUMBER HELLO BYE STATE WORD_THAT_START_WITH_TILDA
%union
{
        int number;
        char* string;
}
%token <string> WORD_THAT_START_WITH_TILDA
%%
commands: /*empty*/
	| commands command;
command:
	hello_case|bye_case|state_number_case|number|word_that_start_with_tilda_case;
hello_case:
	HELLO	{printf("\t hello back !!\n");};
bye_case:
	BYE	{printf("\t bye back !!\n");};
state_number_case:
	STATE NUMBER	{printf("\t state with number received \n");};
number:
	NUMBER	{printf("\t number back !!\n");};

word_that_start_with_tilda_case:
     WORD_THAT_START_WITH_TILDA {printf("yo\n");};
