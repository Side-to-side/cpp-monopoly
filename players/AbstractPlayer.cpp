#include "AbstractPlayer.h"

AbstractPlayer::AbstractPlayer() {
	name = "";
	id = 0;
	cash = 0;
	bankrot = 0;
	pos = 0;
	skip = 0;
}

AbstractPlayer::AbstractPlayer(const std::string& name, int Playerid) {
	this->name = name;
	this->id = Playerid;
	cash = 0;
	bankrot = 0;
	pos = 0;
	skip = 0;
}

AbstractPlayer::AbstractPlayer(const AbstractPlayer& p) {
	this->name = p.name;
	this->id = p.id;
	cash = p.cash;
	bankrot = p.bankrot;
	pos = p.pos;
	skip = p.skip;
}

void AbstractPlayer::setName(const std::string name) {
	this->name = name;
}

void AbstractPlayer::setID(int id) {
	this->id = id;
}

void AbstractPlayer::setCash(int cash) {
	this->cash = cash;
}

void AbstractPlayer::setBankrot(bool bankrot) {
	this->bankrot = bankrot;
}

void AbstractPlayer::setPos(int pos) {
	this->pos = pos;
}

void AbstractPlayer::setSkip(bool skip){
  this->skip = skip;
}

void AbstractPlayer::setPurchasedField(std::string group, int amount) {
	auto iter = purchasedFields.find(group);
	if (iter == purchasedFields.end()) {
		purchasedFields.insert(make_pair(group, amount));
	}
	else {
		iter->second = amount;
	}
}

std::string AbstractPlayer::getName() {
	return name;
}

int AbstractPlayer::getID() {
	return id;
}

int AbstractPlayer::getCash() {
	return cash;
}

bool AbstractPlayer::getBankrot() {
	return bankrot;
}

int AbstractPlayer::getPos() {
	return pos;
}

bool AbstractPlayer::getSkip() {
	return skip;
}

int AbstractPlayer::getPurchasedField(std::string group) {
	auto iter = purchasedFields.find(group);
	if (iter == purchasedFields.end())
		return 0;
	else return iter->second;

}