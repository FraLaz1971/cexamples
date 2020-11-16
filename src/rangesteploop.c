#include <stdio.h>
#include <stdlib.h>
int main(int argc , char **argv )
{
    if (argc == 4){
    int i;
    const int MIN=atoi(argv[1]); 
    const int MAX=atoi(argv[2]); 
    const int STEP=atoi(argv[3]); 
    for(i=MIN ; i<=MAX ; i=i+STEP)
        printf("%d\t",i);
    return(0);
    } else{
        fprintf(stderr, "usage: %s <min> <max> <step>\n", argv[0]);
    }    
}

