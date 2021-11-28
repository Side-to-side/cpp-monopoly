#include "StartField.h"

void StartField::action(std::unique_ptr<AbstractPlayer>& player) {
  int cash = player->getCash();
  cash += 2000;
	player->setCash(cash);
}

void StartField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
std::string StartField::getGroup() {
	return "no group";
}
// functions for the StartField class will be located here