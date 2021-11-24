#pragma once
#include <string>
#include <memory>

//#include "../fields/Field.h"

class AbstractPlayer {
public:
	AbstractPlayer();
	AbstractPlayer(const std::string& Name, int Playerid);
	AbstractPlayer(const AbstractPlayer& P);

	void setName(const std::string name);
	void setID(int id);
	void setCash(int cash);
	void setBankrot(bool bankrot);
	void setPos(int pos);
	void setSkip(bool skip);

	std::string getName();
	int getID();
	int getCash();
	bool getBankrot();
	int getPos();
	bool getSkip();

	//virtual void buyField(std::unique_ptr<Field>& field) = 0;
	//virtual void trade(std::unique_ptr<AbstractPlayer>& player1, std::unique_ptr<AbstractPlayer>& player2) = 0;

protected:
	std::string name;
	int id;
	int cash;
	bool bankrot;
	int pos;
	bool skip;

private:

};