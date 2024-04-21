#include <stdio.h>

int main (){
	int studID, year;
	char name, course;
	float prelim, mid, semi, final, totalscore=0, average=0;
	
	printf ("Enter ID: ");
	scanf ("%d", &studID);
	printf ("Name: ");
	scanf (" %[^\n]s", &name);
	printf ("Course: ");
	scanf (" %[^\n]s", &course);
	printf ("Year: ");
	scanf ("%d",&year);
	printf ("4 Major Exams: \n");
	printf ("\tPrelim: ");
	scanf ("%f",&prelim);
	printf ("\tMidterm: ");
	scanf ("%f",&mid);
	printf ("\tSemifinal: ");
	scanf ("%f", &semi);
	printf ("\tFinals: ");
	scanf ("%f",&final);
	
	totalscore = prelim + mid + semi + final;
	average = totalscore/4;
	
	printf ("\nTotal Score: %.2f", totalscore);
	printf ("\nAverage Score: %.2f\n", average);
	
	if (average >= 70)
		printf ("\nYOU PASSED :)\n");
	else
		printf ("\nYOU FAILED :<\n");
	

	
	return 0;
	


}

