#include <stdio.h>
#include <stdlib.h>
/* writes a file */
int main(int argc, char **argv){
	char *fname = "msout.txt";
	FILE *ofilep;
	ofilep = fopen(fname, "w");
	if ( ofilep  != NULL)
	{
		fprintf(ofilep, "Hello MicroSoft World\r\n");
		fprintf(ofilep, "I like you even if you're using MS-DOS\r\n");
		fprintf(ofilep, "But I would love you more if you're using \r\n");
		fprintf(ofilep, "Free-DOS https://www.freedos.org/  \r\n");
		fprintf(ofilep, "or ReactOS instead https://reactos.org/ \r\n");
		fprintf(ofilep, "Bye. :-D !! \r\n");
		fclose(ofilep);
		fprintf(stderr,"%s: wrote output to file %s", argv[0], fname);
		return EXIT_SUCCESS;
	} else {
		fprintf(stderr,"%s: error in open the output file %s\n", argv[0], fname);
		return EXIT_FAILURE;
	}
}
