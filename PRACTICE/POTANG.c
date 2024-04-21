#include <stdio.h>

int main (){
	const double rchar = 400;
	const int rmin = 50;
	const double rover = 8;
	
	const double pchar = 25;
	const int pmin = 75;
	const double pover = 4;
	
	const int pminN = 100;
	const double poverN = 2;
	
	int acc, min, hr;
	double amountdue;
	char type;
	
	printf ("Account Number: ");
	scanf ("%d", &acc);
	printf ("Service Code [p/r]: ");
	scanf ("%s", type);
	
	if (type == 'r' || type == 'R')
	{
		printf ("Minutes: ");
		scanf ("%d", min);
		 
			if (min<=rmin)
		 		amountdue = rchar;
			
			else 
		 		amountdue = rchar + (min-rmin) * rover;
		
			printf ("Amount due: %lf", amountdue);
			
		}
		
	else if (type == 'p' || type == 'P'){
		printf ("Time 24format: ");
		scanf ("%d", &hr);
		printf ("Duration in Minutes: ");
		scanf ("%d", &min);
		
			if (hr<19 && hr>5)
				if (min<=pmin)
				amountdue = pchar;
				
				else
				amountdue = pchar + (min-pmin) * pover;
				
			else
			{
				if (min<=pminN)
				amountdue = pchar;
				
				else 
				amountdue = pchar + (min-pminN) * poverN;
				}
				
			printf ("Amount Due: %d", amountdue);
			}
	else 
		printf ("Invalid Service type.");


}

