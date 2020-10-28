// Program to calculate the sum of n numbers entered by the user
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, *ptr, sum = 0, ret=0;
    printf("Enter number of elements: ");
    ret = scanf("%d", &n);
    ptr = (int*) malloc(n * sizeof(int));
    // if memory cannot be allocated
    if(ptr == NULL)
    {
        perror("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter elements: ");
    for(i = 0; i < n; ++i)
    {
        ret = scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d\n", sum);
    // deallocating the memory
    free(ptr);
    return 0;
}
