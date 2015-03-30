#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
//#include "system_calls/chdir.c"
void shell_init();
int main(){
    printf("Welcome to SHell!\n");

   shell_init();
    	While (1) {
    		printPrompt();
    		Switch (CMD = getCommand()) {
    		Case: BYE		exit();
    		Case: ERRORS 	recover_from_errors();
    		Case: OK 		processCommand();
    		}
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
	init_scanner-and_parser();
	if (yyparse())
	return 1;
		understand_errors();
	else
		Return (OK);
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
	if (builtin)
		do_it(builtin);
	else
		execute_it();
}
void do_it(string builtin)
{
	switch (builtin) {
	case CDHome:    //gohome();
	case CDPath:	//chdir(path);
	case ALIAS:
	case UNALIAS:
	case SETENV:
	case PRINTENV:
    //....
	}
}
void Execute_it()
{
	// Handle  command execution, pipelining, i/o redirection, and background processing.
	//Utilize a command table whose components are plugged in during parsing by yacc.

/*
	 * Check Command Accessability and Executability
	*/
	if( ! Executable() ) {
		//use access() system call with X_OK
		nuterr("Command not Found");
		return;
	}

	/*
	 * Check io file existance in case of io-redirection.
	*/
	if( check_in_file()==SYSERR ) {
		nuterr("Cann't read from : %s",srcf);
		return;
	}
	if( check_out_file()==SYSERR ) {
		nuterr("Cann't write to : %s",distf);
		return;
	}

	//Build up the pipeline (create and set up pipe end points (using pipe, dup)
	//Process background
}
