/* C code by GQ for Code Jam 2024
  	find number of F and T in Array */
#include <stdio.h>
	
void main (void)
{
	 int i, numT=0, numF=0;
	
 	char test [10] = {'T', 'T', 'F', 'T', 'F', 'F', 'T', 'F', 'T', 'T'};

	printf ("This program will find the number of Ts and Fs in the array.\n\n");

	for (i=0;  i<=10;  i=i+1)
	{
		if(test[i] == 'T'){
			numT += 1;
		}
		
		if(test[i] == 'F'){
			numF += 1;
		}
  	}
	printf ("\nThere are %i Ts, and %i Fs in the test array. \n\n", numT, numF ); 
}       
