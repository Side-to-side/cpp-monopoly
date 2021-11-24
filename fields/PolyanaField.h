#pragma once

#include "Field.h"
#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

class PolyanaField : public Field {
public:

PolyanaField(int id, std::string group, int cost)
		: Field(id, group, cost) {
	};

	PolyanaField() : Field() {};


	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  
private:

};