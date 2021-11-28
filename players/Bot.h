#pragma once
#include <string>
#include <iostream>

#include "AbstractPlayer.h"

class Bot : public AbstractPlayer {
public:
	Bot(const std::string& Name, int Playerid)
		: AbstractPlayer(Name, Playerid) {};

  Bot() : AbstractPlayer() {};

  void makeTurn(); 
 // void move(); рух є в make_turn
  
private:
	
};