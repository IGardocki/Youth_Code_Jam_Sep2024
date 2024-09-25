/* C code by GQ for Code Jam 2024
  	a function to square a value */
#include <stdio.h>

	
/* squares the input value – we could do lots more */
double square (double number)
{
	return (number * number); 
}

//Add a function to cube the input value, and call it from main and print the value.
double cube (double number)
{
	return (number * number * number); 
}

double polynomial (double number)
{
	return (number*number + 2 * number + 5); 
}

void main (void) 
{
	double num = 0;  

	printf ("What number would you like to square?   ");
	scanf ("%lf", &num);
	printf ("\nThe square of %.3lf is %.3lf.  \n\n", num, square(num) ); 
	
	printf ("\nThe cube of %.3lf is %.3lf.  \n\n", num, cube(num) ); 
	printf ("\nThe random polynomial of %.3lf is %.3lf.  \n\n", num, polynomial(num) );
}       
