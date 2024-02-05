#include<iostream>
using namespace std;

class item
{
	private:
		static int nums; // without intialization its value is 0
		float cost;
	public:
		void getdata()
		{
			cout<<nums<<endl;
			cout<<cost<<endl;
		}

		void setdata(float b);
		
		static void printStatic() // Can be called using class and object
		{
			cout<<nums<<endl;
			nums++;
		}
};

inline void item::setdata(float b)
{
	cost = b;
	nums++;
}

int item::nums;// Defination outside of class is impotant

int main()
{
	item i1,i2;
	
	i1.printStatic(); // 1 but print 0
	
	item::printStatic();//2 but print 1
	
	i1.setdata(12.6);
	i1.getdata();// output will 3,12.6
	
	i2.setdata(2.6);
	i2.getdata();// output will be 4,2.6
	
	return 0;
}
