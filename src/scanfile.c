#include <stdio.h>
#include <stdlib.h>

int a, b, ret, ret1, ret2, len, clen, lc;
char line[1024]; char cline[1024];
char buf1[100], buf2[100], buf3[100]; char fc;
FILE* ptr;

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
        do {
             if (!is_comment(ptr)){
                 ret = fscanf(ptr,"%s %s %s\n",buf1, buf2, buf3);
                 printf("HeadCell1= %s  HeadCell2= %s HeadCell3 = %s\n", buf1, buf2, buf3); 
            } else  {
                ret2 = fgets(line, len,ptr);
                printf("content of line = #%s ret2 = %d\n", line, ret2);
                ret = fscanf(ptr,"%*s\n",line);
                ret=3;
           }
        } while ( (ret == 3) || (ret2 != 0));
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
