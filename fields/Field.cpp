#include "Field.h"

Field::Field() { 
    this->id = -1;
    this->bought = -1;
}

Field::Field(int id) {
	this->id = id;
	this->bought = -1;
}

void Field::setID(int id) {
	this->id = id;
}

void Field::setBought(int b) {
	this->bought = b;
}

int Field::getID() {
	return id;
}

int Field::getBought() {
	return bought;
}