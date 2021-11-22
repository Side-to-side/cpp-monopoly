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


	virtual void action(std::unique_ptr<AbstractPlayer>& player);

private:

};