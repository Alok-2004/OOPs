#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream input("Hello.txt");
    input << "Hello iudacgh aksjcb";
    input.close();
    cout << "Data saved" << endl;

    char s[30];
    ifstream reading("Hello.txt");

    if (!reading.is_open())
    {
        cout << "Failed to open file for reading!" << endl;
        return 1;
    }

    // Read the entire line from the file and store it in s
    reading.getline(s, sizeof(s));

    cout << "Content from file: " << s << endl;

    reading.close();

    return 0;
}
