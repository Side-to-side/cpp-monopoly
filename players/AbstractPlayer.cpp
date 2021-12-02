#include "AbstractPlayer.h"

AbstractPlayer::AbstractPlayer() {
	name = "";
	id = 0;
	cash = 15000;
	bankrot = 0;
	pos = 0;
	skip = 0;
  bot = true;
  points = 0;
  
  std::vector<int> tempV = { };

	std::string groups[9] = { "humanitarian","PE","DiscreteMath", "NumericalMethods",
		"Physics",  "DSA",
	"MathematicalAnalysis", "Circuitry", "Programming" };
	int k_iter = 0;
	while (k_iter < 9) {
		business.insert(std::make_pair(groups[k_iter], tempV));
		k_iter++;
	}
}

AbstractPlayer::AbstractPlayer(const std::string& name, int Playerid) {
	this->name = name;
	this->id = Playerid;
	cash = 15000;
	pos = 0;
	skip = 0;
	points = 0;
}

AbstractPlayer::AbstractPlayer(const AbstractPlayer& p) {
	this->name = p.name;
	this->id = p.id;
	cash = p.cash;
	bankrot = p.bankrot;
	pos = p.pos;
	skip = p.skip;
  bot = p.bot;
  points = p.points;
  business = p.business;
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

void AbstractPlayer::setBot(bool bot) {
  this->bot = bot;
}

void AbstractPlayer::setPoints(int points) {
	this->points = points;
}

void AbstractPlayer::setBusiness(std::string key) {
	business[key].push_back(1);
}
void AbstractPlayer::removeBusiness(std::string key) {
	business[key].pop_back();
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

bool AbstractPlayer::getBot() {
  return bot;
}
int AbstractPlayer::getPoints()
{
	return points;
}
int AbstractPlayer::getBusiness(std::string key) {
	return business[key].size();
}