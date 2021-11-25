#include "Bot.h"

void Bot::makeTurn(){
  std::cout << name << " made the decision to roll the dice\n\n";

  Dice Dice1, Dice2;
  Dice1.randValue();
	Dice2.randValue();

  std::cout << "On the first bone: " << Dice1.getValue() << std::endl;
  std::cout << "On the second bone: " << Dice2.getValue() << std::endl;

  pos += Dice1.getValue() + Dice2.getValue();
  pos %= 44;
  
  std::cout << name << " moved to field " << pos;
}
