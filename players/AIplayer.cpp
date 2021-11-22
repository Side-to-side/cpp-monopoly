#include "AIplayer.h"

void AI::buyField(Field field) {
	if (field.getBought() == 0 && cash > field.getCost()) {
		field.setBought(id);
		cash -= field.getBought();
	}
}

void AI::trade(std::unique_ptr<AbstractPlayer>& player1, std::unique_ptr<AbstractPlayer>& player2) {
}
