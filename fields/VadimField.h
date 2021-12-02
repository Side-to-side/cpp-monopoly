#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"
#include "../game/Monopoly.h"

class VadimField : public Field {
  
public:

	VadimField(int id)
		: Field(id) {};

	VadimField() : Field() {};

  void info(){
    std::cout << "it's VadimField\n";
  }
	std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player);
  void deserialize(const json& data);

private:

};