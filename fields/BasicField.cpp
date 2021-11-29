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

void BasicField::setAmount(int amount) {
  this->amount = amount;
}

void BasicField::setLevel(int level) {
	this->level = level;
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

int BasicField::getLevel() {
	return level;
}
int BasicField::getAmount() {
  return amount;
}
void BasicField::info() {
	std::cout << "it's BasicField\n";
}

std::unique_ptr<AbstractPlayer> BasicField::buy(std::unique_ptr<AbstractPlayer> player) {
	int moneyPlayer = player->getCash();
 	if (moneyPlayer < getCost()) {
		std::cout << "No enough money :(" << std::endl;
		return std::move(player);
	}
	else {
		moneyPlayer -=  getCost();
		player->setCash(moneyPlayer);
		int idPlayer = player->getID();
		setBought(idPlayer);
		return std::move(player);
	}
}

std::unique_ptr<AbstractPlayer> BasicField::sell(std::unique_ptr<AbstractPlayer> player) {

	int level = getLevel();

	if (level < 0) {
		std::cout << "ERROR" << std::endl;
		return std::move(player);
	}
	if (level > 0) {
		std::cout << "You can't sell the field, because you have an improved fields" << std::endl;
		return std::move(player);
	}
	else {  // level == 0
		int moneyPlayer = player->getCash();
		int costSell = getCost() * 0.75;
		moneyPlayer += costSell;
		setBought(0);
		//delete remembering the owner of field 
		std::string group = getGroup();
		/*int amountPlayer = player->getPurchasedField(group);
		amountPlayer--;
		player->setPurchasedField(group, amountPlayer);*/
		return std::move(player);

	}
	

}


std::unique_ptr<AbstractPlayer> BasicField::upgrade(std::unique_ptr<AbstractPlayer> player) {

    //std::vector <int> temp = upgrade_map[group];
    for (int i = 0; i < getAmount(); i++) {
		  /*if (temp[i] != player->getID()) {
        return std::move(player);
      }*/
	  }
    level++;
}


std::unique_ptr<AbstractPlayer> BasicField::downgrade(std::unique_ptr<AbstractPlayer> player) {
	int level = getLevel();
	if (level == 0) {
		std::cout << "You have the minimum field level " << std::endl;
		return std::move(player);;
	}
	else { //level>0
		int moneyPlayer = player->getCash();
		int costDowngrade = (getCost() / 2) * 0.75;
		moneyPlayer += costDowngrade;
		level--;
		setLevel(level);
	}
  return std::move(player);
}

std::unique_ptr<AbstractPlayer> BasicField::action(std::unique_ptr<AbstractPlayer> player) {
  
	int opt = 0;

	if (getBought() == 0) {

    if(player->getBot() == true){
      std::cout << player->getName() << " decided to buy a field\n";
      player = buy(std::move(player));
      return std::move(player);
    }

		std::cout << "Choose an action:\n"
			<< "1. Buy the field\n"
			<< "Other value - cancel(skip)\n";
		std::cin >> opt;
		switch (opt) {
		case 1:
			player = buy(std::move(player));
      return std::move(player);
		default: 
      return std::move(player);
		}
	}


	int counterUpgrade = 0;

	if (getBought() == player->getID()) {

    if(player->getBot() == true){
      return std::move(player);
    }

		while (1) {
			std::cout << "Choose an action:\n"
				<< "1. Sell the field\n"
				<< "2. Upgrade the field\n"
				<< "3. Downgrade the field\n"
				<< "Other value - cancel(skip)\n";
			std::cin >> opt;
			switch (opt) {
			case 1:
        player = sell(std::move(player));
				return std::move(player);
			case 2:
				if (counterUpgrade == 1)
					std::cout << "You have already upgrated the field in this step" << std::endl;
				else {
          player = upgrade(std::move(player));
					counterUpgrade++;
				}
        return std::move(player);	
			case 3:
        player = downgrade(std::move(player));
        return std::move(player);
        return std::move(player);
			default:
				return std::move(player);
			}
		}	
	}

	if (getBought() != 0 && getBought() != player->getID()) {
		//pay(player);
	}




}

void BasicField::deserialize(const json& data) {
    data.at("id").get_to(id);
    data.at("group").get_to(group);
    data.at("cost").get_to(cost);
    data.at("tax").get_to(tax);
    data.at("amount").get_to(amount);
}

// functions for the BasicField class will be located here