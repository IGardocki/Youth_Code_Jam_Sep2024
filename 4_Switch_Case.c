/* C code by GQ for Code Jam 2024
print the capital character of the one input  */
       	#include <stdio.h>
	
void main (void)
{
	 char letter; 

	 printf ("What lower case character do you want to capitalize?   ");
	 scanf ("%c", &letter);
	switch (letter)
 	{
		case 'a':
			printf ("\n The capital of a is A. \n\n");
			break;
		case 'b':
			printf ("\n The capital of b is B. \n\n");
			break;
/** add more **/
		case 'c':
			printf ("\n The capital of c is C. \n\n");
			break;
		case 'g':
			printf ("\n The capital of g is G. \n\n");
			break;
		case 'q':
			printf ("\n The capital of q is Q. \n\n");
			break;
		default:
			printf ("\n I don't recognize %c. \n\n", letter);
	}
}
