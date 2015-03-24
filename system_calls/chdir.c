#include <fcntl.h>         /* defines options flags */
#include <sys/types.h>     /* defines types used by sys/stat.h */
#include <sys/stat.h>      /* defines S_IREAD & S_IWRITE  */
#include <stdio.h>


int main(){
  int cd = chdir("/aasas");
  if(cd != -1){
    execlp("ls", "ls", "-l",(char *) NULL );
    exit(0);
  }else{
  	printf("Error\n");
  }
  
}


