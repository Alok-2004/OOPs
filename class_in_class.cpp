// class

#include<iostream>
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
		
	public:
		// Setter is used to get input
		void setHealth(int health)
		{
			this->health = health; // this function work for a particular func	
		}
		
		void setAge(int age)
		{
			this->age = age;// this-> tells that we are working with class object not some local variable
		}
		
		void setScore(int score)
		{
			this->score = score;
		}
		
		void setIslaive(bool alive)
		{
			this->alive = alive; 
		}
		
		void setGun(Gun gun)
		{
			this-> gun = gun;
		}
		
		// Getter is used to get output
		int gethealth()
		{
			return health;
		}
		
		int getage()
		{
			return age;
		}
		
		int getscore()
		{
			return score;
		}
		
		int getalive()
		{
			return alive;
		}
		
		Gun getgun()
		{
			return gun;
		}
};

int main()
{
	player harsh;
	player raghav;// Allocated in compile time // static memory location
	
	Gun ak47;
	ak47.ammo(30);
	ak47.damage(50);
	ak47.scope(67);
	
	harsh.setAge(21);
	harsh.setIslaive(true);
	harsh.setHealth(65);
	harsh.setGun(ak47);
	
	player *urvi = new player;// this will insure that meory is being created in runtime not in compile time.
	player urviobject = *urvi; //run time, dynamic memroy allocation
//	urviobject.setHealth(45);
//	urviobject.gethealth;
	
	// arrow opretor address se object lka ge upe kaam karna, example niche dekho
	urvi->setHealth(44);
	cout<<urvi->gethealth(); // is same as cout<<(*urvi).getHealth()
	
	Gun m16;
	ak47.ammo(20);
	ak47.damage(75);
	ak47.scope(67);
	
	raghav.setAge(21);
	raghav.setScore(100);
	raghav.setIslaive(true);
	raghav.setHealth(65);
	raghav.setgun(m16);	
}
