%{#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>
#include <sys/file.h>
#include "shell.h"

void yyerror(const char *str){
    fprintf(stderr, "error: %s\n",str);
}

int yywrap(){
    return 1;
}

%}
%token SETENV PRINTENV UNSETENV CD LS EOLN ALIAS UNALIAS BYE FLAG
%token NUMBER WORD SEMICOLON OPEN_PAREN CLOSE_PAREN OPEN_CARAT CLOSE_CARAT PIPE QUOTE BACKSLASH AMPERSAND
%token BACKSLASH LESSTHAN GREATERTHAN PIPE DOUBLEQUOTE AMPERSAND
%token HOME_AND_PATH HOME ROOT DOT_DOT

%union
{
        int number;
        char* string;
}
%token <number> NUMBER
%token <string> WORD
%%

commands: /* empty */
     | commands command{printf("\n%s","$ ");};

command:
    setenv_case|printenv_case|unsetenv_case|cd_case|ls_case|EOLN_case|alias_case|unalias_case|bye_case|number_case|word_case|metach_case;

setenv_case:
    SETENV {printf("\t setenv !!\n");};

printenv_case:
    PRINTENV {printf("\t printenv !!\n");};

unsetenv_case:
    UNSETENV {printf("\t unsetenv !!\n");};

cd_case:

    |CD EOLN{
        builtin = 1;
        printf("\tDirectory changed to Home\n");
        chdir(getenv("HOME"));
    }

    |CD HOME EOLN{
        builtin = 1;
        printf("\tDirectory changed to Home\n");
        chdir(getenv("HOME"));
    }

     |CD ROOT EOLN{
            builtin = 1;
            printf("\tDirectory changed to root\n");
            chdir("/");
    }

    |CD HOME_AND_PATH WORD EOLN{
        builtin = 1;
        char* s = $3;
        if(chdir(s) == -1){
                    printf("%s: ", s);
                    printf("\tnot a directory");
        }
        else{
            printf("\tDirectory changed to %s\n", s);
            chdir(getenv("HOME"));
            chdir(s);
        }

    }

    |CD HOME WORD EOLN{
                builtin = 1;
                char* s = $3;
                if(chdir(s) == -1){
                            printf("%s: ", s);
                            printf("\tnot a directory");
                }
                else{
                    printf("\tDirectory changed to home and then to %s\n", s);
                    chdir(getenv("HOME"));
                    chdir(s);
                 }
     }

    |CD WORD EOLN{
        builtin = 1;
        char* s = $2;
        if(chdir(s) == -1){
            printf("%s: ", s);
            printf("\tnot a directory");
        }
        else{
                printf("\tDirectory changed to %s\n", s);
                free($2);
            }
    }
    ;

EOLN_case:
    EOLN {}; // just ignore


ls_case:
    LS EOLN{
            builtin = 0;
            DIR *dir;
    		dir = opendir(".");
    		struct dirent *dp;
    		if(dir) {
    			while ((dp = readdir(dir)) != NULL) {
    				printf("%s\n", dp->d_name);
    			}
    			closedir(dir);
    		}
    		else
    		    printf("not valid !");
    }
    | LS WORD EOLN{
            builtin = 0;
    		DIR *dir;
    		dir = opendir(".");
    		struct dirent *dp;
    		const char* input = $2;
    		int len = strlen($2);
    		int k;
    		char* output;
    		if(dir) {
    			while ((dp = readdir(dir)) != NULL) {
    				k = 1;
    				output = dp->d_name;
    				int i;
    				for (i = 0; i < len; i++) {
    					if (input[i] != output[i]) {
    						k = 0;
    						break;
    					}
    				}
    				if (k == 1)
    					printf("%s\n", dp->d_name);

    			}
    			closedir(dir);
    		}
    		else
                		    printf("not valid !");
    	}
    	;

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

metach_case:
    lessthan|greaterthan|pipe|doublequote|backslash|ampersand;

lessthan:
	LESSTHAN {printf("\t Less than!!\n");};

greaterthan:
	GREATERTHAN {printf("Greater than\n");};

pipe:
	PIPE{printf("\t Pipe!!\n");};

doublequote:
	DOUBLEQUOTE{printf("\t Double quote!!\n");};

backslash:
	BACKSLASH{printf("\t Backslash!!\n");};

ampersand:
	AMPERSAND{printf("\t Ampersand!!\n");};


%%


int main()
{
    fprintf(stderr, "\tWelcome to UNIX SHELL\n\n$ ");
	yyparse();
	return 0;
}

