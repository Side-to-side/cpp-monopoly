#pragma once
#include <random>

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

class GiftField : public Field {
public:

	GiftField(int id)
		: Field(id) {};

	GiftField() : Field() {};


  void info(){
    std::cout << "it's GiftField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  std::string getGroup();
private:

};