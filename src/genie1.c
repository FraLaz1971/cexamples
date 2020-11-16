#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char num[2]; int number; char add[13]="";
    printf("I am your computer genie!\n");
    do
    {
        printf("%s Enter a number from 0 to 9:", add);
        gets(num);
        number=atoi(num);
		memcpy(add, "I told you:", 13);
    } while ((number>9) || (number<0));
    if(number<5)
    {
        fprintf(stderr, "you entered %i\n", number);
        printf("That number is less than 5!\n");
    }
    else if(number==5)
    {
        printf("You typed in 5!\n");
    }
    else
    {
        fprintf(stderr, "you entered %i\n", number);
        printf("That number is more than 5!\n");
    }
    printf("The genie knows all, sees all!\n");
    return(0);
}
