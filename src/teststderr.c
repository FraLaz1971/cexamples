/* stdiner.c shows stderr use 
./stdiner
./stdiner 2>err.log
*/
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int age;
    const char *msgo = "Hello My Dear :-)";
    const char *msge = "ERROR! All messed up!!\n";
    printf("the message is %s\n", msgo);
    fprintf(stderr, "%s", msge);
    puts("ciao pippo!");
    fprintf(stderr, "WARNING!! Pippo is out!\n");
    puts("end of the game, bye.");
    return 0;
}

