#pragma once
#include <string>

class Field {
public:
	int ID;				// id поля
	int group;			// к какой группе карточек принадлежит 
	int type;           // к какому типу принадлежит поле 
	int fieldCost;		// цена поля 
	bool bought;		// куплено/не куплено 
	int idPlayer;		// номер игрока какому принадлежит поле 
	
	Field();
	Field(int id, int cost, int t_group);
	Field(const Field& P);

	void getID(int id);
	void getGroup(int g);
	void getFieldCost(int cost);
	void getBought(bool b);
	void getIDPlayer(int IDplayer);

private:

};