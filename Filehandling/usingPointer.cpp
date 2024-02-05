// C++ program to illustrate the use of tellg() 
/*
#include <fstream> 
#include <iostream> 
using namespace std; +
int main() 
{ 
    fstream fin; 
    char ch; 
    fin.open("abc.txt",ios::out); 
    int pos; 
    pos=fin.tellg(); 
    cout<<pos; 
    fin<<"hello";
    fin<<"Yelow"
    cout<<"\nAfter writing hello:= "<<fin.tellg(); 
    fin.close(); 
    fin.open("abc.txt",ios::in); 
    pos=fin.tellg(); 
    cout<<pos; 
    fin>>ch; 
    pos=fin.tellg(); 
    cout<<pos; 
	return 0; 
}
*/

// C++ program to illustrate the use of tellg()
/*
#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream fin;
    char ch;
    fin.open("abc.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos;

    fin>>ch;
    pos=fin.tellg();
    cout<<pos;

	return 0;
}
*/

// C++ program to illustrate the use of tellp() 
/*
#include <fstream> 
#include <iostream> 
using namespace std; 
int main() 
{ 
    ofstream fout; 
    char ch; 
    fout.open("abc.txt",ios::app); 
    int pos; 
    pos=fout.tellp(); 
    cout<<pos; 
 
    fout<<"welcome all"; 
    pos=fout.tellp(); 
    cout<<pos; 
    fout.close(); 
	return 0; 
}
*/

//use of tellg() and tellp() 
/*
#include<iostream> 
#include<fstream> 
using namespace std; 
int main() 
{ 
    fstream obj1; 
    obj1.open("file1.txt",ios::out); 
    obj1<<"welcome to all"; 
    cout<<obj1.tellp(); 
    obj1.close(); 
    obj1.open("file1.txt",ios::in); 
    cout<<endl<<obj1.tellg(); 
    obj1.close(); 
    return 0; 
}
*/

//use of seekg() and seekp() 
/*
#include<iostream> 
#include<fstream> 
using namespace std; 
int main() 
{ 
    fstream obj1; 
    //write mode 
    obj1.open("file1.txt",ios::out); 
    obj1<<"welcome to all"; 
    cout<<obj1.tellp(); 
    obj1.seekp(6); 
    cout<<endl<<obj1.tellp(); 
    obj1.close(); 
    //Read mode 
    obj1.open("file1.txt",ios::in); 
    cout<<endl<<obj1.tellg(); 
    obj1.seekg(8); 
    cout<<endl<<obj1.tellg(); 
    obj1.close(); 
    return 0; 
}
*/

//use of three constants ios::beg, ios::cur, ios::end
/*
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream obj1;
    //write mode
    obj1.open("file1.txt",ios::out);
    obj1<<"welcome to all";
    cout<<obj1.tellp();
    obj1.seekp(6);
    cout<<endl<<obj1.tellp();
    obj1.seekp(2,ios::cur);
    cout<<endl<<obj1.tellp();
    obj1.seekp(-3,ios::end);
    cout<<endl<<obj1.tellp();
    obj1.seekp(2,ios::beg);
    cout<<endl<<obj1.tellp();
    obj1.close();
    cout<<endl<<endl;
    //Read mode
    obj1.open("file1.txt",ios::in);
    cout<<endl<<obj1.tellg();
    obj1.seekg(8);
    cout<<endl<<obj1.tellg();
    obj1.close();
    return 0;
}
*/

//use of get() and put() 
#include<iostream> 
#include<fstream> 
#include<string.h> 
using namespace std; 
int main() 
{ 
    char s[40]; 
    cout<<"Enter input="; 
    gets(s); 
    int length=strlen(s); 
    fstream obj; 
    obj.open("new.txt",ios::out); 
    for(int i=0;i<length;i++) 
        obj.put(s[i]); 
    obj.seekp(0); 
    obj.close(); 
    //Again open 
    obj.open("new.txt",ios::in); 
    char ch; 
    while(obj) 
    { 
        obj.get(ch); 
        cout<<ch; 
    } 
    obj.close(); 
    return 0; 
}