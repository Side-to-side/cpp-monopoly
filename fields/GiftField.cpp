#include "GiftField.h"

void GiftField::action(std::unique_ptr<AbstractPlayer>& player) {
	std::random_device generation;
	int value = (generation() % 50 + 1) * 100;
	int cash = player->getCash();
	cash += value;
	player->setCash(cash);
}

void GiftField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the GiftField class will be located here
