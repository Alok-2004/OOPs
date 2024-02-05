#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;

    cin>>a>>b;
    int x = a-b;
    try{
        if(x!=0)  cout<<"Result(a/x) = "<<a/x;
        else{    // Exception Handling
            throw(x);
        }
    }

    catch(int i){ // Catch the execption
        //Handle the exception
        cout<<"Exeption caught: x = "<<x;
    } 
    cout<<endl;
    return 0;
}