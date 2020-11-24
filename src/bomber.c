#include <stdio.h>
/* global variables */
char c;
int done, sel, x;

void dropBomb(void);

/* global functiones */
void fpurge_stdin();
void PAUSE();

 /* prototype */
int main()
{
    printf("Press Enter to drop the bomb:");
    getchar();
    dropBomb();
    printf("Yikes!\n");
    PAUSE();
    puts("Bye.");
    return(0);
}

void dropBomb()
{
    for(x=20;x>1;x--)
    {
        puts("      *");
    }
    puts(" BOOM!");
}

void fpurge_stdin(){
#ifdef DEBUG
    __fpurge(stdin);
#else
	fflush(stdin);
#endif
}

void PAUSE(){
    printf("Please press a key and then enter\n");
    fpurge_stdin();
    c = getchar();
}
