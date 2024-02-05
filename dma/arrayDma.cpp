#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int *arr, *tar;
    int n = 5;

    arr = new int[n];
    tar = new int;
    //average = new int;
    if(arr == NULL || tar == NULL)
    {
        cout<<"Problem in memory allocation";
        exit(1);
    }
    cout<<"Enclater the elements"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>*(arr+i);
    }

    cout<<"Enter the traget element: ";
    cin>>*tar;

    bool flag = false;
    // for(int i = 0; i<n; i++)
    // {
    //     cout<<arr[i]<<" ";
    //     //*sum = *sum + arr[i];
    // }

    
    for(int i = 0; i<n; i++)
    {
        if(*(arr + i) == *tar)   flag = true;
    }
    if(flag == false)  cout<<"Element not found";
    else cout<<"Element found";

    //arr[i] == *(arr+i)

    // cout<<endl<<"Sum is "<<*sum;
    // cout<<endl<<"Average is "<<*sum / n;
    delete arr;
    delete tar;
    return 0;
}
