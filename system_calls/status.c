/* status.c
  demonstrates exit() returning a status to wait().
*/

int main()
{
  unsigned int status;

  if ( fork () == 0 )  {       /*  == 0 means in child  */
     printf("I'm child press anything to exit\n");
     scanf ("%d", &status);
     exit (status);
  }
  else  {                      /* != 0 means in parent */
     wait (&status);
     printf("child exit status = %d\n", status > 8 );
  }
}