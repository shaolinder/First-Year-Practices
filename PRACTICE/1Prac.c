/* 1. Write a C program to accept two integers and check whether they are equal or not.*/


#include <stdio.h>


int main (){
	int a, b;
	
	printf ("Enter 1st number: ");
	scanf ("%d", &a);
	printf ("Enter 2nd number: ");
	scanf ("%d", &b);
	
	if (a>=b)
		printf ("%d & %d are equal", a, b);
	
	else
		printf ("%d & %d are not equal", a, b);
	



}

