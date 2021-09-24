#include "Field.h"

Field::Field() {
	ID = 0;
	group = 0;
	fieldCost = 0;
	bought = false;
	idPlayer = -1;
}

Field::Field(int id, int cost) {
	ID = id;
	group = 0;
	fieldCost = cost;
	bought = false;
	idPlayer = -1;
}

Field::Field(const Field& P) {
	ID = P.ID;
	group = P.group;
	fieldCost = P.fieldCost;
	bought = P.bought;
	idPlayer = P.idPlayer;
}

void Field::getID(int id) {
	ID = id;
}
void Field::getGroup(int g) {
	group = g;
}

void Field::getFieldCost(int cost) {
	fieldCost = cost;
}

void Field::getBought(bool b) {
	bought = b;
}

void Field::getIDPlayer(int IDplayer) {
	idPlayer = IDplayer;
}