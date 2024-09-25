/* C code by GQe for Code Jam 2024
  	skip count with a for loop */
#include <stdio.h>
	
void main (void)
{
	int count =0, i; 

	printf ("This program will skip count for you up to 1000.\n\n"
 	        "How much do you want to skip (between 1 and 999)?  ");   /* could add to check input */
 	        
// 	check input
	while(count < 1 || count > 999)
	{
		printf("Please enter number between 1 and 999.   \n\n");
		scanf ("%i", &count);
	}
	
//	skip count to 1000
	printf ("Skip counting up to 1000 by %i-s: \n", count);
	for (i=0;  i<=1000;  i=i+count)
	{
		printf ("   %i  ", i);
  	}
}

