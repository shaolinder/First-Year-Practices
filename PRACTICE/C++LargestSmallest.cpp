#include <iostream>
using namespace std;

int main (){
	int num1, num2, num3, num4, num5;
	
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	cout<<"Enter number 3: ";
	cin>>num3;
	cout<<"Enter number 4: ";
	cin>>num4;
	cout<<"Enter number 5: ";
	cin>>num5;
	
			
	if (num1<num2 && num1<num3 && num1<num4 && num1<num5)
		cout<<"Smallest: "<<num1<<endl;
	else if (num2<num3 && num2<num4 && num2<num5)
		cout<<"Smallest: "<<num2<<endl;
	else if (num3<num4 && num3<num5)
		cout<<"Smallest: "<<num3<<endl;
	else if (num4<num5)
		cout<<"Smallest: "<<num4<<endl;
	else
		cout<<"Smallest: "<<num5<<endl;
	
	if (num1>num2 && num1>num3 && num1>num4 && num1>num5)
		cout<<"Largest: "<<num1<<endl;
	else if (num2>num3 && num2>num4 && num2>num5)
		cout<<"Largest: "<<num2<<endl;
	else if (num3>num4 && num3>num5)
		cout<<"Largest: "<<num3<<endl;
	else if (num4>num5)
		cout<<"Largest: "<<num4<<endl;
	else
		cout<<"Largest: "<<num5<<endl;
	
		


	
	return 0;
	


}

