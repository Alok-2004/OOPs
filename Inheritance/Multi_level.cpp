// child ka child ka child

#include <iostream>
#include <string>
using namespace std;

//Security cant be downgraded
/*Means we cant make protected to public but can make public to protected*/

class A // Parent class
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

class B : public A // Child class
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

class C : public B // Child class
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
