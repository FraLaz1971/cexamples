/*  program largest.c
  variables:
     ivec               array to hold numbers
     large              largest array element
     j                  labels largest array element
     i                  for loop index */
#define MAX 4
#include <stdio.h>
int main() {
/* variables  declarations */
      int ivec[MAX],large,i,j,temp;
/* input the array elements */
      printf("Enter %d integers, one per line:\n", MAX);
      for (i = 0; i<MAX; i++){
        scanf("%i", &temp);
        ivec[i]=temp;
      }
/* start by assuming first element to be largest.... */
      large = ivec[0];
      j = 1;
      for (i = 0; i<MAX; i++){
/*  now find the largest and its position in the array */
        if (ivec[i] > large){
            large=ivec[i];
            j=i+1;
        }
      }
      printf("Element n.%i, is largest and has value %i\n",j ,large);
      return 0;
}
