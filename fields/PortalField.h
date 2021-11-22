#pragma once

#include <random>

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

class PortalField : public Field {
public:

PortalField(int id, std::string group, int cost)
		: Field(id, group, cost) {
	};

	PortalField() : Field() {};


	virtual void action(std::unique_ptr<AbstractPlayer>& player);

private:

};