#include <iostream>
using namespace std;

class Gun
{
public:
    int ammo;
    int damage;
    int scope;
};

class player
{
private:
    string name; // Add a name attribute
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;

    class helmet
    {
    private:
        int hp;
        int level;

    public:
        void setHP(int value)
        {
            hp = value;
        }
        int getHP()
        {
            return hp;
        }

        void setLevel(int value)
        {
            level = value;
        }
        int getLevel()
        {
            return level;
        }
    } playerHelmet;

public:
    // Constructor to initialize with name, age, health, gun, helmet attributes
    player(string n, int a, bool al, int h, Gun g, int hh, int hl)
    {
        name = n;
        age = a;
        alive = al;
        health = h;
        gun = g;
        playerHelmet.setHP(hh);
        playerHelmet.setLevel(hl);
    }

    // Getter methods for player attributes
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    int getHealth()
    {
        return health;
    }

    Gun getGun()
    {
        return gun;
    }

    int getHelmetHP()
    {
        return playerHelmet.getHP();
    }

    int getHelmetLevel()
    {
        return playerHelmet.getLevel();
    }
};

int main()
{
    Gun ak47 = {30, 50, 67};
    Gun m16 = {20, 75, 80};

    // Initialize player objects with names
    player enemy[3] = {
        {"Alok", 25, true, 80, ak47, 120, 4},
        {"Harsh", 21, true, 65, m16, 100, 3},
        {"Amit", 35, true, 70, ak47, 90, 2}};

    // Compare and display attributes for each player
    for (int i = 0; i < 3; ++i)
    {
        cout << "Player: " << enemy[i].getName() << endl;
        cout << "Age: " << enemy[i].getAge() << endl;
        cout << "Health: " << enemy[i].getHealth() << endl;
        cout << "Gun damage: " << enemy[i].getGun().damage << endl;
        cout << "Helmet HP: " << enemy[i].getHelmetHP() << endl;
        cout << "Helmet level: " << enemy[i].getHelmetLevel() << endl;
        cout << endl;
    }

    return 0;
}
