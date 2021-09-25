#pragma once
#include <iostream>
#include <vector>
#include "AIplayer.h"
#include "Player.h"

class Monopoly {
public:
	void menu();		// функция меню
	void startGame();	// функция с начальными данными (это-то что должен сделать Стародуб)
	void updateGame();	// сама игра (это-то что делает Наташа)
private:
	int numberPlayers;
	int numberBots;
	std::vector<AI> vecAI;
};