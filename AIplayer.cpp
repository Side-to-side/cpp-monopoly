#include "AIplayer.h"

void AI::buyField(Field field) {
	if (field.bought == false && cash > field.fieldCost) {
		field.bought = true;
		cash -= field.bought;
		field.idPlayer = ID;
	}
}

void AI::trade(std::unique_ptr<AbstractPlayer>& player1, std::unique_ptr<AbstractPlayer>& player2) {
}
