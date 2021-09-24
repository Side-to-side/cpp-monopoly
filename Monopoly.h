#pragma once
#include <iostream>
#include <vector>
#include "AIplayer.h"

class Monopoly {
public:
	void menu();		// функция меню
	void startGame();	// функция с начальными данными 
	void updateGame();	// сама игра 
private:
	int numberPlayers;
	int numberBots;
	std::vector<AI> vecAI;
};