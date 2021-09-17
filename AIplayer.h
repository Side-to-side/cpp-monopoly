#pragma once
#include "string"

class AI {
public:
	AI();
	AI(const std::string Name, int Playerid);
	AI(const AI& P);
	char* getName();
	int getPlayerID();
	int getCash();
private:
	std::string name;
	int playerid;
	int cash;
};