#pragma once
#include <string>
#include <iostream>
#include "AbstractPlayer.h"
#include "Field.h"

class AI : public abstractPlayer {
public:
	AI(const std::string& Name, int Playerid)
		: abstractPlayer(Name, Playerid) {}
	void buyfield(Field idfield);
private:
};