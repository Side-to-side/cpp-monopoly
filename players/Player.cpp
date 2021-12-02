#include "Player.h"

int Player::makeTurn(){
  View display;
  Model option;
  display.throwDice(id);

display.input();
	switch (option.inputOpt()) {
	case 1:
		//trade();
    makeTurn();
		break;
	case 2:
		//add_or_remove();
		makeTurn();
		break;
	case 3:
		 move();
		break;
	default:
    display.unknownMove();
    return -1;
		break;
	}
}

int Player::move(){
  View display;
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


/*add_or_remove(std::unique_ptr<AbstractPlayer>& player){
  std::cout << player->name() << "\n\n";
}*/
