#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public :
	int id;
	char name[100];
	int age;
};
int main()
{
	Student S1,S2;
	cout<<"Enter student's id:-";
	cin>>S1.id;
	cout<<"Enter Student's Name:-";
	cin>>S1.name;
	cout<<"Enter Student's age:-";
	cin>>S1.age;
	
	cout<<"Enter student's id:-";
	cin>>S2.id;
	cout<<"Enter Student's Name:-";
	cin>>S2.name;
	cout<<"Enter Student's age:-";
	cin>>S2.age;
	
	cout<<"Student's ID:-"<<S1.id<<endl;
	cout<<"Student's Name:-"<<S1.name<<endl;
	cout<<"Student's Age:-"<<S1.age<<endl<<endl;
	
	cout<<"Student's ID:-"<<S2.id<<endl;
	cout<<"Student's Name:-"<<S2.name<<endl;
	cout<<"Student's Age:-"<<S2.age<<endl<<endl;
	
	
}

