#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "AbstractPlayer.h"
#include "AIplayer.h"
#include "Player.h"
#include "Actions.h"
/*#include "BasicField.h";
#include "SelectiveField.h";
#include "QuestionField.h";
#include "GiftField.h";
#include "PortalField.h";
#include "StartField.h";
#include "PolyanaField.h";
#include "VadimField.h";*/
#include "Cubes.h"

class Monopoly {
public:
	void menu();		// фунція меню
	void startGame();	// функция с начальными данными (Стародуб)
	void updateGame();	// сама игра (Наташа)
private:
	int numberPlayers = 0;
	int numberBots = 0;

	std::vector<std::unique_ptr<AbstractPlayer>> players;
	std::vector<std::unique_ptr<Field>> map;
};