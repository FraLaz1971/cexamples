#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "analysis.h"

#define NROWS 100
#define NCOLS 100

void showdata(float *mydata, int mnrows, int mncols);

int main(){

	float fdata[NROWS][NCOLS];
	int i, j;
	for(i=0; i<NROWS; i++){
		for(j=0; j<NCOLS; j++)
			fdata[i][j] = i*NCOLS+j;
	}
	showdata((float *)&fdata, 3, 4);
	return 0;
}
