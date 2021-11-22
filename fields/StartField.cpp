#include "StartField.h"

void StartField::action(std::unique_ptr<AbstractPlayer>& player) {
  int cash = player->getCash();
  cash += 2000;
	player->setCash(cash);
}
// functions for the StartField class will be located here