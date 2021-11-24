#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

class SelectiveField : public Field {
public:

  SelectiveField(int id, std::string group, int cost)
		: Field(id, group, cost) {
  };

  SelectiveField() : Field() {};

  void info(){
    std::cout << "it's SelectiveField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  
private:

};