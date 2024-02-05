#include <iostream>
#include <string>
#include <vector>
using namespace std;

class vehicle // Base class, parent class
{
public:
    int tyreSize;
    int engineSize;
    int light;
    string companyName;
    // Member functions are also inheritance
    void show()
    {
        cout << companyName << endl;
    }
};

//Security cant be downgraded
/*Means we cant make protected to public but can make public to protected*/

class Bike : public vehicle // Inherits Vehicle
{
public:
    int handleSize;
};

class Car : public vehicle // Derived class, child class
{
    public:
        int steeringSize;
};

class A
{
    private:
    int a_ka_private; // Private cant be accessed and inherited

    protected:
    int a_ka_protected; // Protected cant be accessed and can be inherited
    
    public:
    int a_ka_public;// Can be inherited and accessed form outside also;
};

class B : public A
{
    public:
    int b_ka_public;
    void show()
    {

    }
};

int main()
{
    Bike honda;
    honda.handleSize = 5;
    honda.engineSize = 200;
    honda.light = 1000;
    honda.companyName = "Honda";
    honda.show();
    return 0;
}
