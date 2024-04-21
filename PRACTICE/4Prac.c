/*4. Write a C program to find whether a given year is a leap year or not.*/

#include <stdio.h>

int main(){
	int a;
	
	printf ("Enter year: ");
	scanf ("%d", &a);
	
	if (a%400==0)
		printf ("%d is a leap year", a);
	else if (a%4==0)
		printf ("%d is a leap year", a);
	else
		printf ("%d is not a leap year", a);


}

