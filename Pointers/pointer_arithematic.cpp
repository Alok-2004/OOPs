#include<iostream>
using namespace std;

int main()
{
	int x = 7, y = 4;
	int *ptr = &x;
	int *ptr1 = &y;

	cout << ptr << endl; // Output: 0x6ffe14
	ptr = ptr + 1; // Incrementing the pointer by 1, considering the size of int.
	cout << ptr << endl; // Output: 0x6ffe18

	cout << *ptr1 << endl; // Output: 4
	*ptr = *ptr1 + 1;// y++ or (*ptr)++  Assigning the value of ptr1 plus 1 to the memory location pointed by ptr.
	cout << *ptr1 << endl; // Output: 5
	
	return 0;
}

