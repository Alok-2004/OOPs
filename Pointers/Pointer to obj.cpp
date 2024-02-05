#include<iostream>
#include<string>

using namespace std;

class example
{
	public:
		int age;
		string name;
};

int main()
{
	example o1;
	example *ptr;
	
	ptr = &o1;
	
	//(*ptr).age = 24;
	(*ptr).name = "Hello";// we are using brackets because . has more priority than *
	ptr->age = 24;
	cout<<(*ptr).name<<endl;// this is also true
	cout<<ptr->age;
	
}
