#include "Monopoly.h"

void Monopoly::menu() {
	std::cout << "MENU:\n";
	std::cout << "number of players: ";
	int n;
	std::cin >> n;
	numberPlayers = n;
	std::cout << "number of bots: ";
	std::cin >> n;
	numberBots = n;
}

void Monopoly::startGame() {
	int id = 0;
	for (int i = 0; i < numberPlayers; i++) {
		Player a("Human", id);
		players.push_back(std::make_unique<Player>(a));
		id++;
	}
	for (int i = 0; i < numberBots; i++) {
		AI a("Bot", id);
		players.push_back(std::make_unique<AI>(a));
		id++;
	}

	fieldCreation();
	//Cube Cube1;
	//Cube Cube2;
}

void Monopoly::updateGame() {
	bool active = 1;
	/*while (active) {
		for (int i = 0; i < numberPlayers; i++)
		{	
			std::cout << "Set cubes\n";
			
			players[i]->ID;
		}
	}*/
}