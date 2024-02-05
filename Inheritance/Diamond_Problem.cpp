#include <iostream>

using namespace std;

class A // Parent class
{
    private:
    int a_ka_private;

    protected:
    int a_ka_protected; 
    
    public:
    int a_ka_public;

    A()
    {
        cout<<"A ka constructor"<<endl;
    }
};

class B : virtual public A // Child class
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

class C : virtual public A // Child class
{
    public:
    int ad;
    C()
    {
        cout<<"C ka constructor"<<endl;
    }
};

class D : public B, public C
{
    public:
    D()
    {
        cout<<"D ka constructor"<<endl;
    }
};

/*
A ka constructor
B ka constructor
A ka constructor
C ka constructor
D ka constructor

Here is the issue A is bieng called two time

And the solution is making virtual public
syntax:- class c: virtual public A  and class B : virtual public class B
A ka constructor
B ka constructor
C ka constructor
D ka constructor
*/
int main()
{
    D hello;
    //hello.a_ka_public;
    //hello.b_ka_public;
    return 0;
}
