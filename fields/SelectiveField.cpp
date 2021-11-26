#include "SelectiveField.h"

void SelectiveField::setCost(int cost) {
	this->cost = cost;
}

void SelectiveField::setTax(int tax) {
	this->tax = tax;
}

int SelectiveField::getCost(){
  return cost;
}

int SelectiveField::getTax(){
  return tax;
}

void SelectiveField::buy(std::unique_ptr<AbstractPlayer>& player) {
	int moneyPlayer = player->getCash();
	int cost = getCost();
	moneyPlayer -= cost;
	player->setCash(moneyPlayer);
	int idPlayer = player->getID();
	setBought(idPlayer);
}

void SelectiveField::sell(std::unique_ptr<AbstractPlayer>& player) {
	int moneyPlayer = player->getCash();
	int costSell = getCost() * 0.75;
	moneyPlayer += costSell;
	player->setCash(moneyPlayer);
	setBought(0);
}


void SelectiveField::action(std::unique_ptr<AbstractPlayer>& player) {
	//std::cout << "1. Buy the field\n2. Sell the "


	int opt;
	std::cin >> opt;

	switch (opt) {
	case 1:
		buy(player);
		break;
	case 2:
		sell(player);
		break;

	default:
		std::cout << "Unknown (skip)...\n\n";
		break;
	}


}

void SelectiveField::deserialize(const json& data) {
    data.at("id").get_to(id);
    data.at("cost").get_to(cost);
    data.at("tax").get_to(tax);
}
// functions for the SelectiveField class will be located here