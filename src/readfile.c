#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  if (argc == 2){
  int c;			/* Character read from the file.	*/
  FILE *ptr;			/* Pointer to the file. FILE is a
				   structure  defined in <stdio.h>	*/
				/* Open the file - no error checking done */
  ptr = fopen(argv[1],"r");
				/* Read one character at a time, checking 
				   for the End of File. EOF is defined
				   in <stdio.h>  as -1 			*/
  while ((c = fgetc(ptr)) != EOF) /* until you reach the end of the file */
  {
    printf("%c",c);		/* O/P the characters to the screen	*/
  }

  fclose(ptr);			/* Close the file.			*/
  return 0;
} else
{
	printf("usage: %s infilename \n", argv[0]);
	return 1;
}

}

