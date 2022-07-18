/** reads from a binary file a stream and stores it in a specified string. 
The function stops reading text from the stream when either n - 1 characters are read, 
the newline character ('\n') is read or the end of file (EOF) is reached. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 80

int main(int argc, char **argv)
{
    char *path = "\0";
    char line[MAX_LINE_LENGTH] = {0};
    unsigned int line_count = 0;
    
    if (argc < 2){
        fprintf(stderr,"Usage: %s <infile>\n", argv[0]);
        return EXIT_FAILURE;
    } else {
    path = argv[1];
    
    /* Open file */
    FILE *file = fopen(path, "r");
    
    if (!file)
    {
        perror(path);
        return EXIT_FAILURE;
    }
    
    /* Get each line until there are none left */
    while (fgets(line, MAX_LINE_LENGTH, file))
    {
        /* Print each line */
        printf("line[%06d]: %s", ++line_count, line);
        
        /* Add a trailing newline to lines that don't already have one */
        if (line[strlen(line) - 1] != '\n')
            printf("\n");
    }
    
    /* Close file */
    if (fclose(file))
    {
        return EXIT_FAILURE;
        perror(path);
    }
    return EXIT_SUCCESS;
    }
}



