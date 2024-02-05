// Its used to store address of a pointer in the same way
// we can store triple pointer 
#include<iostream>
using namespace std;

int main()
{
	int x = 79;
	int *ptr = &x;
	int **p = &ptr;
	
	cout<<x<<endl;      // 79
	cout<<*ptr<<endl;   // 79
	cout<<**p<<endl;    // 79
	
	cout<<&x<<endl;    //0x6ffe14
	cout<<ptr<<endl;   //0x6ffe14
	cout<<*p<<endl;    //0x6ffe14
}
