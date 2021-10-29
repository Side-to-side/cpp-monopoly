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
}

void Monopoly::updateGame() {
	std::cout << "-----------------\n";
	std::cout << "The game begins\n";
	std::cout << "There are " << players.size() << " participants in the game\n";
	std::cout << "The game starts with the first player\n";

	Dice1.randValue();
	Dice2.randValue();

}