#pragma once
class Monopoly {
public:
	void menu();		// функция меню
	void startGame();	// функция с начальными данными 
	void updateGame();	// сама игра 
private:
	int NumberPlayers;
	int NumberBots;

};