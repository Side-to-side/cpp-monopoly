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

  std::string getGroup();
	int getCost();

  void info(){
    std::cout << "it's BasicField\n";
  }

	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  
protected:
	std::string group;
	int cost;
};