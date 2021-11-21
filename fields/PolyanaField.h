#pragma once

#include "Field.h"
#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

class PolyanaField : public Field {
private:


public:
	friend Field;
	PolyanaField(int t_id, int t_cost, int t_group)
		: Field(t_id, t_cost, t_group) {
		type = 7;
	}
	virtual void action(std::unique_ptr<AbstractPlayer>& player);

};