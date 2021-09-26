#include "Player.h"

void Player::buyfield(Field field) {
    if (field.bought == false && cash > field.fieldCost) {
        field.bought = true;
        cash -= field.bought;
        field.idPlayer = ID;
    }
}

