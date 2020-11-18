#include <stdlib.h>
#include <stdio.h>

double point[40]; /* monodimensional points array, max dimension is 40 */

int main()
{
   int index = 0; /* index of the point array */
   double sum = 0.0; /* variable saving the sum of points values */
   double avg; /* variable saving the average of points values */
   int nopoints; /* actual number of points in the array */
   int stdn_fn = 0;
   int ret;
      /* If stdin is the terminal, fileno(stdin) is always 0. */
   if (isatty(stdn_fn))
      /* Tell user to enter data points; maximum = 39.        */
 	  puts("Enter positive data points (-1 to indicate end of list).");  /*this print only in interactive*/
   for(;;){
         /* Read number; check for end of file. */
      ret = scanf("%le", &point[index]);
      if (ret <= 0){
	fprintf(stderr, "input warning\n");
         break;
	}
      if (point[index] == -1){
	fprintf(stderr, "detected end of dataset\n");
	 break;
       }
      sum += point[index];
      ++index;
   }
   nopoints = index; /* save the actual n. of entered points */
   avg = sum / nopoints;
   printf("%d points read.\n", nopoints);
   printf("average = %f\n", avg);
}
