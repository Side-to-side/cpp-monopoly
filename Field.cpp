#include "Field.h"

Field::Field() { 
	ID = 0;
	group = 0;
	fieldCost = 0;
	bought = false;
	idPlayer = -1;
	type = -1;
	
}

Field::Field(int t_id, int t_cost, int t_group) {
	ID = t_id;
	group = t_group;
	fieldCost = t_cost;
	bought = false;
	idPlayer = -1;
	type = -1;
}

Field::Field(const Field& P) {
	ID = P.ID;
	group = P.group;
	fieldCost = P.fieldCost;
	bought = P.bought;
	idPlayer = P.idPlayer;
	type = -1;
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
