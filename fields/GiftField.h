#pragma once
#include <random>

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

class GiftField : public Field {
public:

GiftField(int id, std::string group, int cost)
		: Field(id, group, cost) {
	};

	GiftField() : Field() {};

  void info(){
    std::cout << "it's GiftField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  
private:

};