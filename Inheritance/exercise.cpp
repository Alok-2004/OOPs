#include<iostream>
#include<string>
using namespace std;

class happy
{
    public:
        happy()
        {
            cout<<"Hii how are you"<<" class A"<<endl;
        }
};

class sad : protected happy{
    protected:
        sad(){
            cout<<"I am good"<<" class B"<<endl;   
        }
};

class noem{
    public:
    void pr()
    {
        cout<<"Hello world"<<" class c"<<endl;
    }
};

class angry : protected sad,public noem{
    public:
    angry()
    {
        cout<<"I am fine"<<" class D"<<endl;
    }
};

int main()
{
    angry l1;
    cout<<endl<<endl;
    l1.pr();
}