
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main () {

	int studID, year;
	string name, course;
	double prelim, mid,semi, final, totalscore=0, average=0;
	
	cout<<"Enter Student ID: ";
	cin>>studID;
	cout<<"Name: ";
	cin.ignore();
	getline(cin,name);
	cout<<"Course: ";
	getline(cin,course);
	cout<<"Year: ";
	cin>>year;
	cout<<"4 Major Exams: \n";
	cout<<"\tPrelim: ";
	cin>>prelim;
	cout<<"\tMidterm: ";
	cin>>mid;
	cout<<"\tSemifinal: ";
	cin>>semi;
	cout<<"\tFinal: ";
	cin>>final;
	
	totalscore = prelim + mid + semi + final;
	average = totalscore / 4;
	
	cout<<"\nTotal Score: "<<totalscore;
	cout<<"'\nAverage Score: "<<setprecision(2)<<fixed<<average;
	
		if (average>=70)
			cout<<"\nPASSED";
		else
			cout<<"\nFAILED";
			
	return 0;
		


}

