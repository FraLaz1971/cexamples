#include <stdio.h>
char t[10]; int r, start; char ch;
void PAUSE();

int main()
{
    int count, i;
    for(count=10;count>0;count=count-1)
    printf("%d\n",count);
    printf("Ready or not, here I come!\n");
    PAUSE();
    for(i=2;i<10;i=i+2)
    printf("%d ",i);
    printf("who do we appreciate? GNU!\n");
    PAUSE();
    for(i=5;i<=1000;i=i+5)
        printf("%d\t",i);
    PAUSE();
    i=1;
    while(i<6)
    {
        printf("Ouch! Please stop!\n");
    i++;
    }
    PAUSE();
    while(ch!='~')
    {
        printf("%s please, type a '~' and then enter\n", t);
        ch=getchar();
        memcpy(t,"I told you:", 10);
    }
    do{
    printf("Please enter the number to start ");
    printf("the countdown (1 to 100):");
    scanf("%d",&start);
    } while (start<1 || start>100);
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
        #ifdef __GNUC__
            __fpurge(stdin);
        /*fprintf(stderr, "debug: compiled with GNU C, added __fpurge(stdin);\n"); */
        #endif
        puts("please, type a key and then enter\n");
        r = scanf("%s", t);
}
