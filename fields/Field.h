#pragma once
#include <string>

class Field {
public:	
	Field();
	Field(int id, std::string group, int cost);
	Field(const Field& P);

	void setID(int id);
	void setGroup(std::string g);
	void setCost(int cost);
	void setBought(int b);

	int getID();
	std::string getGroup();
	int getCost();
	int getBought();

protected:
  int id;
	std::string group;
	int cost;
	int bought;
  
private:

};