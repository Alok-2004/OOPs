// Constructor should also be declasred public to be accessed
#include <iostream>
using namespace std;

class Bike {
public:
    int tyreSize;
    int engineSize;

    // Parameterized constructor
    Bike(int size, int engineSize) {
        cout << "Creation of constructor" << endl;
        this->tyreSize = size;
        this->engineSize = engineSize;
    }
    
    ~Bike()
    {
    	cout<<"Destructor on hua"<<endl;
	}
};


int main() {
    Bike honda(16, 300); // Creating a Bike object with tyre size 16 and engine size 300
    Bike tvs(20, 310);   // Creating a Bike object with tyre size 20 and engine size 310
    return 0;
}

