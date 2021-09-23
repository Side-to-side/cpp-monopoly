#include "AIplayer.h"


void AI::buyfield(Field idfield) {
	if (idfield.bought == true && cash > idfield.cost) {
		idfield.bought = false;
		cash -= idfield.bought;
	}
}