#include "Player.h"

void Player::makeTurn(){
  std::cout << "\nplayer number " << id << " chooses:\n"
            << "1. trade \n2. add / remove an asterisk from the field \n3. throw the dice\n\n";

  std::cout << "input: ";

  int opt;
  std::cin >> opt;

	switch (opt) {
	case 1:
		//trade(); 
		break;
	case 2:
	    //add_or_remove();
		break;
	case 3:
		move();
		break;
	default:
		std::cout << "Unknown (skip)...\n\n";
		break;
	}
}

void Player::move(){
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
}

void Player::trade(std::unique_ptr<AbstractPlayer>& playerToTrade) {
	
}

void Player::add_or_remove() {
	// not sure what to do
}
