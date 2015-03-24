#include <sys/types.h>
#include <pwd.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *lgn;
struct passwd *pw;

int main(){

	if ((lgn = getlogin()) == NULL || (pw = getpwnam(lgn)) == NULL) {
	    fprintf(stderr, "Get of user information failed.\n"); exit(1);
	}		

	printf("%s\n", pw->pw_name);
}
	
