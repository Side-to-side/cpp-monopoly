#pragma once

#include "Field.h"
#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

class VadimField : public Field {
  
public:

  VadimField(int id, std::string group, int cost)
		: Field(id, group, cost) {
	};

	VadimField() : Field() {};

  void info(){
    std::cout << "it's VadimField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);

private:

};