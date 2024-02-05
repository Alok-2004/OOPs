// Introduction to vitual class
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A // Parent class
{
    public:
    int a_ka_public;

    void show()
    {
        cout<<"A ka show"<<endl;
    }
};

class B : public A // Child class
{
    public:
    int b_ka_public;
    void show()
    {
        cout<<"par mai tho new generation ka hua na ka show"<<endl; // Its overrinding the funcn of A with itself
    }
};

int main()
{
    // For pointer
    // compiler POV  -  pointer type ka hoag display(parent)
    // compile time binding
    // Runtime time binding if it is vitual function
    // runtime pov -  jiska address hai uska print hoga(child class)

    B thello;
    A *a;
    A hello;
    a = &thello; // pointer of A can store sddress of B
    //thello.A::show(); // Now it will show of base class
    a->show(); // This will show of parent class
                // Bit if it virtual then this will also give child class or runtime binding
    // but this will show of overided func
    B naw;
    naw.show();
    return 0;
}
