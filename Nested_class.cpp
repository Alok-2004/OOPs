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
    } playerHelmet; // Declare an instance of the nested class

public:
    // Setter and getter methods for player attributes
    void setHealth(int value)
    {
        health = value;
    }

    int getHealth()
    {
        return health;
    }

    void setAge(int value)
    {
        age = value;
    }

    int getAge()
    {
        return age;
    }

    void setIsAlive(bool value)
    {
        alive = value;
    }

    bool getIsAlive()
    {
        return alive;
    }

    void setGun(Gun g)
    {
        gun = g;
    }

    Gun getGun()
    {
        return gun;
    }

    // ... other setter and getter methods for other attributes

    // Setter and getter methods for helmet attributes
    void setHelmetHP(int value)
    {
        playerHelmet.setHP(value);
    }

    int getHelmetHP()
    {
        return playerHelmet.getHP();
    }

    void setHelmetLevel(int value)
    {
        playerHelmet.setLevel(value);
    }

    int getHelmetLevel()
    {
        return playerHelmet.getLevel();
    }
};

int main()
{
    player harsh;

    Gun ak47;
    ak47.ammo = 30;
    ak47.damage = 50;
    ak47.scope = 67;

    harsh.setAge(21);
    harsh.setIsAlive(true);
    harsh.setHealth(65);
    harsh.setGun(ak47);

    harsh.setHelmetHP(100);
    harsh.setHelmetLevel(3);

    // Create another player object "Alok"
    player alok;

    Gun m16;
    m16.ammo = 20;
    m16.damage = 75;
    m16.scope = 80;

    alok.setAge(25);
    alok.setIsAlive(true);
    alok.setHealth(80);
    alok.setGun(m16);

    alok.setHelmetHP(120);
    alok.setHelmetLevel(4);

    // Display player information
    cout << "Harsh's health: " << harsh.getHealth() << endl;
    cout << "Harsh's age: " << harsh.getAge() << endl;
    cout << "Harsh's gun ammo: " << harsh.getGun().ammo << endl;
    cout << "Harsh's helmet HP: " << harsh.getHelmetHP() << endl;
    cout << "Harsh's helmet level: " << harsh.getHelmetLevel() << endl;

    // Display Alok's information
    cout << "Alok's health: " << alok.getHealth() << endl;
    cout << "Alok's age: " << alok.getAge() << endl;
    cout << "Alok's gun ammo: " << alok.getGun().ammo << endl;
    cout << "Alok's helmet HP: " << alok.getHelmetHP() << endl;
    cout << "Alok's helmet level: " << alok.getHelmetLevel() << endl;

    if(harsh.getHealth() > alok.getHealth() && harsh.getGun().damage > alok.getGun().damage)
    {
        cout << "Harsh will likely win in a direct conflict." << endl;
    }
    else if (alok.getHealth() > harsh.getHealth() && alok.getGun().damage > harsh.getGun().damage)
    {
        cout << "Alok will likely win in a direct conflict." << endl;
    }
    else
    {
        cout << "The outcome of a direct conflict is uncertain." << endl;
    }
	
	return 0;
}

