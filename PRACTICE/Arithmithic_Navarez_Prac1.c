/* 
	Programmer:
	Date:
*/
#include <stdio.h>
int main(){

	int num1,num2,sum=0,diff=0,prod=0,quot=0,rem=0;
	
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	
	sum = num1+num2;
	diff = num1-num2;
	prod = num1*num2;
	quot = num1/num2;
	rem = num1%num2;
	
	printf("\n");
	
	printf("Sum = %d", sum);
	printf("\nDifference = %d", diff);  
	printf("\nProduct = %d", prod);
	printf("\nQuotient = %d", quot);
	printf("\nRemainder = %d", rem);
	
	printf("\n");
	
	return 0;

}


