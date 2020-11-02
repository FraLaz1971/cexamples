#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if (argc == 2){
        fprintf(stderr, "reading from file %s\n", argv[1]);
        int a, b, ret;
        
        FILE* ptr = fopen(argv[1],"r"); 
        if (ptr==NULL) 
        { 
            printf("no such file."); 
            return EXIT_FAILURE; 
        } 
        char buf[100]; 
        while (fscanf(ptr,"%*s %*s %s ",buf)==1) 
            printf("%s\n", buf); 
        return 0;
    } else {
        fprintf(stderr, "usage: %s infile\n", argv[0]);
        return EXIT_FAILURE;
    }
}
