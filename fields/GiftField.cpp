#include "GiftField.h"
#include <random>
void GiftField::action(std::unique_ptr<AbstractPlayer>& player) {
	std::random_device generation;
	int value = (generation() % 50 + 1) * 100;
	player->cash = player->cash + value;
}
// functions for the GiftField class will be located here