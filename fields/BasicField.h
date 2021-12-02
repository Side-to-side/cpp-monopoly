#pragma once

#include "Field.h"

#include <string>
#include <unordered_map>
#include <memory>
#include <vector>
#include <string>

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

#include "../game/MonopolyManager.h"
#include "../game/Monopoly.h"

class BasicField : public Field {
public:
	BasicField(int id)
		: Field(id) {
        bought = 0;
		    level = 0;

	};

	BasicField() : Field() {
    bought = 0;
		level = 0;
	};

	void setGroup(std::string g);
	void setCost(int cost);
	void setTax(int tax);
	void setLevel(int level);
  void setAmount(int amount);

	std::string getGroup();
	int getCost();
	int getTax();
	int getLevel();
  int getAmount();


	void info();

	std::unique_ptr<AbstractPlayer> buy(std::unique_ptr<AbstractPlayer> player);
	std::unique_ptr<AbstractPlayer> sell(std::unique_ptr<AbstractPlayer> player);
	//std::unique_ptr<AbstractPlayer> pay(std::unique_ptr<AbstractPlayer> player);
  std::unique_ptr<AbstractPlayer> upgrade(std::unique_ptr<AbstractPlayer> player);
	std::unique_ptr<AbstractPlayer> downgrade(std::unique_ptr<AbstractPlayer> player);

	std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player);
	void deserialize(const json& data);


protected:
	std::string group;
	int cost;
  int tax;
	int level;
	int amount;
};


