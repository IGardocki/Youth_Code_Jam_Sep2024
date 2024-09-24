	/* C code by GQ for Code Jam 2024
  	calculate circumference given radius  */
    #include <stdio.h>
	#define  pi  3.14 

/* Then, create a File | New | Source File and ask for the length, width and height of a box. 
If the side lengths are all positive, calculate the volume.  Calculate the surface area as well, if you like. 
Remember to save, compile, and run and show one of us the volume output.*/

	void main (void)
	{
	 	double length; 
	 	printf ("What is the length of the box in cm?   ");
	 	scanf ("%lf", &length);
	 
		double width; 
	 	printf ("What is the width of the box in cm?   ");
	 	scanf ("%lf", &width);
	 	
		double height; 
	 	printf ("What is the height of the box in cm?   ");
	 	scanf ("%lf", &height);	 	
	 	
		if (length <= 0 || width <= 0 || height <= 0)
		 	printf ("All values must be positive. \n\n");
		else {
//			get box area
			printf ("The volume of your box is %.2f cubic cm. \n\n", length*width*height);
//		get box SA
			printf ("The surface area of your box is %.2f sq cm. \n\n", 2*(length*width + length*height + height*width));
		}
	}     
