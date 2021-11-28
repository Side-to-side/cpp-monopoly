#include "SelectiveField.h"

void SelectiveField::setGroup(std::string g) {
	this->group = g;
}

void SelectiveField::setCost(int cost) {
	this->cost = cost;
}

void SelectiveField::setTax(int tax) {
	this->tax = tax;
}

void SelectiveField::setAmount(int amount) {
	this->amount = amount;
}

std::string SelectiveField::getGroup() {
	return group;
}

int SelectiveField::getCost(){
  return cost;
}

int SelectiveField::getTax(){
  return tax;
}

int SelectiveField::getAmount() {
	return amount;
}

void SelectiveField::buy(std::unique_ptr<AbstractPlayer>& player) {
	int moneyPlayer = player->getCash();
	int cost = getCost();
	if (moneyPlayer < cost) {
		std::cout << "No enough money :(" << std::endl;
		return;
	}
	else {
		moneyPlayer -= cost;
		player->setCash(moneyPlayer);
		int idPlayer = player->getID();
		setBought(idPlayer);
		//remembering the owner of field;
		std::string group = getGroup();
		int amountPlayer = player->getPurchasedField(group);
		amountPlayer++;
		player->setPurchasedField(group, amountPlayer);
		return;
	}
}

void SelectiveField::sell(std::unique_ptr<AbstractPlayer>& player) {
	int moneyPlayer = player->getCash();
	int costSell = getCost() * 0.75;
	moneyPlayer += costSell;
	player->setCash(moneyPlayer);
	setBought(0);
	//delete remembering the owner of field 
	std::string group = getGroup();
	int amountPlayer = player->getPurchasedField(group);
	amountPlayer--;
	player->setPurchasedField(group, amountPlayer);
	return;
}

void SelectiveField::pay(std::unique_ptr<AbstractPlayer>& player) {

}


void SelectiveField::action(std::unique_ptr<AbstractPlayer>& player) {
	int bought = getBought();
	int idPlayer = player->getID();
	int opt = 0;

	if (bought == -1) {
		std::cout << "ERROR" << std::endl;
		return;
	}

	if (bought == 0) {
		std::cout << "Choose an action:\n"
			<< "1. Buy the field\n"
			<< "Other value - cancel(skip)\n";
		std::cin >> opt;
		switch (opt) {
		case 1:
			//buy(player);
			break;
		default:
			break;
		}
	}

	bought = getBought();
	if (bought == idPlayer) {
		std::cout << "Choose an action:\n"
			<< "1. Sell the field\n"
			<< "Other value - cancel(skip)\n";
		std::cin >> opt;
		switch (opt) {
		case 1:
			//sell(player);
			return;
		default:
			return;
		}
	}

	if (bought != 0 && bought != idPlayer) {
		//pay(player);
	}
}

void SelectiveField::deserialize(const json& data) {
	data.at("id").get_to(id);
	data.at("group").get_to(group);
	data.at("cost").get_to(cost);
	data.at("tax").get_to(tax);
	data.at("amount").get_to(amount);
}
// functions for the SelectiveField class will be located here