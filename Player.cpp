#include "Player.h"

Player::Player() {
  points = 0;
  cash = 15000;
  bankrot = false;
  pos = 0;
  fieldCount = 0;
}
/*Player::Player(int*& money) {
  points =0;
  cash = money;
  bankrot = false;
  pos = 0;
  fieldCount = 0;
}*/
Player::~Player(){
  points = -1;
  cash = 0;
  bankrot = true;
  pos = -1;
  fieldCount = -1;
}
/*Player::ifBankrot(int money, bool*& bankrot) {
  if (money <= 0) {
    bankrot = true;
  }
}
Player::buy(int*& money){

}*/
