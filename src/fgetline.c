#include <stdio.h>
#include <stdlib.h>

#ifndef _POSIX_C_SOURCE
extern ssize_t getdelim(char **lineptr, size_t *n, int delim, FILE *stream);

extern ssize_t getline(char **lineptr, size_t *n, FILE *stream);
#endif
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

#ifndef _POSIX_C_SOURCE
/* getline.c
 *
 * getdelim(), getline() - read a delimited record from stream, ersatz implementation
 *
 * For more details, see: http://pubs.opengroup.org/onlinepubs/9699919799/functions/getline.html
 *
 */

#include <stdlib.h>
#include <errno.h>
#include <limits.h>

ssize_t getdelim(char **lineptr, size_t *n, int delim, FILE *stream) {
    char *cur_pos, *new_lineptr;
    size_t new_lineptr_len;
    int c;

    if (lineptr == NULL || n == NULL || stream == NULL) {
        errno = EINVAL;
        return -1;
    }

    if (*lineptr == NULL) {
        *n = 128; /* init len */
        if ((*lineptr = (char *)malloc(*n)) == NULL) {
            errno = ENOMEM;
            return -1;
        }
    }

    cur_pos = *lineptr;
    for (;;) {
        c = getc(stream);

        if (ferror(stream) || (c == EOF && cur_pos == *lineptr))
            return -1;

        if (c == EOF)
            break;

        if ((*lineptr + *n - cur_pos) < 2) {
            if (SSIZE_MAX / 2 < *n) {
#ifdef EOVERFLOW
                errno = EOVERFLOW;
#else
                errno = ERANGE; /* no EOVERFLOW defined */
#endif
                return -1;
            }
            new_lineptr_len = *n * 2;

            if ((new_lineptr = (char *)realloc(*lineptr, new_lineptr_len)) == NULL) {
                errno = ENOMEM;
                return -1;
            }
            cur_pos = new_lineptr + (cur_pos - *lineptr);
            *lineptr = new_lineptr;
            *n = new_lineptr_len;
        }

        *cur_pos++ = (char)c;

        if (c == delim)
            break;
    }

    *cur_pos = '\0';
    return (ssize_t)(cur_pos - *lineptr);
}

ssize_t getline(char **lineptr, size_t *n, FILE *stream) {
    return getdelim(lineptr, n, '\n', stream);
}

#endif
