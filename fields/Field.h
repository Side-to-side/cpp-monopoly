#pragma once
#include <string>
#include <unordered_map>

#include "../players/AbstractPlayer.h"

#include "../lib/json.hpp"

class Field {
public:	
	Field();
	Field(int id);

	void setID(int id);
	void setBought(int b);

	int getID();
	int getBought();

  virtual void info() = 0;
  virtual std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player) = 0;
  virtual void deserialize(const json& data) = 0;

protected:
  int id;
	int bought;

private:

};

