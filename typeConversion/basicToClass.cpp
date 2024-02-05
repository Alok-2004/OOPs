//Basic to class is done with the help of constructor function

#include<iostream>
using namespace std;

class Time
{
	private:
		int h,m;
	
	public:
		Time()
		{
			h=m=0;
		}
		
		Time(int t)
		{
			h=t/60;
			m=t%60;
		}
		
		void show_data()
		{
			cout<<h<<" hrs "<<m<<" mins";
		}
};

int main()
{
	int min;
	cout<<"Enter the minutes: "<<endl;
	cin>>min;
	Time T1;
	T1=min;
	T1.show_data();
}