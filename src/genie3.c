#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char numc; char nums[1];int number; char add[13]="";
    printf("I am your computer genie!\n");
    do
    {
        puts("\nI will take only the first character you type,");
        printf("%s Enter a number from 0 to 9:", add);
        numc = getchar();
        nums[0]=numc;
        number = atoi(nums);
        fprintf(stderr, "your input is %c\n", numc);
		memcpy(add, "I told you:", 13);
    } while ( (numc<48) || (numc>57) );
    fprintf(stderr, "you typed %c\n", numc);
    printf("The genie knows all, sees all!\n");
    return(0);
}
