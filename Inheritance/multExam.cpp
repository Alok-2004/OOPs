#include<iostream>
#include<string>
using namespace std;

class happy
{
    public:
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

        protected:
        void prt()
        {
            cout<<"Hello world";
        }

        public:
        void callPrt()
        {
            prt();
        }
};

class angry : public sad{
    public:
    angry()
    {
        cout<<"I am fine"<<endl;
    }
};

int main()
{
    angry l1;
    l1.callPrt();
}