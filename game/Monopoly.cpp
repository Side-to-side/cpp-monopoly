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

	map = fieldCreation();

	
}

void Monopoly::updateGame() {
	std::cout << "-----------------\n";
	std::cout << "The game begins\n";
	std::cout << "There are " << players.size() << " participants in the game\n";
	
  int number_players = players.size();
  int id_player = 1;

  std::vector<int> tempV = { -1, -1, -1 };

  std::string groups[9] = { map[1]->getGroup(), map[5]->getGroup(), map[10]->getGroup(),
	  map[15]->getGroup(), map[30]->getGroup(), map[33]->getGroup(),
  map[40]->getGroup(), map[20]->getGroup(), map[25]->getGroup() };
  int k_iter = 0;
  while (k_iter < 9) {
	  Monopolies.monopolies_map.insert(std::make_pair(groups[k_iter], tempV));
	  k_iter++;
	  if (k_iter == 7) tempV.push_back(-1);
  }

  Statistik Stats(number_players);
  
  while(number_players > 1){
    if(players[id_player]->getBankrot() == true){
      id_player++;
      id_player %= players.size();
      continue;
	}
	int curPl_money = players[id_player]->getCash();
	  players[id_player]->makeTurn();
	  map[players[id_player]->getPos()]->action(players[id_player]);
	  int newPl_money = players[id_player]->getCash();
	  if (curPl_money < newPl_money) {
		  Stats.make_pt_rent(newPl_money - curPl_money, id_player);
	  }
	  int count_fields = 0;
	  for (auto g : groups) {
		  for (int i = 0; i < Monopolies.monopolies_map[g].size(); i++) {
			  if (Monopolies.monopolies_map[g][i] == id_player) {
				  count_fields++;
			  }
		  }
	  }
	  Stats.make_pt_pl(count_fields, id_player);
	  Stats.info();
  }
}