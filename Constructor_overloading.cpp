#include <iostream>
using namespace std;

class Bike {
public:
    int tyreSize;         
    int engineSize;       

    // Parameterized constructor with two arguments
    Bike(int size, int eS) : tyreSize(size), engineSize(eS) {
        cout << "Constructor with size and engineSize" << endl;
    }
    
    // Parameterized constructor with one argument
    Bike(int eS) : tyreSize(18), engineSize(eS) {
        cout << "Constructor with only engineSize" << endl;
    }
    
    void printDetails() {
        cout << "Tyre Size: " << tyreSize << " Engine Size: " << engineSize << endl;
    }
    
    void increasenoOfBike() {
        noOfBike++;
    }

    int noOfBikeValue() {
        return noOfBike;
    }

private:
    static int noOfBike;
};

// Initialize static member variable
int Bike::noOfBike = 10;

int main() {
    // Creating Bike objects using constructor overloading
    Bike honda(16, 300); // Calls the first constructor
    Bike tvs(310);       // Calls the second constructor
    
    // Accessing and printing static member variable using member function
    cout << "No. of Bikes: " << honda.noOfBikeValue() << endl;
    cout << "No. of Bikes: " << tvs.noOfBikeValue() << endl;

    // Printing bike details
    honda.printDetails();
    tvs.printDetails();
    
    // Calling the member function to increase the bike count
    honda.increasenoOfBike();
    tvs.increasenoOfBike(); 
    cout << "No. of Bikes: " << honda.noOfBikeValue() << endl;

    return 0;
}

