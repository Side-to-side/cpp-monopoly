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

std::unique_ptr<AbstractPlayer> SelectiveField::buy(std::unique_ptr<AbstractPlayer> player) {
  View display;
	int moneyPlayer = player->getCash();
 	if (moneyPlayer < getCost()) {
     display.noEnoughMoney();
		return std::move(player);
	}
	else {
		moneyPlayer -=  getCost();
		player->setCash(moneyPlayer);
		int idPlayer = player->getID();
		setBought(idPlayer);
		player->setPoints(player->getPoints() + 10);
		player->setBusiness(getGroup());
		return std::move(player);
	}
}

std::unique_ptr<AbstractPlayer> SelectiveField::sell(std::unique_ptr<AbstractPlayer> player) {
	int moneyPlayer = player->getCash();
	int costSell = getCost() * 0.75;
	moneyPlayer += costSell;
	player->setCash(moneyPlayer);
	setBought(0);
	//delete remembering the owner of field 
	std::string group = getGroup();
	//int amountPlayer = player->getPurchasedField(group);
	//amountPlayer--;
	//player->setPurchasedField(group, amountPlayer);
	return std::move(player);;
}

void SelectiveField::pay(std::unique_ptr<AbstractPlayer>& player) {

}

std::unique_ptr<AbstractPlayer> SelectiveField::action(std::unique_ptr<AbstractPlayer> player) {
  View display;
  Model option;
  if(player->getBot() == true){
    return std::move(player);
  }

	int bought = getBought();
	int idPlayer = player->getID();
	int opt = 0;

	if (bought == -1) {
    display.showErr();
		return std::move(player);
	}

	if (bought == 0) {
    display.actionBuyPlayer();
		std::cin >> opt;
		switch (opt) {
		case 1:
			//buy(player);
        return std::move(player);
		default:
        return std::move(player);
		}
	}

	bought = getBought();
	if (bought == idPlayer) {
    display.actionSellPlayer();
		switch (option.inputOpt()) {
		case 1:
			//sell(player);
			return std::move(player);
		default:
			return std::move(player);
		}
	}

	if (bought != 0 && bought != idPlayer) {
		//pay(player);
	}
  return std::move(player);
}

void SelectiveField::deserialize(const json& data) {
	data.at("id").get_to(id);
	data.at("group").get_to(group);
	data.at("cost").get_to(cost);
	data.at("tax").get_to(tax);
	data.at("amount").get_to(amount);
}
// functions for the SelectiveField class will be located here