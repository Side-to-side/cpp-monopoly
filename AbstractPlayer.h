#pragma once
#include <string>
#include "Field.h"

class abstractPlayer {
public:
	abstractPlayer();
	abstractPlayer(const std::string& Name, int Playerid);
	abstractPlayer(const abstractPlayer& P);
	std::string Name();
	void IDplayers(int id);
	void Cash(int a);
	void ifBankrot(bool a);
	void getPos(int pos);

//protected:
	std::string name;
	int ID;
	int cash;
	bool bankrot;
	int pos;

private:
	/*std::string name;
	int ID;
	int cash;
	bool bankrot;
	int pos;*/
};