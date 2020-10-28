#include <stdio.h>
#include <stdlib.h>
#include "defines.h"

extern float *data;


void parserow(char *mybuffer, int mncols){
            cc=0; fcharcount=0;colcount=0;
    		while( mybuffer[cc] != RS ){ /* while on line characters */
			if ( (mybuffer[cc] != FS) ){
				/* field[fcharcount][rowcount]=mybuffer[cc]; */
					temp[fcharcount] = mybuffer[cc];
					fcharcount++;
				if ( (mybuffer[cc] != '\t') && (mybuffer[cc] != ' ' ) ){
				}
				/* printf("cc = %d fcc = %d temp = %s\n", cc, fcharcount, temp);  */
			} else {
				printf("%s ", temp);
                data[rowcount*mncols+colcount]=atof(temp);                    
				colcount++;
				fcharcount=0;
				memcpy(temp, "", 16);
			}
			cc++;
		}
		printf("%s\n", temp);
        data[rowcount*mncols+colcount]=atof(temp);                    
		colcount++;

}

void showdata(float *mydata, int mnrows, int mncols){
    puts("showdata() START");
    int myrowcount=0; int mycolcount=0;
    for(myrowcount=0;myrowcount<mnrows;myrowcount++){
        for(mycolcount=0;mycolcount<mncols;mycolcount++){
                printf("%f ", mydata[myrowcount*mncols+mycolcount]);
        }
        printf("\n");
    }
    puts("showdata() STOP");
}


