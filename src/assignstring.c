#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Carmen";
    char name2[20];
    printf("My friend is named %s.\n", name);
    memcpy(name2, name, 20);
    printf("I had also another friend named %s.\n", name2);
    puts("bye.");
    return 0;
}

