#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"


class BasicField : public Field {

public:
	BasicField(int id, std::string group, int cost)
		: Field( id, group, cost) {
        bought = 0;
	};

	BasicField() : Field() {
        bought = 0;
	};

	void action(std::unique_ptr<AbstractPlayer>& player);

private:

};