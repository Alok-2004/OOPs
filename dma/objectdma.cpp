// Search record of a student by allocating dma to array of a object

#include <iostream>
#include <string>
using namespace std;

class Student {
    
    int id;
    string name;
    
    public:
        void getelement() {
            cout<<"Enter the id number: ";
            cin>>id;

            cout<<"Enter the name of the student: ";
            cin.ignore();
            getline(cin, name);
        }

        void printelement() {
            cout<<"Id number: "<< id <<" Name: " << name << endl;
        }

        void searchStudent(Student *c1, int size){
            int target;
            int k = -1;
            cout<<"Enter the id of target student:"<<endl;
            cin>>target;

            for (int i = 0; i < size; i++) {
            if(c1[i].id == target){
            k = i;
            break;
            }
            }

            if(k == -1){
            cout<<"Student not found";
            }else{
            cout<<"Target student:"<<endl;
            c1[k].printelement();
            }
        }
};


int main() {
    Student* c1;
    int size = 3;
    c1 = new Student[size];

    for (int i = 0; i < size; i++) {
        cout << "Data of the student " << i + 1 << endl;
        c1[i].getelement();
        cout<<endl;
    }

    cout<<endl<<endl;

    c1->searchStudent(c1,size);
    delete[] c1;

    return 0;
}
