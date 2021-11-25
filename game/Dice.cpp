#include <iostream>
#include <random>

#include "Dice.h"

int Dice::getValue() {
	return value;
}

int Dice::randValue() {
	std::random_device generation;
	value = generation() % 6 + 1;
	return value;
}
