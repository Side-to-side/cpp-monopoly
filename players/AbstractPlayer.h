#pragma once
#include <string>
#include <memory>

#include "../fields/Field.h"

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

	virtual void buyField(Field field) = 0;
	virtual void trade(std::unique_ptr<AbstractPlayer>& player1, std::unique_ptr<AbstractPlayer>& player2) = 0;

//protected:
	std::string namePlayer;
	int ID;
	int cash;
	bool bankrot;
	int pos;

private:

};