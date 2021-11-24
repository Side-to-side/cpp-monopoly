#include "Field.h"

Field::Field() { 
    this->id = -1;
    this->group = "";
    this->cost = 0;
    this->bought = -1;
}

Field::Field(int id, std::string group, int cost) {
	this->id = id;
	this->group = group;
	this->cost = cost;
	this->bought = -1;
}

void Field::setID(int id) {
	this->id = id;
}

void Field::setGroup(std::string g) {
	this->group = g;
}

void Field::setCost(int cost) {
	this->cost = cost;
}

void Field::setBought(int b) {
	this->bought = b;
}

int Field::getID() {
	return id;
}

std::string Field::getGroup() {
	return group;
}

int Field::getCost() {
	return cost;
}

int Field::getBought() {
	return bought;
}
