#include<iostream>
using namespace std;

class player
{
	private:
		int health;
		int age;
		int score;
		bool alive;
		
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
};

int addscore(player a, player b)
{
	return a.getscore() + b.getscore();
}

player getmaxscorePlayer(player a, player b)
{
	if(a.getscore() > b.getscore())
	{
		return a;
	}
	else return b;
}

int main()
{
	player harsh;
	player raghav;
	
	harsh.setAge(21);
	harsh.setIslaive(true);
	harsh.setHealth(65);
	
	raghav.setAge(21);
	raghav.setScore(100);
	raghav.setIslaive(true);
	raghav.setHealth(65);
	
	cout<<addscore(raghav, harsh)<<endl;
	//cout<<getmaxscorePlayer(raghav, harsh); We cant return object name in this way
	player alok = getmaxscorePlayer(raghav, harsh);
	cout<<alok.getscore();

}
