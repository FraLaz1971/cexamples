#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
        fprintf(stderr, "program %s reading from stdin %s\n", argv[0], argv[1]);
        int a, b, ret;
        printf("Please type two integer numbers separed by space:"); 
        ret = scanf("%d %d", &a, &b); 
        printf("n. of Input value read : %d\n", ret); 
        printf("Input values read : a = %d, b = %d\n", a, b); 
        puts("ok, good!");
        a=0; b=0;
        puts("then now trying to read data with different separator");
        printf("Please type two integer numbers separed by comma:"); 
        ret = scanf("%d,%d", &a, &b); 
        printf("n. of Input value read : %d\n", ret); 
        printf("Input values read : a = %d, b = %d\n", a, b); 
        puts("ok, bye");
        return 0;
}
