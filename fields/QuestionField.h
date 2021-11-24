#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/AIplayer.h"
#include "../players/Player.h"

class QuestionField : public Field {
public:

  QuestionField(int id, std::string group, int cost)
		: Field(id, group, cost) {
	};

	QuestionField() : Field() {};

  void info(){
    std::cout << "it's QuestionField\n";
  }
	void action(std::unique_ptr<AbstractPlayer>& player);
  void deserialize(const json& data);
  
private:

};