#include "player.h"


//constructor
Player::Player(const string& playerName) {
	name = playerName;
	healthPoints = 100;
	mana = 100;
	minAndMaxDmg.damageMin = 5;
	minAndMaxDmg.damageMax = 30;
}
