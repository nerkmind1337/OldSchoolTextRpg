#include "game.h"
#include "player.h"
#include <iostream>
#include <string>

using std::string;

bool Game::initGame() {
	string playerName;

	std::cout << "Welcome to my game \n";
	std::cout << "What is your name? \n";
	std::getline(std::cin,playerName);
	std::cout << "\ngreat " << playerName << "\nyou're going to love this, i do.\n";


	Player* player = new Player(playerName);
	std::cout << player->getName() << "\n";
	std::cout << "stats:\n";
	std::cout << "health: " << player->getHealth() << "\n" << "mana: " << player->getMana() << "\n";

	return true;
	
}

