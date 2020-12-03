#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MROW 8
#define MCOL 6

 int main(){
    int m,n, i, j;
	int arr[MROW][MCOL]={
        {0,1,2},
        {3,4,5},
        {6,7,8},
        {9,10,11}
    };
int disp[2][4] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}
};
    n=0; m=0;
    for(n=0; n<MROW; n++){
        for(m=0; m<MCOL; m++)
            printf("%d ", arr[n][m]);
        puts("");
    }
    puts("***************");
    for(n=0; n<MROW; n++){
        for(m=0; m<MCOL; m++)
             arr[n][m] = n*MCOL+m;
    }

    n=0; m=0;
    for(n=0; n<MROW; n++){
        for(m=0; m<MCOL; m++)
            printf("%d\t", arr[n][m]);
        puts("");
    }
    puts("***************");

   /* 2D array declaration*/
   /*Counter variables for the loop*/
/*   Displaying array elements */
  printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<=3;j++) {
         printf("%d ", disp[i][j]);
         if(j==3){
            printf("\n");
         }
      }
   }
	return 0;
}
