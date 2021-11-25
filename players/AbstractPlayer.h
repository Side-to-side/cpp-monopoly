#pragma once
#include <string>
#include <memory>

#include "../game/Dice.h"

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

  virtual void makeTurn() = 0;
  
protected:
	std::string name;
	int id;
	int cash;
	bool bankrot;
	int pos;
	bool skip;

private:

};