#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

#include "../game/Monopoly.h"

class PolyanaField : public Field {
public:

	PolyanaField(int id)
		: Field(id) {};

	PolyanaField() : Field() {};

  void info(){
    std::cout << "it's PolyanaField\n";
  }
	std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player);
  void deserialize(const json& data);
  
private:

};