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
  void setBusiness(std::string key);
  void setPoints(int points);

	std::string getName();
	int getID();
	int getCash();
	bool getBankrot();
	int getPos();
	bool getSkip();
	bool getBot();
	int getPoints();
	int getBusiness(std::string key);
	void removeBusiness(std::string key);
  virtual int makeTurn() = 0;
  
protected:
	std::string name;
	int id;
	int cash;
	bool bankrot;
	int pos;
	bool skip;
	int points;
  bool bot = true;
  std::unordered_map<std::string, std::vector<int>> business;

};
