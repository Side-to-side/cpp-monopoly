#include "AbstractPlayer.h"

AbstractPlayer::AbstractPlayer() {
	namePlayer = "";
	ID = 0;
	cash = 0;
	bankrot = 0;
	pos = 0;
	skip = 0;
}

AbstractPlayer::AbstractPlayer(const std::string& name, int Playerid) {
	namePlayer = name;
	ID = Playerid;
	cash = 0;
	bankrot = 0;
	pos = 0;
	skip = 0;
}

AbstractPlayer::AbstractPlayer(const AbstractPlayer& p) {
	namePlayer = p.namePlayer;
	ID = p.ID;
	cash = p.cash;
	bankrot = p.bankrot;
	pos = p.pos;
	skip = p.skip;
}

void AbstractPlayer::name(const std::string name) {
	namePlayer = name;
}

void AbstractPlayer::IDplayers(int id) {
	ID = id;
}

void AbstractPlayer::Cash(int a) {
	cash = a;
}

void AbstractPlayer::ifBankrot(bool a) {
	bankrot = a;
}

void AbstractPlayer::getPos(int p) {
	pos = p;
}

