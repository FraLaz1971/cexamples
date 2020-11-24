#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* global variables declaration */
char temp[10]="";int ret, a;float deg; 
float fp;
float wp;
float tp; /* tp > 128 ---> good temperature */
unsigned char condw; /*                                 */ 
/* functions declaration */
void PAUSE();
float f2c(float t_f);
float c2f(float t_c);
void show_conversions(float ftemp, float ctemp);

int main(int argc, char **argv){
    if (argc == 3 ) {
        float ftemperature, ctemperature;
        ctemperature = atof(argv[1]);
        ftemperature = c2f(ctemperature);
        condw=argv[2][0];
        switch(condw){
            case 'S':
                fprintf(stderr, "weather is sunny\n");                
                a=0;
                break;
            case 's':
                fprintf(stderr, "weather is sunny\n");                
                a=0;
                break;
            case 'C':
                fprintf(stderr, "weather is cloudy\n");                
                a=1;
                break;
            case 'c':
                a=1;
                break;
            case 'R':
                fprintf(stderr, "weather is rainy\n");                
                a=2;
                break;
            case 'r':
                a=2;
                break;
            case 'I':
                fprintf(stderr, "weather is icy\n");                
                a=3;
            case 'i':
                a=3;
                break;
            default:
                fprintf(stderr, "Unknown humidity condition\n");                                
                puts("please select it among one of the following:");
                fprintf(stderr, "[Sun|Clouds|Rain|Ice]\n");
                return 1;
        }
        show_conversions(ftemperature, ctemperature);
        if (( (ctemperature > 6) && (a == 3)))
        {
            fprintf(stderr, "there's something wrong in the input values\n");
            return 1;
        }
        if (( (ctemperature < -8) && (a == 2)))
        {
            fprintf(stderr, "there's something wrong in the input values\n");
            return 1;
        }
        if ( (ctemperature < -272) || (ctemperature > 60) )
        {
            fprintf(stderr, "there's something strange with the temperature value\n");
            return 1;
        }
        wp = a*64+(a+1)*16-1;
        if ( (ctemperature>15) && (ctemperature<33))
            tp = 255*(1 - a/12+(ctemperature-15)/15);
        else {
            tp = 192 - (10E2*wp)/255.0;
        }
        if (tp<0) tp = 0;
        #ifdef DEBUG
        fprintf(stderr, "Temperature level: %.2f\n", tp);                                
        fprintf(stderr, "Humidity level: %.2f\n", wp);                                
        #endif
        fp = tp - wp;
        if (fp<0) fp = 0;
        #ifdef DEBUG
        fprintf(stderr, "Total weather score is %.2f\n", fp);
        #endif
        if( fp > 178 )
        {
            printf("My friend, but it’s nice weather outside\n");
        } else {
            printf("Could be better weather outside\n");
        }
        PAUSE();
        puts("Bye.");
        return 0;
    } else {
        puts("This program takes two input parameters");
        fprintf(stderr, "usage:%s <temperature (°C)>  <condition[Sun|Clouds|Rain|Ice]>\n", argv[0]);
        return 1;
    }
}

/* functions implementation */
void PAUSE(){
        puts("please, type a key and then enter\n");
        condw = getchar();
}

/* Fahrhenheit to/from celsius degrees conversions 
 * T_C = (T_F - 32) x 5/9
 * T_F = 32 + 9/5 x T_C   
 */

void show_conversions(float ftemp, float ctemp){
    printf("Temperature is %.2f deg. Celsius (%.2f deg. Fahrenheit)\n", ctemp,ftemp );    
}

float f2c(float t_f){
    deg = (t_f - 32) * 5/9;
    return deg;
}

float c2f(float t_c){
    deg = 32 + 9/5 * t_c; 
    return deg;
}
