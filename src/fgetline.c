#include <stdio.h>
#include <stdlib.h>

int input(char *s,int length);

int main(int argc, char **argv){
    char *buffer;char *ifname;
    FILE *ifp; int ret;
    size_t bufsize = 32; size_t nchar=0;
    if (argc == 2 ){
    buffer = (char *)malloc(bufsize * sizeof(char));
    if( buffer == NULL)
    {
        perror("Unable to allocate buffer");
        exit(1);
    }
    ifname = argv[1];
    ifp=fopen(ifname, "r");
	while (nchar != EOF)
    	{
	        nchar = getline(&buffer,&bufsize,ifp);
		if (nchar==EOF) break;
	    	printf("%zu characters were read.\n",nchar);
	    	printf("read: '%s'\n",buffer);
        }
    fclose(ifp);
    return(0);
   } else {
	fprintf(stderr, "usage %s <infilename>\n", argv[0]);
	return 85;
   }
}

