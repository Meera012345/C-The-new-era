#include<iostream>
#include<string.h>
using namespace std;

class Time
{
	public:
		int hh,mm,ss;
};
int main()
{
	Time t;
	cout<<"Enter time in Seconds:-";
	cin>>t.ss;
	t.hh=t.ss/3600;
	t.mm=(t.ss%3600)/60;
	t.ss=(t.ss%3600)%60;
	cout<<"Time format in HH:MM:SS="<<t.hh<<":"<<t.mm<<":"<<t.ss;
	return 0;
}
