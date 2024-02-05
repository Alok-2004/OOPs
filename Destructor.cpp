#include <iostream>
using namespace std;

class Bike {
public:
    int tyreSize;
    int engineSize;

    
    Bike(int size, int engineSize) 
    {
        cout << "Creation of constructor" << endl;
        this->tyreSize = size;
        this->engineSize = engineSize;
    }
    
    // Destructor is called when object get out of scope
    ~Bike()
    {
    	cout<<"destructor on hua"<<endl;
	}
};

int main() {
    Bike honda(16, 300); 
    Bike tvs(20, 310);   
    return 0;
}