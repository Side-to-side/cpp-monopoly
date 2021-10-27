#pragma once
#include <string>
#include <iostream>
#include "AbstractPlayer.h"
#include "Field.h"

class Player : public AbstractPlayer {
public:
	Player(const std::string& Name, int Playerid)
		: AbstractPlayer(Name, Playerid) {}
	void buyField(Field field);
	void trade(std::unique_ptr<AbstractPlayer>& player1, std::unique_ptr<AbstractPlayer>& player2);

private:
};


