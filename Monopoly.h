#pragma once
#include <iostream>
#include <vector>
#include "AIplayer.h"
#include "Player.h"
#include "BasicField.h";
#include "SelectiveField.h";
#include "QuestionField.h";
#include "GiftField.h";
#include "PortalField.h";
#include "StartField.h";
#include "PolyanaField.h";
#include "VadimField.h";

class Monopoly {
public:
	void menu();		// ������� ����
	void startGame();	// ������� � ���������� ������� (���-�� ��� ������ ������� ��������)
	void updateGame();	// ���� ���� (���-�� ��� ������ ������)
private:
	int numberPlayers;
	int numberBots;
	std::vector<AbstractPlayer> vec_abstractPlayer;
	
	std::vector<Field> map;
};