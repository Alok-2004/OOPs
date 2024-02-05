#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"Constructor of base class"<<endl;
    }

     virtual ~ base(){
        cout<<"Destructor of base class"<<endl;
    }
};

class child: public base{
    public:
    child(){
        cout<<"Constructor of child class"<<endl;
    }

    ~child(){
        cout<<"Destructor of child class"<<endl;
    }
};

/*

Here only destructor of base class is called so to solve this issue we nee
Constructor of base class
Constructor of child class
Destructor of base class

to solve this issue we need use virtual destructor with base class
Constructor of base class
Constructor of child class
Destructor of child class
Destructor of base class

*/

int main(){
    base *p = new child;
    delete p;
    return 0;
}