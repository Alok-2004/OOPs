#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Open the file for writing
    ofstream output;
    output.open("Hello.txt");
    if (!output.is_open())
    {
        cout << "Failed to open file for writing!" << endl;
        return 1;
    }

    // Write data to the file
    const char* dataToWrite = "bhdchdbsv fnjb ";
    output.write(dataToWrite, strlen(dataToWrite));
    output.close();
    cout << "Data saved" << endl;

    // Open the file for reading
    ifstream input;
    input.open("Hello.txt");
    if (!input.is_open())
    {
        cout << "Failed to open file for reading!" << endl;
        return 1;
    }

    // Read data from the file
    char buffer[30];
    input.read(buffer, sizeof(buffer));
    buffer[input.gcount()] = '\0'; // Null-terminate the string
    input.close();

    cout << "Content from file: " << buffer << endl;

    return 0;
}