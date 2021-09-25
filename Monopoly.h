#pragma once
#include <iostream>
#include <vector>
#include "AIplayer.h"
#include "Player.h"

class Monopoly {
public:
	void menu();		// ������� ����
	void startGame();	// ������� � ���������� ������� (���-�� ��� ������ ������� ��������)
	void updateGame();	// ���� ���� (���-�� ��� ������ ������)
private:
	int numberPlayers;
	int numberBots;
	std::vector<AI> vecAI;
};