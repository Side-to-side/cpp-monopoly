#pragma once
#include <string>
#include "Field.h"

class AbstractPlayer {
public:
	AbstractPlayer();
	AbstractPlayer(const std::string& Name, int Playerid);
	AbstractPlayer(const AbstractPlayer& P);
	void name(const std::string name);
	void IDplayers(int id);
	void Cash(int a);
	void ifBankrot(bool a);
	void getPos(int pos);

//protected:
	std::string namePlayer;
	int ID;
	int cash;
	bool bankrot;
	int pos;
	virtual void srarodubbb() = 0;

private:

};