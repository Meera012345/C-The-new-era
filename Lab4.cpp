#include<iostream>
#include<string.h>
using namespace std;

class House
{
	public:
		int h_no;
		int room_size;
		char h_name[100];
		char h_address[100];
};
int main()
{
	House h1;
	cout<<"Enter House No:-";
	cin>>h1.h_no;
	cout<<"Enter Room No:-";
	cin>>h1.room_size;
	cout<<"Enter House Name:-";
	cin>>h1.h_name;
	cout<<"Enter House Address:-";
	cin>>h1.h_address;
	
	cout<<"House NO:-"<<h1.h_no<<endl;
	cout<<"House Name:-"<<h1.h_name<<endl;
	cout<<"House Address:-"<<h1.h_address<<endl;
	cout<<"Room No:-"<<h1.room_size<<endl;
	
	return 0;
}
