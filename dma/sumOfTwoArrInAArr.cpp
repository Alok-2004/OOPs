#include<iostream>
using namespace std;

class sum
{
    double *a1;
    double *a2;
    double *a3;
    int *size;

    public:

    sum()
    {
        size = new int;
        a1 = new double[*size];
        a2 = new double[*size];
        a3 = new double[*size];
    }

    void getElement()
    {
        cout<<"Enter the size of elements:"<<endl;
        cin>>*size;

        cout<<"Enter the elements in 1st array:"<<endl;
        for (int i = 0; i < *size; i++) {
            cin >> a1[i];
        }

        cout<<"Enter the elements in 2nd array:"<<endl;
        for (int i = 0; i < *size; i++) {
            cin >> a2[i];
        }

        cout<<"Elements are:"<<endl;
        for (int i = 0; i < *size; i++) {
            cout<<a1[i]<<" ";
        }

        cout<<endl;
        for (int i = 0; i < *size; i++) {
            cout<<a2[i]<<" ";
        }
        cout<<endl;
    }

    void sumArray()
    {
        

        cout<<"New array:"<<endl;
        for (int i = 0; i < *size; i++) {
            a3[i] = a1[i] + a2[i];
        }

        for (int i = 0; i < *size; i++) {
            cout<<a3[i]<<" ";
        }
    }
};

int main()
{
    sum c1;
    c1.getElement();
    c1.sumArray();

    return 0;
}