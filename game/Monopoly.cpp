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
	int id = 1;
	for (int i = 0; i < numberPlayers; i++) {
		Player a("Human", id);
		players.push_back(std::make_unique<Player>(a));
		id++;
	}
	for (int i = 0; i < numberBots; i++) {
		Bot a("Bot", id);
		players.push_back(std::make_unique<Bot>(a));
		id++;
	}

	mapMonopoly = fieldCreation();
}

void Monopoly::updateGame() {
	std::cout << "-----------------\n";
	std::cout << "The game begins\n";
	std::cout << "There are " << players.size() << " participants in the game\n";

  int number_players = players.size();
  int id_player = 0;

  while(number_players > 1){
    if(players[id_player]->getBankrot() == true){
       continue;
    }
	  players[id_player]->makeTurn();
    id_player++;
    id_player %= players.size();
  }

}