	/* C code by GQ for Code Jam 2024
  	calculate circumference given radius  */
    #include <stdio.h>
	#define  pi  3.14 

	void main (void)
	{
	 double radius; 

	 printf ("What is the length of the radius in cm?   ");
	 scanf ("%lf", &radius);
		if (radius <= 0)
		 	printf ("The radius you entered, %lf, is not valid. It must be positive. \n\n", radius);
		else {
			printf ("The circumference of your circle with radius %.2lf cm is %.2lf cm. \n\n", radius, 2*pi*radius );
		
			//	Add another printf to calculate and show the area of the circle (2*pi*radius*radius).
			printf ("The area of your circle with radius %.2lf cm is %.2lf cm. \n\n", radius, 2*pi*radius*radius );
		}
	}       	     
	
	
