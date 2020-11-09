#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int m,n; 
float **arr, val;

void allocate(float **myarr, int mrow, int mcol);

void deallocate(float **myarr, int nrow);

void dump(float **myarr, int mrow, int mcol);

void set_data(float **myarr, int mrow, int mcol);


int main(int argc, char **argv){
    if (argc == 3){
    /* get input from positional arguments*/
    const float MROW = atoi(argv[1]);  
    const float MCOL = atoi(argv[2]);  
    /* allocate the array */
    allocate(arr, MROW, MCOL);    
    /* fill array with data */
    set_data(arr, MROW, MCOL);
    /* dump array on stdout */
    dump(arr, MROW, MCOL);
    /* deallocate the array */
    deallocate(arr, MROW);
 	return 0;
    } else {
        fprintf(stderr, "usage:%s nrow ncol" , argv[0]);
    }
}

void display(float **myarr, int mrow, int mcol){
    for(m=0; m<mcol; m++) printf("********"); puts("");
    for(n=0; n<mrow; n++){
        for(m=0; m<mcol; m++)
            printf("%f\t", myarr[n][m]);
        puts("");
    }
    for(m=0; m<mcol; m++) printf("********");puts("");
    
}

void allocate(float **myarr, int mrow, int mcol){
  arr = malloc(mrow * sizeof(*arr));
  for (n=0; n<mrow; n++)
  {
    arr[n] = malloc(mcol * sizeof (*arr[n]));
  }
}

void dump(float **myarr, int mrow, int mcol){
    for(n=0; n<mrow; n++){
        for(m=0; m<mcol; m++)
            printf("%f\t", myarr[n][m]);
        puts("");
    }
}

void deallocate(float **myarr, int nrow){
    for (n=0; n<nrow; n++)
    {
        free(arr[n]);
    }
    free(arr);
}

void set_data(float **myarr, int mrow, int mcol){
     for(n=0; n<mrow; n++){
         val=0.01*n;
         arr[n][0]=val; arr[n][1]=cos(val)*(-1/sin(val));
    }
    
}
