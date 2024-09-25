/* C code by GQ for Code Jam 2024
  	an array of scores to add and average */
#include <stdio.h>
	
void main (void)
{
	int i;
 	double sum=0, scores[5] = { 98.6, 100.0, 80.5, 89.0, 99.0 }; 

	printf ("This program will add up and average your scores.\n\n");
	printf ("Your scores are ");
	for (i=0;  i<=4;  i=i+1)
	{
		printf ("  %lf  ", scores[i] );
		sum = sum + scores[i];      /* add next value to sum */
  	}
	printf ("\nThe sum of your scores is %.2lf and the average is %.2lf. \n\n", sum, sum/3.0 ); 
}       
