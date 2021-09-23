#include "AbstractPlayer.h"

abstractPlayer::abstractPlayer() {
	name = "";
	ID = 0;
	cash = 0;
	bankrot = 0;
	pos = 0;
}

abstractPlayer::abstractPlayer(const std::string& Name, int Playerid) {
	name = Name;
	ID = Playerid;
	cash = 0;
	bankrot = 0;
	pos = 0;
}

abstractPlayer::abstractPlayer(const abstractPlayer& p) {
	name = p.name;
	ID = p.ID;
	cash = p.cash;
	bankrot = p.bankrot;
	pos = p.pos;
}

std::string abstractPlayer::Name() {
	std::string name[8] = { "Noah", "Liam", "Mason", "Jacob", "William", "Ethan", "Michael", "Alexander" };
	return name[rand() % 8];
}

void abstractPlayer::IDplayers(int id) {
	ID = id;
}

void abstractPlayer::Cash(int a) {
	cash = a;
}

void abstractPlayer::ifBankrot(bool a) {
	bankrot = a;
}

void abstractPlayer::getPos(int p) {
	pos = p;
}

