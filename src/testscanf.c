#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void PAUSE();
void fpurge_stdin();
int isanumber(char s[]);

/* this example accepts a list of positive integers
 and computes their sum and average the list can
 be read from stdin (keyboard or file redirection)*/
char temp[1024];/*temp. string for read numb. */
long int point[40]; /* monodimensional points array, max dimension is 40 */
unsigned char w=0;  /* w>0 if you got warnings */
unsigned long count=0;
unsigned char skip=0;

int main(int argc, char **argv)
{
   int index = 0;    /* index of the point array */
   double sum = 0.0; /* variable saving the sum of points values */
   double avg;       /* variable saving the average of points values */
   int nopoints;     /* actual number of points in the array */
   int stdn_fn = 0;
   long int ret;
      /* If stdin is the terminal, fileno(stdin) is always 0. */
    #ifdef __GNUC__
    if (isatty(stdn_fn))
    #endif
      /* Tell user to enter data points; maximum = 39. */
 	  fprintf(stderr, "%s: Enter positive data points (-1 to indicate end of list).\n", argv[0]);  /*this print only in interactive*/
   for(;;){ /* infinite loop, flow interrupted only by break;*/
        skip=0;
        #ifdef DEBUG
        fprintf(stderr, "%s: processing attempt point[%li] START \n", argv[0], count);
        #endif
         /* Read number; check for end of file. */
        /* read before as a string */
        ret = scanf("%s", temp);
        /* convert into integer if it is a correct string */
        #ifdef DEBUG
        fprintf(stderr, "%s: length of the scanned string is %li\n", argv[0], strlen(temp));
        #endif
        if ( isanumber(temp) ){ /* if the string is a number */
            #ifdef DEBUG
            fprintf(stderr, "%s: %s can be accepted as number \n", argv[0], temp);
            #endif
            point[index] = atoi(temp);
        } else { /* reject otherwise */
            fprintf(stderr, "%s: warning, %s cannot be accepted as a number \n", argv[0], temp);
            point[index] = -2;
            skip=1;
        }

        #ifdef DEBUG
        fprintf(stderr, "pv=%s;av=%li ", temp, point[index]);
        #endif
        if (ret <= 0){
            #ifdef DEBUG
            fprintf(stderr, "%s: warning, scanf returned %li\n", argv[0], ret);
            fprintf(stderr, "%s: input warning, maybe you didn't enter '-1'?\n", argv[0]);
            #endif
            w++;
            break;
        }

        if (point[index] == -1){
            #ifdef DEBUG
            fprintf(stderr, "\n%s: detected end of dataset\n", argv[0]);
            #endif
            break;
        }  
        
        /* accept only positive integers */
        if ((point[index] >= 0)&&(skip==0)){
            sum += point[index];
            ++index;
        } else if(skip==1){
            #ifdef DEBUG
            fprintf(stderr, "%s: warning, skipping negative point value %li\n", argv[0], point [index]);
            #endif
            w++;
        }
        #ifdef DEBUG
        fprintf(stderr, "\n%s: processing point[%li] STOP \n", argv[0], count);
        #endif
        count++; /* increment the acquisitions counter*/
   }
   nopoints = index; /* save the actual n. of entered points */
   if (nopoints > 0)
        avg = sum / nopoints;
   else {
        #ifdef DEBUG
        fprintf(stderr, "\n%s: warning, attempt to divide by 0 \n", argv[0]);
        #endif
        avg = 0;
        w++;
   }

   fprintf(stderr, "%s: you got %d warnings\n", argv[0], w);
   fprintf(stderr, "%s: valid points read: %d \n",argv[0] , nopoints);
   fprintf(stderr, "%s: sum: %f \n",argv[0], sum);
   fprintf(stderr, "%s: average: %f\n",argv[0], avg);
   fprintf(stderr, "%s: now printing:\n",argv[0] );
   fprintf(stderr, "%s: #points\tsum\taverage\n",argv[0] );
    printf("%d\t%f\t%f\n",nopoints,sum,avg);
}

void fpurge_stdin(){
#ifdef __DEBUG__
    __fpurge(stdin);
#else
	fflush(stdin);
#endif
}

void PAUSE(){
    char c[20];
    printf("Please press a key and then enter\n");
    fpurge_stdin();
    if (scanf("%s", c) <=0) fprintf(stderr, "warning in acquiring data\n") ;
}

int isanumber(char s[] ){
        unsigned int good_number=0;
        unsigned char lc;
        #ifdef DEBUG
        fprintf(stderr, "isanumber() string to check has lenght %c\n", strlen(s));
        fprintf(stderr, "isanumber() first character in string is %c\n", s[0]);
        #endif
        lc=0;
        /* if first char is a number or '-' ok */
        if ( ((s[lc] >= 48) && (s[lc] <= 57)) || (s[lc] == 45) ) 
                good_number = 1;
        else
                good_number = 0;            
        lc++;
        #ifdef DEBUG
        fprintf(stderr, "isanumber() following chars in string ");
        #endif
        while(lc<strlen(s)){
        /* following numbers must be numbers */
            if ( (s[lc] < 48) || (s[lc] > 57) ){
                good_number = 0;
                return good_number;
            } else {
                good_number = 1;            
            }
                
        #ifdef DEBUG
            fprintf(stderr, "%c ", s[lc]);
        #endif
                lc++;
        }
        
        #ifdef DEBUG
        fprintf(stderr, "\nisanumber() returning value %i\n", good_number);
        #endif
        return good_number;
}
