/* Theater lobby snack bar program */
#include <stdio.h>
int main()
{
    char c;
    int done, sel;
    float total=0;
    printf("Please make your treat selections:\n");
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
        sel=0;
        c=getchar();
        switch(c)
        {
            case '1':
                printf("Beverage\t$8.00\n");
                total+=8;
                sel=1;
                break;
            case '2':
                printf("Candy\t\t$5.50\n");
                total+=5.5;
                sel=1;
                break;
            case '3':
                printf("Hot dog\t\t$10.00\n");
                total+=10;
                sel=1;
                break;
            case '4':
                printf("Popcorn\t\t$7.50\n");
                total+=7.5;
                sel=1;
                break;
            case '=':
                printf("= Total of $%.2f\n",total);
                printf("Please pay the cashier.\n");
                sel=1;
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
                sel=1;
                break;
            default:
                if (sel=0)
                    printf("Improper selection.\n");
                sel=0;
        } /* end switch */
    } /* end while */
    return(0);
}
