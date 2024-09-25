/* C code by GQ for Code Jam 2024
  	strings and string functions */
#include <stdio.h>
#include <string.h>
	
void main (void)
{
	int index;
 	char astring[81] = "Code Jam C Programming is cool!"; 

	 printf ("The astring we are using is \n   %s \n\n", astring);
	 printf ("astring has %i characters in it. \n\n", strlen(astring));
	 printf("strcmp between astring and something is %i. \n\n", strcmp(astring, "something"));
	 astring[26] = 'f';     
	 astring[27] = 'u';     
	 astring[28]= 'n';     
	 astring[29] = '\0';	
	 printf ("Now astring has the value \n   %s  \n\n\n", astring);
}       	

