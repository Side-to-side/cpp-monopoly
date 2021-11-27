#pragma once
#include <string>
#include <iostream>

#include "AbstractPlayer.h"

class Player : public AbstractPlayer {
public:
	Player(const std::string& Name, int Playerid)
		: AbstractPlayer(Name, Playerid) {};
    
    Player() : AbstractPlayer() {};

  void makeTurn();
  void move();
  void trade(std::unique_ptr<AbstractPlayer>& playerToTrade);
  void add_or_remove();
private:
};


