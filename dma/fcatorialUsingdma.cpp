#include<iostream>
using namespace std;


int fact(int n, int p)
{
	if(n == 1) return p;
	else
	{
		while(n>1)
		{ 
			p = p * (n);
			n = n - 1;
		}
	}
	return p;
}

int main()
{
	int *a = NULL;
	
	a = new int;
	
	if(a==NULL)
	{
		cout<<"Memory not allocted.";
		exit(1);
	}
	
	cin>>*a;
	int pro = 1;
	cout<<"Factorial is : "<<fact(*a,pro);
	return 0;
}