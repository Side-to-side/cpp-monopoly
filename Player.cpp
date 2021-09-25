#include "Player.h"

void Player::buyfield(Field field) {
    if (field.bought == false && cash > field.fieldCost) {
        field.bought = true;
        cash -= field.bought;
        field.idPlayer = ID;
    }
}
/*Player::Player() {
  points = 0;
  cash = 15000;
  bankrot = false;
  pos = 0;
  fieldCount = 0;
}

Player::Player(int Tpoints,int Tcash, bool Tbankrot, int Tpos, int Tfield) {
    points = Tpoints;
    cash = Tcash;
    bankrot = Tbankrot;
    pos = Tpos;
    fieldCount = Tfield;
}

Player::~Player(){
  points = -1;
  cash = 0;
  bankrot = true;
  pos = -1;
  fieldCount = -1;
}
bool Player::ifBankrot(int money) {
  if (money <= 0) {
      return true;
  }
  return false;
}
bool Player::buy(int money){
    if (money > 0)
    money--;
    return 0;
}
int Player::getPos() {
    return pos;
}
int Player::getPoints() {
    return points;
}
int Player::getCash() {
    return cash;
}
int Player::getField() {
    return fieldCount;
}*/
