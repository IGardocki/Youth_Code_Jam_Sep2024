/* C code by GQ for Code Jam 2024
  	my own strings and string functions */
  	
#include <stdio.h>
#include <string.h>
	
void main (void)
{
	int index;
 	char astring[18] = "I have one cat(s)!"; 

	 printf ("The astring we are using is \n   %s \n\n", astring);
	 printf ("astring has %i characters in it. \n\n", strlen(astring));
	 printf("strcmp between astring and cat is %i. \n\n", strcmp(astring, "cat"));
	 astring[7] = 't';     
	 astring[8] = 'w';     
	 astring[9]= 'o';     	
	 printf ("Now astring has the value \n   %s  \n\n\n", astring);
}       
