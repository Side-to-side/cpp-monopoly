#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

class SelectiveField : public Field {
public:

	SelectiveField(int id)
		: Field(id) {};

	SelectiveField() : Field() {};

  void setCost(int cost);
  int getCost();

  void info(){
    std::cout << "it's SelectiveField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  
public:
  int cost;
};