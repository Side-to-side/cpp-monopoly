#include "StartField.h"


void StartField::action(std::unique_ptr<AbstractPlayer>& player) {
	player->cash = player->cash + 2000;
	
}
// functions for the StartField class will be located here