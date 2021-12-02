#pragma once

#include <random>

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

#include "../game/Monopoly.h"

class PortalField : public Field {
public:

	PortalField(int id)
		: Field(id) {};

	PortalField() : Field() {};

  void info(){
    std::cout << "it's PortalField\n";
  }
	std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player);
  void deserialize(const json& data);
  
private:

};