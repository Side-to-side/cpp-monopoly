#pragma once
#include <string>
#include <iostream>
#include "AbstractPlayer.h"
#include "Field.h"

class AI : public AbstractPlayer {
public:
	AI(const std::string& Name, int Playerid)
		: AbstractPlayer(Name, Playerid) {}
	void buyfield(Field idfield);
private:
	friend AbstractPlayer;
};