#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "AbstractPlayer.h"
#include "AIplayer.h"
#include "Player.h"
#include "Actions.h"
#include "Dice.h"

class Monopoly {
public:
	void menu();
	void startGame();	// function with initial data
	void updateGame();	// the game
private:
	int numberPlayers = 0;
	int numberBots = 0;

	Dice Dice1;
	Dice Dice2;

	std::vector<std::unique_ptr<AbstractPlayer>> players;
	std::vector<std::unique_ptr<Field>> map;
};