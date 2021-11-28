#pragma once
#include <string>
#include <memory>
#include <map>

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
	void setPurchasedField(std::string group, int amount);

	std::string getName();
	int getID();
	int getCash();
	bool getBankrot();
	int getPos();
	bool getSkip();
	int getPurchasedField(std::string group);

  virtual void makeTurn() = 0;
  
protected:
	std::string name;
	int id;
	int cash;
	bool bankrot;
	int pos;
	bool skip;
	std::map<std::string,int> purchasedFields;

private:

};