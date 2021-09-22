#pragma once
#include <string>
#include "Field.h"

class AI {
public:
	AI();
	AI(const std::string Name, int Playerid);
	AI(const AI& P);
	std::string Name();
	void PlayerID(int id);
	void Cash();
	void ifBankrot(bool a);
	void getPos(int pos);
	void buyfield(Field idfield);
private:
	std::string name;
	int playerid;
	int cash;
	bool bankrot;
	int pos;
};