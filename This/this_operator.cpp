#include <iostream>

using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val) {
        this->value = val;
    }

    // A member function that modifies the value using this->
    void updateValue(int newValue) {
        this->value = newValue; // Using this-> to access the member variable
    }

    // A member function that displays the value using this->
    void displayValue() {
        cout << "Value stored in this object: " << this->value << endl;//// A member function that displays the value using (*this).x
    }
};

int main() {
    MyClass obj(42);
    obj.displayValue(); // Display the initial value

    obj.updateValue(100); // Call the member function to update the value
    obj.displayValue();   // Display the updated value

    return 0;
}

