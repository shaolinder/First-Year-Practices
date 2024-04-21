/* 
	Practice 1
*/

#include <stdio.h>

int main () {
	char first[20], second[20], last[20];
	

	printf ("First Name: ");
	scanf ("%s", first);
	
	printf ("Middle Name: ");
	scanf ("%s", second);
	
	printf ("Lastt Name: ");
	scanf ("%s", last);
	
	printf("\n");
	
	printf("Your complete name is %s %s %s",first,second,last);
	
	printf("\n");
	
	return (0);
	


}

