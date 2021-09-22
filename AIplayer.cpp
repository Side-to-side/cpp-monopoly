#include "AIplayer.h"

AI::AI()
{
	name = "";
	playerid = 0;
	cash = 0;
	bool bankrot = 0;
	int pos = 0;
}

AI::AI(const std::string Name, int Playerid) {
	name = Name;
	playerid = Playerid;
	cash = 0;
}

AI::AI(const AI& p) {
	name = p.name;
	playerid = p.playerid;
	cash = p.cash;
}

std::string AI::Name() {
	std::string name[8] = { "Noah", "Liam", "Mason", "Jacob", "William", "Ethan", "Michael", "Alexander"};
	return name[rand() % 8];
}

void AI::PlayerID(int id) {
	playerid = id;
}

void AI::Cash() {
	cash = 15000;
}

void AI::ifBankrot(bool a) {
	bankrot = a;
}

void AI::getPos(int p) {
	pos = p;
}

void AI::buyfield(Field idfield) {
	if (idfield.bought == true && cash > idfield.cost) {
		idfield.bought = false;
		cash -= idfield.bought;
	}
}