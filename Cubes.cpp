#include "Cubes.h"
#include <iostream>
#include <random>

int Cube::getValue() {
	return value;
}

int Cube::randValue() {
	std::random_device generation;
	value = generation() % 6 + 1;
	return value;
}
