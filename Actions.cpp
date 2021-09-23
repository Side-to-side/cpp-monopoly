#include "Actions.h"

void trade(abstractPlayer player1, abstractPlayer player2){
	std::cout << "Trade" << std::endl;
	std::cout << player1.name << " and " << player2.name << std::endl << std::endl;
	std::cout << player1.name << " fields: ";

	std::vector <int> idFieldPlayer1;
	std::vector <int> idFieldPlayer2;

	int idField;
	while (std::cin >> idField) {
		idFieldPlayer1.push_back(idField);
	}
	std::cout << std::endl << player2.name << " fields: ";
	while (std::cin >> idField) {
		idFieldPlayer2.push_back(idField);
	}

}