#include<iostream>
using namespace std;

int main()
{
	int x;
	cout<<"Enter the value of x: ";
	cin>>x;

	int y;
	cout<<"Enter the value of y: ";
	cin>>y;
	
	int *p1 = &x, *p2 = &y;
	
	
	cout<<*p1 + *p2;
}