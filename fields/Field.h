#pragma once
#include <string>

class Field {
public:
	int ID;				// id ����
	int group;			// � ����� ������ �������� ����������� 
	int type;           // � ������ ���� ����������� ���� 
	int fieldCost;		// ���� ���� 
	bool bought;		// �������/�� ������� 
	int idPlayer;		// ����� ������ ������ ����������� ���� 
	
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