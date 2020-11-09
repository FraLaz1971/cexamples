#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* this program read data from files containing a data table
 n x 3 column table each cell separated by space each line endinf with \n (LF) char
CR characters are ignored 
the lines starting with # are considered comments and are ignored
*/
/* example file:
#NAME AGE CITY
Areeba 12 hyderbad
Alisha 18 delhi
#comment 1
Umar 65 bangalore 
Francesco 49 Latina
#comment 2
John 55 SanAntonio
*/
int a, b, ret, ret1, ret2, len, clen, lc, lac, ct;
char line[1024]; char cline[1024];
char buf[100]; char buf1[100], buf2[100], buf3[100]; buft[100][3]; char fc;
FILE* ptr; len = 100;
const char s[2] = " ";
char *token;

int is_comment(FILE* ptr){
        fc = getc(ptr);
        /* printf("first char. in line: %c\n", fc);*/
        if (fc == '#'){
            ret1 = fgets(cline, clen, ptr);
            /* printf("read line, ret1 = %d content of cline = %s\n", ret1, cline); */
            return 1;
        } else {
            return 0;
        }
}


int scanfile_r(FILE* ptr){
    while( fgets (line, len, ptr)!=NULL ) {
        /* writing content to stdout */
        if (line[0] == '#'){
           /* ret = fscanf(ptr, "%s", line); */
            printf("read comment %s", line);
        } else{
            /* get the first token */
            token = strtok(line, s);
            /* walk through other tokens */
            ct = 0;
            while( token != NULL ) {
                 lac = strlen(token) - 1;
                  if (token[lac] == '\n'){
                     strcpy(buf, token);
                     buf[lac]='\0';
                    if (ct == 0)
                    {
                     strcpy(buf1, buf);
                    } else 
                    if (ct == 1)
                    {
                     strcpy(buf2, buf);                        
                    }  else 
                    if (ct == 2)
                    {
                     strcpy(buf3, buf);                        
                    }
   
                } else {
                    if (ct == 0)
                    {
                     strcpy(buf1, token);
                    } else 
                    if (ct == 1)
                    {
                     strcpy(buf2, token);                        
                    }  else 
                    if (ct == 2)
                    {
                     strcpy(buf3, token);                        
                    }
                  }
                ct++;
                token = strtok(NULL, s);
            }
            fprintf(stderr, "buf1 = %s, buf2 = %s, buf3 = %s\n", buf1, buf2, buf3 );

        }
    }    
   return 0;
}

int main(int argc, char *argv[]){

    if (argc == 2){
        fprintf(stderr, "reading from file %s\n", argv[1]);
        ptr = fopen(argv[1],"r"); 
        if (ptr==NULL) 
        { 
            printf("no such file."); 
            return EXIT_FAILURE; 
        } 
        scanfile_r(ptr);
        fclose(ptr);
        return 0;
    } else {
        fprintf(stderr, "usage: %s infile\n", argv[0]);
        return EXIT_FAILURE;
    }
}
