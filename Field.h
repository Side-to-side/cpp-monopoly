#pragma once
#include <string>
//#include "BasicField.h";
//#include "SelectiveField.h";
//#include "QuestionField.h";
//#include "GiftField.h";
//#include "PortalField.h";
//#include "StartField.h";
//#include "PolyanaField.h";
//#include "VadimField.h";

class Field {
public:
	int ID;				// id поля
	int group;			// к какой группе карточек принадлежит 
	int type;           // к какому типу принадлежит поле 
	int fieldCost;		// цена поля 
	bool bought;		// куплено/не куплено 
	int idPlayer;		// номер игрока какому принадлежит поле 
	//std::string nameField;
	//bool forPurchase;

	BasicField* ptrBasic;
	SelectiveField* ptrSelective;
	QuestionField* ptrQuestion;
	GiftField* ptrGift;
	PortalField* ptrPortal;
	StartField* ptrStart;
	PolyanaField* ptrPolyana;
	VadimField* ptrVadim;
	

	Field();
	//Field(int id, int group, int cost);
	Field(int id, int cost, int t_group);
	Field(const Field& P);

	void getID(int id);
	void getGroup(int g);
	void getFieldCost(int cost);
	void getBought(bool b);
	void getIDPlayer(int IDplayer);

private:

};