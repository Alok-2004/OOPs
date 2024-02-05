#include<iostream>
#include<stdlib.h>

using namespace std;

class dma
{
    int *arr;
    int size;
    int index = -1;
    public:
        void getData(int n)
        {
            size = n;
            arr = new int[size];

            cout<<"Enter the element : "<<endl;
            for(int i = 0; i<size; i++)
            {
                cin>>*(arr + i);
            }
        }

        void showData()
        {
            cout<<"Element are: ";
            for(int i = 0; i<size; i++)
            {
                cout<<*(arr + i)<<" ";
            }
            cout<<endl;
        }

        void checkAndDel(int m)
        {
            bool flag = false;
            for(int i = 0; i<size; i++)
            {
                if(arr[i] == m){
                    index = i;
                    flag = true;
                    break;
                }
            }
                if(flag == false)  cout<<"Element doesnt exists.";
                else
                {
                    for(int i = index; i<size-1; i++)
                    {
                        arr[i] = *(arr + i + 1);
                    }
                    size--;
                    cout<<"New array is:"<<endl;
                    for(int i = 0; i<size; i++)
                    {
                        cout<<*(arr + i)<<" ";
                    }
                    cout<<endl;
                }
            return;
        } 

        ~dma()
        {
            delete []arr;
            cout<<"Memory deallocted";
        }

};



int main()
{
    dma c1;
    int n;
    cout<<"Enter the size of element: "<<endl;
    cin>>n;
    c1.getData(n);
    c1.showData();

    int tar;
    cout<<"Enter the element to be deleted."<<endl;
    cin>>tar;
    c1.checkAndDel(tar);
}