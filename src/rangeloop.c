#include <stdio.h>
#include <stdlib.h>
int main(int argc , char **argv )
{
    if (argc == 3){
    int i;
    const int MIN=atoi(argv[1]); 
    const int MAX=atoi(argv[2]); 
    for(i=MIN ; i<=MAX ; i=i+1)
        printf("%d\t",i);
    return(0);
    } else{
        fprintf(stderr, "usage: %s <min> <max>\n", argv[0]);
    }    
}

