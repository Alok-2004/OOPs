#include <iostream>
using namespace std;
// Class is a blueprint and user defined data type
class player {
private:
    int score;
    int health;

public:
    // Setter functions
    void setScore(int s) {
        score = s;
    }

    void setHealth(int h) {
        health = h;
    }

    // Getter functions
    int getScore() {
        return score;
    }

    int getHealth() {
        return health;
    }
};

int main() {
    player amit;

	//amit.score = 90;// Bad practice and ahve security issues
    amit.setScore(90); // Set score using the setter function
    amit.setHealth(100);

    cout << "Amit's score: " << amit.getScore() << endl; // Get and output the score
    cout << "Amit's health: " << amit.getHealth() << endl; // Get and output the health

    return 0;
}

