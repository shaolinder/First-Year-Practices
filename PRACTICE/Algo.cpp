#include <iostream.h>
using namespace std;
int main() {
	int num1,num2,sum=0,diff=0,prod=0,quot=0,rem=0;
	
	cout<<"Number 1: ";
	cin>>num1;
	cout<<"Number2: ";
	cin>>num2;
	
	sum = num1 + num2;
	diff = num1 - num2;
	prod = num1 * num2;
	quot = num1 / num2;
	rem = num1 % num2;
	
	cout<<"\n";
	
	
	cout<<"Sum = "<<sum;
	cout<<"\nDifference = "<<diff;
	cout<<"\nProduct = "<<prod;
	cout<<"\nQuotient = "<<quot;
	cout<<"\nRemainder = "<<rem;

	cout<<"\n";
	
	return 0;

}

