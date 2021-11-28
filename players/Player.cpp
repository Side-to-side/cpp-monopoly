#include "Player.h"

int Player::makeTurn(){
  std::cout << "\nplayer number " << id << " chooses:\n"
            << "1. trade \n2. add / remove an asterisk from the field \n3. throw the dice\n\n";

  std::cout << "input: ";

  int opt;
  std::cin >> opt;

	switch (opt) {
	case 1:
		//trade();
    makeTurn();
		break;
	case 2:
		//add_or_remove(players[(this->id)-1]);
    makeTurn();
		break;
	case 3:
		return move();
		break;
	default:
		std::cout << "Unknown (skip)...\n\n";
    return -1;
		break;
	}
}

int Player::move(){
  std::cout << name << " made the decision to roll the dice\n\n";

  Dice Dice1, Dice2;
  Dice1.randValue();
	Dice2.randValue();

  std::cout << "On the first bone: " << Dice1.getValue() << std::endl;
  std::cout << "On the second bone: " << Dice2.getValue() << std::endl;

  pos += Dice1.getValue() + Dice2.getValue();
  pos %= 44;
  
  std::cout << name << " moved to field " << pos << "\n";
  std::cout << "---------------------------\n";
  return pos;
}

/*trade(std::unique_ptr<AbstractPlayer>& player){
  std::cout << " will be implemented through the graphical shell\n\n";
}
add_or_remove(std::unique_ptr<AbstractPlayer>& player){
  std::cout << player->name() << "\n\n";
}*/
