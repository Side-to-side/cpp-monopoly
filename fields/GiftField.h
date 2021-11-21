#pragma once

#include "Field.h"
#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"
class GiftField : public Field {
private:


public:
	friend Field;
	GiftField(int t_id, int t_cost, int t_group)
		: Field(t_id, t_cost, t_group) {
		type = 4;
	}
	virtual void action(std::unique_ptr<AbstractPlayer>& player);
};