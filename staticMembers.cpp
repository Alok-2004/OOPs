#include <iostream>
using namespace std;

class Bike {
public:
    static int noOfBike; // Static member variable to count the number of bikes
    int tyreSize;         
    int engineSize;       
    Bike(int size, int engineSize) 
	{
        cout << "Creation of constructor" << endl;
        this->tyreSize = size;
        this->engineSize = engineSize;
    }
    void printDetails() 
	{
        cout << "Tyre Size: " << tyreSize << " Engine Size: " << engineSize << endl;
    }
    
    static void increasenoOfBike()// static function only take static data type and can called using class and object
    {
    	noOfBike++;
	}
    
};

// Whenever we are calling the func print  a new b is created every single time
// So to fix it we declare it as static int = 10;
// now we will get 10,11,12,
void print() {
    static int b = 10;
    cout << b << endl;
    b++;
}

int Bike::noOfBike = 10;// Difination outside of class is important for static data type
int main() {
    // Creating Bike objects with constructor arguments
    Bike honda(16, 300);
    Bike tvs(20, 310);
    cout<<honda.noOfBike<<endl;// static member is for all object i.e for class
    cout<<tvs.noOfBike<<endl;

    // Printing bike details
    honda.printDetails();
    tvs.printDetails();
    
    honda.increasenoOfBike();
    Bike::increasenoOfBike(); 
	cout << Bike::noOfBike << endl;

    
//    print();
//    print();
//    print();

    return 0;
}

