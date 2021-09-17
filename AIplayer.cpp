#include "AIplayer.h"

AI::AI()
{
	name = nullptr;
	playerid = 0;
	cash = 0;
}

AI::AI(const std::string Name, int Playerid) {
	name = Name;
	playerid = Playerid;
	cash = 0;
}

AI::AI(const AI& p) {
	name = p.name;
	playerid = p.playerid;
	cash = p.cash;
}