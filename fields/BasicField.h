#pragma once

#include "Field.h"
#include <string>

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

class BasicField : public Field {
public:
	BasicField(int id)
		: Field(id) {
        bought = 0;

	};

	BasicField() : Field() {
        bought = 0;
	};

  void setGroup(std::string g);
	void setCost(int cost);
	void setTax(int tax);

  std::string getGroup();
	int getCost();
	int getTax();

  void info(){
    std::cout << "it's BasicField\n";
  }

	void buy(std::unique_ptr<AbstractPlayer>& player);
	void sell(std::unique_ptr<AbstractPlayer>& player);
	void pay(std::unique_ptr<AbstractPlayer>& player);
  
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  
protected:
	std::string group;
	int cost;
  int tax;
};