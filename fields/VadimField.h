#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

class VadimField : public Field {
  
public:

	VadimField(int id)
		: Field(id) {};

	VadimField() : Field() {};

  void info(){
    std::cout << "it's VadimField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  std::string getGroup();
private:

};