#include <iostream.h>
using namespace std;

int main () {

	int empid, hwork;
	string name, pos;
	float hrate, sal=0;
	
	cout<<"Employee ID: ";
	cin>>empid;
	cout<<"Name: ";
	cin>>name;
	cout<<"Position: ";
	cin>>pos;
	cout<<"Hours Worked: ";
	cin>>hwork;
	cout<<"Hourly Rate: ";
	cin>>hrate;
	
	
	sal = hwork * hrate;
	
	cout<<"Salary: "<<sal;
	
	return 0; 
	
	

}

