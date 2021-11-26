#include "BasicField.h"

void BasicField::setGroup(std::string g) {
	this->group = g;
}

void BasicField::setCost(int cost) {
	this->cost = cost;
}

void BasicField::setTax(int tax) {
	this->tax = tax;
}

std::string BasicField::getGroup() {
	return group;
}

int BasicField::getCost() {
	return cost;
}

int BasicField::getTax() {
	return tax;
}

void BasicField::buy(std::unique_ptr<AbstractPlayer>& player) {
	int moneyPlayer = player->getCash();
	int cost = getCost();
	moneyPlayer -= cost;
	player->setCash(moneyPlayer);
	int idPlayer = player->getID();
	setBought(idPlayer);
}

void BasicField::sell(std::unique_ptr<AbstractPlayer>& player) {
	int moneyPlayer = player->getCash();
	int costSell = getCost()*0.75;
	moneyPlayer += costSell;
	player->setCash(moneyPlayer);
	setBought(0);
}

void BasicField::pay(std::unique_ptr<AbstractPlayer>& player) {

}


void BasicField::action(std::unique_ptr<AbstractPlayer>& player) {
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

void BasicField::deserialize(const json& data) {
    data.at("id").get_to(id);
    data.at("group").get_to(group);
    data.at("cost").get_to(cost);
    data.at("tax").get_to(tax);
}

// functions for the BasicField class will be located here