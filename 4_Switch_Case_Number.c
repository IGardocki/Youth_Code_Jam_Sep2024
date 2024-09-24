/* C code by GQ for Code Jam 2024
print the capital character of the one input  */
       	#include <stdio.h>
	
void main (void)
{
	 int number; 

	 printf ("What number do you want to print the word for?   ");
	 scanf ("%i", &number);
	switch (number)
 	{
		case 1:
			printf ("One \n\n");
			break;
		case 2:
			printf ("Two \n\n");
			break;
/** add more **/
		case 3:
			printf ("Three \n\n");
			break;
		default:
			printf ("\n I don't recognize %i. \n\n", number);
	}
}
