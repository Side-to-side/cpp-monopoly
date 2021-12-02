#include "GiftField.h"

std::unique_ptr<AbstractPlayer> GiftField::action(std::unique_ptr<AbstractPlayer> player) {
  View display;
  display.gift();
	std::random_device generation;
	int value = (generation() % 50 + 1) * 100;
	int cash = player->getCash();
	cash += value;
	player->setCash(cash);
  return std::move(player);
}

void GiftField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the GiftField class will be located here
