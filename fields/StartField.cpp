#include "StartField.h"
std::unique_ptr<AbstractPlayer> StartField::action(std::unique_ptr<AbstractPlayer> player) {
  int cash = player->getCash();
  cash += 2000;
	player->setCash(cash);
  return std::move(player);
}


void StartField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the StartField class will be located here