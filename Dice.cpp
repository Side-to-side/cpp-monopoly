#include "Dice.h"
#include <iostream>
#include <random>

int Dice::getValue() {
	return value;
}

int Dice::randValue() {
	std::random_device generation;
	value = generation() % 6 + 1;
	return value;
}
