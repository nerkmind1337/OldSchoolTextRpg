#pragma once
#include <string>

using std::string;

struct Damage {
	int damageMin;
	int damageMax;
};

class Creature {
	
	public:
		void takeDamage(float& amount);
		void doDamage(float& amount);
		void heal(float& amount);
		const float& getHealth();
		const float& getMana();
		const string& getName();

    protected:
		float healthPoints;
		float mana;
		string name;
		Damage minAndMaxDmg;
};


