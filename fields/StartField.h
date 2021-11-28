#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

class StartField : public Field {

public:

	StartField(int id)
		: Field(id) {};

	StartField() : Field() {};

  void info(){
    std::cout << "it's StartField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  std::string getGroup();
private:
};