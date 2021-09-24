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
	for (int i = 0; i < numberBots; i++) {
		AI a("Bot", id);
		vecAI.push_back(a);
		id++;
	}
}

void Monopoly::updateGame() {
	
}