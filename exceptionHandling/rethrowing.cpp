#include<iostream>
using namespace std;

void divide(double x, double y){
    cout<<"Inside function"<<endl;
    try{
        if(y == 0.0)   throw y;
        else  cout<<"Division = "<<x/y;
    }

    catch(double){
        cout<<"Caught double inside function."<<endl;
        throw;
    }
    cout<<"End of the function"<<endl;
}

int main(){
    cout<<"Insde main"<<endl;
    try{
        divide(10.5, 2.2);
        divide(10.5, 0.0);
    }

    catch(double){
        cout<<"Caught double inide main"<<endl;
    }
    
    cout<<"End of main";
    return 0;
}