/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class student
{
    char name[50];
    int rollno;
    float marks;
    public:
    void getinfo()
    {
        cout<<"Enter name=";
        gets(name);
        cout<<"Enter Roll no=";
        cin>>rollno;
        cout<<"Enter Marks=";
        cin.ignore();
        cin>>marks;
    }
    void putinfo()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Rollno="<<rollno<<endl;
        cout<<"Marks="<<marks<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.getinfo();
    fstream fobj;
    fobj.open("nn.txt",ios::out|ios::binary);
    fobj.write((char*)&s1,sizeof(s1));
    fobj.close();

    fobj.open("nn.txt",ios::in|ios::binary);
    fobj.read((char*)&s2,sizeof(s2));
    s2.putinfo();
    fobj.close();
    return 0;
}
*/

/*
#include<iostream> 
#include<fstream> 
using namespace std; 
class Employee 
{ 
	private: 
	int emp_code; 
	char name[20]; 
	int hra; 
	int da; 
	int ta; 
	public: 
	void read_data() 
	{ 
		cout<<"\n\n Enter the employee code:"; 
		cin>>emp_code; 
		cout<<"\n\n Enter the name of the employee:"; 
		cin>>name; 
		cout<<"\n\n Enter the HRA,DA and TA:"; 
		cin>>hra>>da>>ta; 
	} 
	void show_data() 
	{ 
		cout<<"\n\n EMP CODE: "<<emp_code; 
		cout<<"\n\n NAME: "<<name; 
		cout<<"\n\n HRA,DA and TA: "<<hra<<"\t"<<da<<"\t"<<ta; 
	}	 
}; 

int main() 
{ 
	fstream FILE; 
	Employee e[3],d[3]; 
	int i; 
	FILE.open("employee1.txt",ios::out|ios::binary); 
	cout<<"\n Enter the details of three employees"; 
	cout<<"\n---------------------------------------"; 
	for(i=0;i<3;i++) 
	{ 
	e[i].read_data(); 
	FILE.write((char *)&e[i],sizeof(e[i])); 
	} 
	FILE.close(); 
	FILE.open("employee1.txt",ios::in|ios::binary); 

	for(i=0;i<3;i++) 
	{ 
		FILE.read((char*)&d[i],sizeof(d[i])); 
		d[i].show_data(); 
	} 
	FILE.close(); 
	return 0; 
}
*/

/*
//Random access-Reading any particular object(or record) from the file 
#include<iostream> 
#include<fstream> 
using namespace std; 
class Employee 
{ 
private: 
int emp_code; 
char name[20]; 
int hra; 
int da; 
int ta; 
public: 
void read_data() 
{ 
cout<<"\n\n Enter the employee code:"; 
cin>>emp_code; 
fflush(stdin); 
cout<<"\n\n Enter the name of the employee:"; 
cin>>name; 
cout<<"\n\n Enter the HRA,DA and TA:"; 
cin>>hra>>da>>ta; 
} 
void show_data() 
{ 
cout<<"\n\n EMP CODE: "<<emp_code; 
cout<<"\n\n NAME: "<<name; 
cout<<"\n\n HRA,DA and TA: "<<hra<<"\t"<<da<<"\t"<<ta; 
} 
}; 
int main() 
{ 
fstream FILE; 
Employee e; 
int no; 
FILE.open("employee1.txt",ios::in|ios::binary); 
cout<<"\n Enter the object whose record has to be displayed:"; 
cin>>no; 
int location=(no-1)*sizeof(e); 
FILE.seekg(location); 
FILE.read((char*)&e,sizeof(e)); 
e.show_data(); 
}
*/

#include<iostream> 
#include<fstream> 
using namespace std; 
class Employee 
{ 
private: 
int emp_code; 
char name[20]; 
int hra; 
int da; 
int ta; 
public: 
void read_data() 
{ 
cout<<"\n\n Enter the employee code:"; 
cin>>emp_code; 
fflush(stdin); 
cout<<"\n\n Enter the name of the employee:"; 
cin>>name; 
cout<<"\n\n Enter the HRA,DA and TA:"; 
cin>>hra>>da>>ta; 
} 
void show_data() 
{ 
cout<<"\n\n EMP CODE: "<<emp_code; 
cout<<"\n\n NAME: "<<name; 
cout<<"\n\n HRA,DA and TA: "<<hra<<"\t"<<da<<"\t"<<ta; 
} 
}; 
int main() 
{ 
fstream FILE; 
Employee e; 
int no; 
	FILE.open("employee1",ios::ate|ios::in|ios::out|ios::binary); 
	int num_objects=FILE.tellp()/sizeof(e); 
	cout<<"\n Enter the object whose record has to be updated:"; 
	cin>>no; 
	int location=(no-1)*sizeof(e); 
	FILE.seekp(location); 	
	cout<<"\n Enter the new details:-"; 
	e.read_data(); 
	FILE.write((char*)&e,sizeof(e)); 
	FILE.seekg(0); 
	cout<<"\n\n FILE UPDATED............."; 
	for(int i=0;i<num_objects;i++) 
	{ 
		FILE.read((char*)&e,sizeof(e)); 
		e.show_data(); 
	} 
}
