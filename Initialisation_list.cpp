#include <iostream>
using namespace std;

class Bike {
public:
    int tyreSize;
    int engineSize;

    Bike(int size, int eS) : tyreSize(size), engineSize(eS)
    {
    	cout<<"Hello"<<endl;
	}
    
    ~Bike()
    {
    	cout<<"destructor is on"<<endl;
	}
};


int main() 
{
    Bike honda(16, 300); 
    Bike tvs(20, 310);   
    return 0;
}