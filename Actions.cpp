#include "Actions.h"

void trade(AbstractPlayer player1, AbstractPlayer player2){
	std::cout << "Trade" << std::endl;
	std::cout << player1.namePlayer << " and " << player2.namePlayer << std::endl << std::endl;
	std::cout << player1.namePlayer << " fields: ";

	std::vector <int> idFieldPlayer1;
	std::vector <int> idFieldPlayer2;

	int idField;
	while (std::cin >> idField) {
		idFieldPlayer1.push_back(idField);
	}
	std::cout << std::endl << player2.namePlayer << " fields: ";
	while (std::cin >> idField) {
		idFieldPlayer2.push_back(idField);
	}

}