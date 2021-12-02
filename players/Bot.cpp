#include "Bot.h"

int Bot::makeTurn(){
  View display;

display.throwDiceBot(id);
  Dice Dice1, Dice2;
  Dice1.randValue();
	Dice2.randValue();
display.firstDiceValue(Dice1.getValue());
display.secondDiceValue(Dice2.getValue());


  pos += Dice1.getValue() + Dice2.getValue();
  pos %= 44;
  display.movedField(name, pos);

  return pos;
}
