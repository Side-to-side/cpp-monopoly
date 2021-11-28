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

int BasicField::getAmount() {
	return amount;
}

int BasicField::getLevel() {
	return level;
}

void BasicField::info() {
	std::cout << "it's BasicField\n";
}
void BasicField::buy(std::unique_ptr<AbstractPlayer>& player) {
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

void BasicField::sell(std::unique_ptr<AbstractPlayer>& player) {
	int level = getLevel();

	if (level < 0) {
		std::cout << "ERROR" << std::endl;
		return;
	}
	if (level > 0) {
		std::cout << "You can't sell the field, because you have an improved fields" << std::endl;
		return;
	}
	else {  // level == 0
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
	

}

void BasicField::pay(std::unique_ptr<AbstractPlayer>& player) {

}

void BasicField::upgrade(std::unique_ptr<AbstractPlayer>& player) {
	std::string group = getGroup();
	int amount = getAmount();
	int amountPlayer = player->getPurchasedField(group);
	if (amountPlayer > amount) {
		std::cout << "ERROR" << std::endl;
		return;
	}
	if (amountPlayer < amount) {
		int shortage = amount - amountPlayer;
		std::cout << "You are missing " << shortage << " fields from group *" << group << "* for upgrading" << std::endl;
		return;
	}
	else {  //amountPlayer == amount
		int level = getLevel();
		if (level == 3) {
			std::cout << "You have the maximum field level :)" << std::endl;
			return;
		}
		else { // level < 3
			int moneyPlayer = player->getCash();
			int costImprove = getCost() / 2;
			if (moneyPlayer < costImprove) {
				std::cout << "No enough money :(" << std::endl;
				return;
			}
			else { // moneyPlayer >= costImprove
				moneyPlayer -= costImprove;
				player->setCash(moneyPlayer);
				level++;
				setLevel(level);
				return;
			}
		}
	}
}

void BasicField::downgrade(std::unique_ptr<AbstractPlayer>& player) {
	int level = getLevel();
	if (level == 0) {
		std::cout << "You have the minimum field level " << std::endl;
		return;
	}
	else { //level>0
		int moneyPlayer = player->getCash();
		int costDowngrade = (getCost() / 2) * 0.75;
		moneyPlayer += costDowngrade;
		player->setCash(moneyPlayer);
		level--;
		setLevel(level);
	}
}

void BasicField::action(std::unique_ptr<AbstractPlayer>& player) {

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


	int counterUpgrade = 0;
	bought = getBought();
	if (bought == idPlayer) {
		while (1) {
			std::cout << "Choose an action:\n"
				<< "1. Sell the field\n"
				<< "2. Upgrade the field\n"
				<< "3. Downgrade the field\n"
				<< "Other value - cancel(skip)\n";
			std::cin >> opt;
			switch (opt) {
			case 1:
				//sell(player);
				return;
			case 2:
				if (counterUpgrade == 1)
					std::cout << "You have already upgrated the field in this step" << std::endl;
				else {
					//upgrade(player);
					counterUpgrade++;
				}	
				break;
			case 3:
				//downgrade(player);
				break;
			default:
				return;
			}
		}	
	}

	if (bought != 0 && bought != idPlayer) {
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