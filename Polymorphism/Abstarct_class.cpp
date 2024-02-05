// Introduction to abstract class
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class A // Parent class
{
    public:
    int a_ka_public;

    vitual void show() = 0; // Defination of a function
    // Now it will complusory for each child class to have show function otherwise it will give error
};
/*
Pure abstarct class if all function are pur virtual class
i.e vitual void show() = 0;
*/
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
    B thello;
    A hello;
    a->show();
    B naw;
    naw.show();
    return 0;
}
