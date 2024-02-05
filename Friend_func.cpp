#include<iostream>
#include<string>
using namespace std;


class A{
    int a_private = 10;
    public:
    friend void show();
    void show2()
    {
        cout<<a_private<<endl;
    }
};

void show(A &a)// Its not the part of the class
{
    cout<<a.a_private<<endl;
}

int main()
{
    A a;
    show(&:a);

    // const keyword and have to be declared there and then.
    //const int a = 5; // We cant change the value of a as its fixed
    //a = 10; will give error
    //cout<<a;
    return 0;
}