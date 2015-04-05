#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>
#include <sys/file.h>
#include "y.tab.h"
#include "shell.h"

void shell_init();

//void prompt(){
//	//printf("%s\n$ " , getenv("PWD"));
//	printf("\n%s","$ ");
//	return;
//}

int main(){
    printf("\tWelcome to UNIX SHELL\n\n$ ");

        shell_init();
    	while (1) {
    	switch (getCommand()) {
    		case 1:
    		    processCommand();
    		};
    	}

}
void shell_init(){
    // init all variables.
    	// define (allocate storage) for some var/tables
    	//init all tables (e.g., alias table)
    	//get PATH environment variable (use getenv())
    	//get HOME env variable (also use getenv())
    	//disable anything that can kill your shell.
    	// (the shell should never die; only can be exit)
    	// do anything you feel should be done as init
    printf("IN shell_int");
}
int getCommand()
{
	//init_scanner-and_parser();
	if (yyparse())
	    return(0);
	else
		return(1);
}
void recover_from_errors()
{
	//Find out if error occurs in middle of command
	//That is the command still has a “tail”
	//In this case you have to recover by “eating”
	// the rest of the command.
	// To do this: use yylex() directly.
}
void processCommand()
{
	if (command)
		do_it();
	else
		execute_it();
}
void do_it()
{
	switch (command) {
	    case 1: //setenv
	        break;
        case 2: //printenv
            break;
        case 3: //unsetenv
            break;
        case 4: //cd
            break;
        case 5: // cd dir
            break;
        case 6: //alias
            break;
        case 7: //unalias
            break;
        case 8: //ls
            break;
        case 9: // ls directory
            break;
        case 10: // bye
                printf("\t bye!! \n");
                exit(0);
                break;
        };

}
void Execute_it()
{
//	// Handle  command execution, pipelining, i/o redirection, and background processing.
//	//Utilize a command table whose components are plugged in during parsing by yacc.
//
///*
//	 * Check Command Accessability and Executability
//	*/
//	if( ! Executable() ) {
//		//use access() system call with X_OK
//		nuterr("Command not Found");
//		return;
//	}
//
//	/*
//	 * Check io file existance in case of io-redirection.
//	*/
//	if( check_in_file()== SYSERR ) {
//		nuterr("Cann't read from : %s",srcf);
//		return;
//	}
//	if( check_out_file()== SYSERR ) {
//		nuterr("Cann't write to : %s",distf);
//		return;
//	}
//
//	//Build up the pipeline (create and set up pipe end points (using pipe, dup)
//	//Process background
}
