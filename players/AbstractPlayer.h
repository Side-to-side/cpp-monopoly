#pragma once
#include <string>
#include <memory>
#include <vector>

#include "../game/Dice.h"
#include "../game/MonopolyManager.h"

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
  void setBot(bool bot);
  void setBussines(std::string key);

	std::string getName();
	int getID();
	int getCash();
	bool getBankrot();
	int getPos();
	bool getSkip();
	bool getBot();
	int getBussines(std::string key);
  virtual int makeTurn() = 0;
  
protected:
	std::string name;
	int id;
	int cash;
	bool bankrot;
	int pos;
	bool skip;
  bool bot = true;
  std::unordered_map<std::string, std::vector<int>> bussines;

};
