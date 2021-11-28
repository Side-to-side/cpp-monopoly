#pragma once

#include <random>

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

class PortalField : public Field {
public:

	PortalField(int id)
		: Field(id) {};

	PortalField() : Field() {};

  void info(){
    std::cout << "it's PortalField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  std::string getGroup();
private:

};