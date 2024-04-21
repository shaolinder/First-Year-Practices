#include <stdio.h>
int computeSum(int n1,int n2);

int main(){
	int num1,num2;
	
	printf ("Number 1: ");
	scanf ("%d", &num1);
	printf ("Number 2: ");
	scanf ("%d", &num2);
	

	printf ("Sum: %d", 	sum = computeSum(num1, num2));
	
	return 0;
}

int computeSum(int n1,int n2){
	int total=0;
	total = n1 + n2;
	
	return total;
}

/*#include <stdio.h>
int computeSum(int n1,int n2);

int main(){
	int num1,num2;
	
	printf ("Number 1: ");
	scanf ("%d", &num1);
	printf ("Number 2: ");
	scanf ("%d", &num2);
	

	printf ("Sum: %d", 	sum = computeSum(num1, num2));
	
	return 0;
}

int computeSum(int n1,int n2){
	
	return n1 + n2;
}

_________
#include <stdio.h>
int computeSum(int n1,int n2);

int computeSum(int n1,int n2){
	int total=0;
	total = n1 + n2;
	
	return total;
}
int main(){
	int num1,num2;
	
	printf ("Number 1: ");
	scanf ("%d", &num1);
	printf ("Number 2: ");
	scanf ("%d", &num2);
	

	printf ("Sum: %d", 	sum = computeSum(num1, num2));
	
	return 0;
}


*/

