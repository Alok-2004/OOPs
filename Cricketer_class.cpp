#include <iostream>
using namespace std;

class Cricketer
{
private:
    string name;
    int numOfMatches;
    int age;
    double battingAverage;

public:
    // Constructor to initialize with attributes
    Cricketer(string n, int matches, int a, double avg)
    {
        name = n;
        numOfMatches = matches;
        age = a;
        battingAverage = avg;
    }

    // Getter methods for cricketer attributes
    string getName()
    {
        return name;
    }

    int getNumOfMatches()
    {
        return numOfMatches;
    }

    int getAge()
    {
        return age;
    }

    double getBattingAverage()
    {
        return battingAverage;
    }
};

int main()
{
    // Create cricketer objects
    Cricketer player1("Virat Kohli", 250, 33, 59.58);
    Cricketer player2("Rohit Sharma", 220, 34, 49.14);
    Cricketer player3("Joe Root", 175, 30, 52.04);

    // Display cricketer information
    cout << "Cricketer: " << player1.getName() << endl;
    cout << "Number of matches: " << player1.getNumOfMatches() << endl;
    cout << "Age: " << player1.getAge() << endl;
    cout << "Batting average: " << player1.getBattingAverage() << endl;
    cout << endl;

    cout << "Cricketer: " << player2.getName() << endl;
    cout << "Number of matches: " << player2.getNumOfMatches() << endl;
    cout << "Age: " << player2.getAge() << endl;
    cout << "Batting average: " << player2.getBattingAverage() << endl;
    cout << endl;

    cout << "Cricketer: " << player3.getName() << endl;
    cout << "Number of matches: " << player3.getNumOfMatches() << endl;
    cout << "Age: " << player3.getAge() << endl;
    cout << "Batting average: " << player3.getBattingAverage() << endl;
    cout << endl;

    return 0;
}

