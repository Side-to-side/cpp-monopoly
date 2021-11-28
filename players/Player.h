#pragma once
#include <string>
#include <iostream>

#include "AbstractPlayer.h"

class Player : public AbstractPlayer {
public:
	Player(const std::string& Name, int Playerid)
		: AbstractPlayer(Name, Playerid) {
            bankrot = false;
    };
    
    Player() : AbstractPlayer() {};

  int makeTurn();
  int move();
  
private:
};


