#include<iostream>
using namespace std;

class Bike
{
	public:
		int tyreSize;
		
		// Default constructor
		Bike (){
			cout<<"Creation of constructor"<<endl;
		}
};

int main()
{
	
	Bike tvs;// Object creation// constructor ko call jayegi
}
