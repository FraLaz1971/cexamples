#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    if (argc == 2){
        fprintf(stderr, "reading from file %s\n", argv[1]);
        int a, b, ret;
        printf("Please type two integer numbers separed by space:"); 
        ret = scanf("%d %d", &a, &b); 
        printf("n. of Input value read : %d\n", ret); 
        printf("Input values read : a = %d, b = %d\n", a, b); 
        return 0;
    } else {
        fprintf(stderr, "usage: %s infile\n", argv[0]);
        return EXIT_FAILURE;
    }
}
