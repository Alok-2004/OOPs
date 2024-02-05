#include<iostream>
#include<string>
using namespace std;

class happy
{
    protected:
        happy()
        {
            cout<<"Hii how are you"<<endl;
        }
};

class sad : private happy{
    protected:
        sad(){
            cout<<"I am good"<<endl;   
        }
};

class angry : protected happy{
    public:
    angry()
    {
        cout<<"I am fine";
    }
};

int main()
{
    angry l1;
    sad l2;
}