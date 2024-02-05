//int *ptr = NULL;  here ptr is called null pointer
//'/0' is also a character with ASCII value of 0
#include<iostream>
using namespace std;

int main()
{
	int* ptr = NULL; // Reserved value which is 0
	int *ptr1 = 0;
	int *ptr2 = '/0';	
	cout<<ptr;
}
