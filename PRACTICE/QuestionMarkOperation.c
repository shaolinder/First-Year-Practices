/* Compute the weekly salary of an employee. The regular working per week is 48 hours.
   If the employee will work beyond 48 hours, his/her rate beyond the 48 hours
   will be 50% more than the regualr rate.  
 */
 
 #include <stdio.h>
 int main () {
	
	char name;
	int hw;
	float hr, sal=0;
	
	printf ("Name: ");
	scanf ("%[^\n]s", &name);	 
	printf ("Hours Work: ");
	scanf ("%d", &hw);
	printf ("Hourly Rate: ");
	scanf ("%f", &hr);
	
	//alternative solution is "sal=(hw>=0 && hw<=48)?hr: 48*hr+((hw-48)*hr*1.5
	
	if (hw>=0 && hw<=48)
		sal = hw * hr;

	else
		sal = 48*hr + ((hw - 48) * hr *1.5); 
		
	printf ("Salary: %.2f", sal);

 	return 0;
 }
 

