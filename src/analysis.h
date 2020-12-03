#ifdef ANALYSIS_H
#define ANALYSIS_H
#include <stdio.h>
#include <stdlib.h>
#include "defines.h"

extern float *data;

void parserow(char *mybuffer, int mncols);

void showdata(float *mydata, int mnrows, int mncols);

#endif /* ANALYSIS_H */
