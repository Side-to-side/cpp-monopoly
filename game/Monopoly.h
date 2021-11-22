#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

#include "../game/Actions.h"
#include "../game/Dice.h"

#include "../fields/Field.h"

class Monopoly {
public:
	void menu();
	void startGame();   // function with initial data
	void updateGame();	// the game
private:
	int numberPlayers = 0;
	int numberBots = 0;

	Dice Dice1;
	Dice Dice2;

	std::vector<std::unique_ptr<AbstractPlayer>> players;
	std::vector<std::unique_ptr<Field>> map;
};