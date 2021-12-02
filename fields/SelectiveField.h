#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

#include "../game/Monopoly.h"

class SelectiveField : public Field {
public:

	SelectiveField(int id)
		: Field(id) {};

	SelectiveField() : Field() {};

	void setGroup(std::string g);
	void setCost(int cost);
	void setTax(int tax);
	void setAmount(int amount);

	std::string getGroup();
	int getCost();
	int getTax();
	int getAmount();

	void info(){
	  std::cout << "it's SelectiveField\n";
	}

	std::unique_ptr<AbstractPlayer> buy(std::unique_ptr<AbstractPlayer> player);
	std::unique_ptr<AbstractPlayer> sell(std::unique_ptr<AbstractPlayer> player);
	void pay(std::unique_ptr<AbstractPlayer>& player);

	std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player);
	void deserialize(const json& data);
  
protected:
	std::string group;
	int cost;
	int tax;
	int amount;
};
