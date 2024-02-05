6// Multiple Base class of single derived class

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Security cant be downgraded but cant be upgarded
/*Means we cant make protected to public but can make public to protected*/

class A // Base class
{
    private:
    int a_ka_private; // Private cant be accessed and inherited

    protected:
    int a_ka_protected; // Protected cant be accessed and can be inherited
    
    public:
    int a_ka_public;// Can be inherited and accessed form outside also;

    A()
    {
        cout<<"A ka constructor"<<endl;
    }
};

class B // Base class
{
    public:
    int b_ka_public;
    void show()
    {

    }

    B()
    {
        cout<<"B ka constructor"<<endl;
    }
};

class C : public B, public A // Child class(Inheriting two parent class)
{
    public:
    C()
    {
        cout<<"C ka constructor"<<endl;
    }
};

int main()
{
    C hello;
    hello.a_ka_public;
    hello.b_ka_public;
    return 0;
}
