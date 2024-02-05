#include<iostream>
using namespace std;

int main()
{
	int x = 4;
	int *p = &x;
	cout<<&x<<endl;  // this will also print the address of x
	cout<<p;  // this will print the address of x which is stored in p
	return 0;
}
