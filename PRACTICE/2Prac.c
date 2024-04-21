/*2. Write a C program to check whether a given number is even or odd.c*/
#include <stdio.h>

int main (){
	int num;
	
	printf ("Enter a number: ");
	scanf ("%d", &num);
	
	if(num%2 ==0)
		printf ("%d is even.", num);
	else
		printf ("%d is odd.", num);


}

