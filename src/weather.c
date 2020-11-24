#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* global variables declaration */
char temp[10]="";int ret;char c1; float deg;
/* functions declaration */
void PAUSE();
float f2c(float t_f);
float c2f(float t_c);
void show_conversions(float ftemp, float ctemp);

int main(int argc, char **argv){
    if (argc == 2 ) {
        float ftemperature, ctemperature;
        ftemperature = atof(argv[1]);
        ctemperature = f2c(ftemperature);
        show_conversions(ftemperature, ctemperature);
        if( (ftemperature>60) && (ftemperature<90) )
        {
            printf("My, but it’s nice weather outside\n");
        } else {
            printf("Could be better weather outside\n");
        }
        PAUSE();
        puts("Bye.");
        return 0;
    } else {
        puts("This program takes one input parameter");
        fprintf(stderr, "usage:%s <temperature (°F)>\n", argv[0]);
        return 1;
    }
}

/* functions implementation */
void PAUSE(){
        puts("please, type a key and then enter\n");
        c1 = getchar();
}

/* Fahrhenheit to/from celsius degrees conversions 
 * T_C = (T_F - 32) x 5/9
 * T_F = 32 + 9/5 x T_C   
 */

void show_conversions(float ftemp, float ctemp){
    printf("Temperature is %.2f deg. Fahrenheit\n", ftemp);
    printf("Temperature is %.2f deg. Celsius\n", ctemp );    
}

float f2c(float t_f){
    deg = (t_f - 32) * 5/9;
    return deg;
}

float c2f(float t_c){
    deg = 32 + 9/5 * t_c; 
    return deg;
}
