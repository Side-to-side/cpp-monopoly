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
  View display;
	int moneyPlayer = player->getCash();
 	if (moneyPlayer < getCost()) {
		display.lowMoney();
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

std::unique_ptr<AbstractPlayer> BasicField::sell(std::unique_ptr<AbstractPlayer> player) {
  View display;
	int level = getLevel();

	if (level < 0) {
    display.showErr();
		return std::move(player);
	}
	if (level > 0) {
    display.notSellImField();
		return std::move(player);
	}
	else {  // level == 0
		int moneyPlayer = player->getCash();
		int costSell = getCost() * 0.75;
		moneyPlayer += costSell;
		setBought(0);
		//delete remembering the owner of field 
		std::string group = getGroup();
		player->removeBusiness(group);
		player->setPoints(player->getPoints() - 5);
		/*int amountPlayer = player->getPurchasedField(group);
		amountPlayer--;
		player->setPurchasedField(group, amountPlayer);*/
		return std::move(player);

	}
}
std::unique_ptr<AbstractPlayer> BasicField::upgrade(std::unique_ptr<AbstractPlayer> player) {
  View display;
	if (player->getBusiness(getGroup()) != getAmount()) {
    display.notUpgNoMonop();
		return std::move(player);
	}
	
	int upg_cost = getCost() * 0.5;
	int pl_cash = player->getCash();
	if (pl_cash < upg_cost) {
		
		return std::move(player);
	}
	player->setCash(pl_cash - upg_cost);
	level++;
	setTax(getTax() * 1.25);
	player->setPoints(player->getPoints() + 3);
  display.sucUpg();
	return std::move(player);
}


std::unique_ptr<AbstractPlayer> BasicField::downgrade(std::unique_ptr<AbstractPlayer> player) {
  View display;
	if (player->getBusiness(getGroup()) != getAmount()) {
    display.notDownNoMonop();
		return std::move(player);
	}
	
	int level_t = getLevel();
	if (level_t == 0) {
    display.minLevel();
		return std::move(player);;
	}
	else { //level>0
		int moneyPlayer = player->getCash();
		int costDowngrade = getCost() * 1.5;
		setTax(getTax() / 1.25);
		player->removeBusiness(getGroup());
		moneyPlayer += costDowngrade;
		player->setCash(moneyPlayer);
		player->setPoints(player->getPoints() - 2);
		level--;
	}
  return std::move(player);
}

std::unique_ptr<AbstractPlayer> BasicField::action(std::unique_ptr<AbstractPlayer> player) {
  Model option;
  View display;
	if (getBought() == 0) {

    if(player->getBot() == true){
      display.BotBuy();
     
      player = buy(std::move(player));
      return std::move(player);
    }

    display.actionBuyPlayer();
		switch (option.inputOpt()) {
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
      display.playerField();
			switch (option.inputOpt()) {
			case 1:
        player = sell(std::move(player));
				return std::move(player);
			case 2:
				if (counterUpgrade == 1){
          display.alreadyUpgrade();
        }
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
		return std::move(player);
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