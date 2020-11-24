#include <stdio.h>
#include <string.h>
char t[10]; int r, start; char ch;
void PAUSE();

int main()
{
    int count, i;
    do{
        printf("Please enter the number to start ");
        printf("the countdown (1 to 100):");
        r=scanf("%d",&start);
    } while ( start<1  ||  start>100 );
/* The countdown loop */

    do
    {
    printf("T-minus%d\n",start);
        start--;
    } while(start>0);
    
    printf("Zero!\nBlast!\n");
    PAUSE();
    puts("Bye.");
    return(0);
}
/* functions implementation */
void PAUSE(){
        #ifdef DEBUG
            __fpurge(stdin);
        /*    fprintf(stderr, "debug: compiled with GNU C, added __fpurge(stdin);\n"); */
        #endif
        puts("please, type a key and then enter\n");
        r = scanf("%s", t);
}
