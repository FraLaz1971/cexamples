#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int m,n; 

void dump_2darray(float **myarr, int mrow, int mcol);


int main(int argc, char **argv){
    if (argc == 3){
    const float MROW = atoi(argv[1]);  
    const float MCOL = atoi(argv[2]);  
    float **arr;
  /* allocate the array */
  arr = malloc(MROW * sizeof(*arr));
  for (n=0; n<MROW; n++)
  {
    arr[n] = malloc(MCOL * sizeof (*arr[n]));
  }
    
     for(n=0; n<MROW; n++){
         arr[n][0]=0.1*n; arr[n][1]=sin(arr[n][0]);
    }

    dump_2darray(arr, MROW, MCOL);
    
    /* deallocate the array */
    for (n=0; n<MROW; n++)
    {
        free(arr[n]);
    }
    free(arr);
	return 0;
    } else {
        fprintf(stderr, "usage:%s nrow ncol\n" , argv[0]);
    }
}

void display_2darray(float **myarr, int mrow, int mcol){
    for(m=0; m<mcol; m++) printf("********"); puts("");
    for(n=0; n<mrow; n++){
        for(m=0; m<mcol; m++)
            printf("%f\t", myarr[n][m]);
        puts("");
    }
    for(m=0; m<mcol; m++) printf("********");puts("");
    
}

void dump_2darray(float **myarr, int mrow, int mcol){
    for(n=0; n<mrow; n++){
        for(m=0; m<mcol; m++)
            printf("%f\t", myarr[n][m]);
        puts("");
    }
    
}
