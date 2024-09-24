/* C code by GQe for 
Code Jam 2024;  read values into variables, d=rt  */
#include <stdio.h>

void main (void)
{
//	double rate, time; 
//
//	printf ("How fast did you travel in mph?   ");
//	scanf ("%lf", &rate);
//	printf ("How many hours did you travel?  ");
//	scanf ("%lf", &time);
//	printf ("You travel for %.1lf miles when you travel at %.2lf mph for %lf hours. \n\n\n", rate*time,   rate,   time);  
	
	
//	Add more printf and scanf lines to read in the length and width of a rectangle
// and print out the volume and then the perimeter of the rectangle.
	double width, height; 

	printf ("What is your rectangle width?   ");
	scanf ("%lf", &width);
	printf ("What is your rectangle height?  ");
	scanf ("%lf", &height);
	printf ("Your rectangle area is %.1f and your perimeter is %.2f \n\n\n", width*height, width*2 + height*2); 
	
	printf(" "); //spacing to make rectangle look right
//	prints width of rectangle
	int i;
	for(i = 0; i < width; i++){
		printf("_");
	}
	printf("\n");
	

//	prints bars for height
	for(i = 0; i < height; i++){
		printf("|");
		
		int j;
		
		for(j = 0; j < width; j++){
			printf(" ");
		}
		
		printf("|\n");
	}
	
	printf(" ");
// prints bottom of rectangle
	for(i = 0; i < width; i++){
		printf("_");
	}
	printf("\n");
	
}       	     

