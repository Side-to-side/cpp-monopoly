#pragma once
class Monopoly {
public:
	void menu();		// ������� ����
	void startGame();	// ������� � ���������� ������� 
	void updateGame();	// ���� ���� 
private:
	int NumberPlayers;
	int NumberBots;

};