#pragma once

#pragma once
#include <string>
#include <iostream>
#include "AbstractPlayer.h"
#include "Field.h"

class Player : public AbstractPlayer {
public:
	Player(const std::string& Name, int Playerid)
		: AbstractPlayer(Name, Playerid) {}
	void buyfield(Field idfield);
	void srarodubbb() {
		std::cout << "Andrey molodetz!!!\n";
	}
private:
	friend AbstractPlayer;
};


