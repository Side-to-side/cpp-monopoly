#pragma once
#include <string>

#include "../players/AbstractPlayer.h"

#include "../lib/json.hpp"

class Field {
public:	
	Field();
	Field(int id, std::string group, int cost);

	void setID(int id);
	void setGroup(std::string g);
	void setCost(int cost);
	void setBought(int b);

	int getID();
	std::string getGroup();
	int getCost();
	int getBought();

  virtual void action(std::unique_ptr<AbstractPlayer>& player) = 0;
  virtual void deserialize(const json& data) = 0;

protected:
  int id;
	std::string group;
	int cost;
	int bought;
  
private:

};