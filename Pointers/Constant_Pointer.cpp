#include<iostream>
using namespace std;
int main()
{
	int var1 = 60, var2 = 0;
    int *const ptr = &var1;
    //ptr = &var2;//Error i.e we cant change value of 
    cout<<*ptr<<" ";
    *ptr=*ptr+1;
    cout<<*ptr;
    return 
}
