#pragma once

class Player {
private:
	int points;
	int cash;
	bool bankrot;
	int pos;
	int fieldCount;
public:
	Player();
	Player(int Tpoints, int Tcash, bool Tbankrot, int Tpos, int Tfield);
	~Player();
	bool buy(int money);
	bool ifBankrot(int money);
	int getPos();
	int getPoints();
	int getCash();
	int getField();
	//int pointCount(int points);
};
