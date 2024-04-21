#include <stdio.h>
int main () {

	int empid, hwork;
	char name, pos;
	float hrate, sal=0;
	
	printf ("Employee ID: ");
	scanf ("%d", &empid);
	printf ("Name: ");
	scanf ("%s", &name);
	printf ("Position: ");
	scanf ("%s", &pos);
	printf ("Hours Worked: ");
	scanf ("%d", &hwork);
	printf ("Hourly Rate: ");
	scanf ("%f",&hrate);
	
	
	sal = hwork * hrate;
	
	printf ("\nSalary: %.2f",sal);
	
	return 0; 
	
	

}

