/* Theater lobby snack bar program */
#include <stdio.h>

/* global variables */
char c;
int done, sel;

/* global functiones */
void fpurge_stdin();
void PAUSE();

int main()
{
    float total=0;
    printf("Please press a key and then enter,\n");
    printf("make your treat selections:\n");
    printf("1 - Beverage.\n");
    printf("2 - Candy.\n");
    printf("3 - Hot dog.\n");
    printf("4 - Popcorn.\n");
    printf("$ - Show Price.\n");
    printf("= - Done.\n");
    printf("Your choices:\n");
    /* Figure out what they typed in. */
    done=0;
    while(!done)
    {
        fpurge_stdin();
        c = getchar();
        switch(c)
        {
            case '1':
                printf("Beverage\t$8.00\n");
                total+=8;
                break;
            case '2':
                printf("Candy\t\t$5.50\n");
                total+=5.5;
                break;
            case '3':
                printf("Hot dog\t\t$10.00\n");
                total+=10;
                break;
            case '4':
                printf("Popcorn\t\t$7.50\n");
                total+=7.5;
                break;
            case '=':
                printf("= Total of $%.2f\n",total);
                printf("Please pay the cashier.\n");
                done=1;
                break;
            case '$':
                printf("Beverage-->$8.00\n");
                printf("Candy----->$5.50\n");
                printf("Hot dog-->$10.00\n");
                printf("Popcorn--->$7.50\n");
                printf("1 - Beverage.\n");
                printf("2 - Candy.\n");
                printf("3 - Hot dog.\n");
                printf("4 - Popcorn.\n");
                printf("$ - Show Price.\n");
                printf("= - Done.\n");
                printf("Your choices:\n");
                break;
            default:
                    printf("Improper selection.\n");
        } /* end switch */
    } /* end while */
    PAUSE();
    puts("program ended, bye.");
    return 0 ;
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
