/* C code by GQ for Code Jam 2024
  	     counting with while */
#include <stdio.h>
	
void main (void)
{
	int count = 0, i=1; 

	printf ("This program will count up for you.\n\n"
 	        "What number do you want to count up to? \n");
	while (count <= 0)
	{
		printf ("Please enter a positive integer:   ");
		scanf ("%i", &count);
	}
	printf ("Counting up to %i: \n", count);
	while (i <=  count)
	{
		printf ("   %i  ", i);
		i = i + 1;
  	}
  	
	// count down from the integer value
	printf("\n");
	printf ("Counting down from %i: \n", count);
	i = count;
	while (i >= 1)
	{
		printf ("   %i  ", i);
		i = i - 1;
  	}
}    
