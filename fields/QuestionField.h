#pragma once

#include "Field.h"

#include "../players/AbstractPlayer.h"
#include "../players/Bot.h"
#include "../players/Player.h"

#include "../game/Monopoly.h"

class QuestionField : public Field {
public:

	QuestionField(int id)
		: Field(id) {};

	QuestionField() : Field() {};

  void info(){
    std::cout << "it's QuestionField\n";
  }
  void incident1(std::unique_ptr<AbstractPlayer>& player);
	void incident2(std::unique_ptr<AbstractPlayer>& player);
	void incident3(std::unique_ptr<AbstractPlayer>& player);
	void incident4(std::unique_ptr<AbstractPlayer>& player);
	void incident5(std::unique_ptr<AbstractPlayer>& player);

	std::unique_ptr<AbstractPlayer> action(std::unique_ptr<AbstractPlayer> player);
  void deserialize(const json& data);
  
private:

};