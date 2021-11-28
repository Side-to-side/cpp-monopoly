#include "../fields/Field.h"
#include "../game/MonopolyManager.h"
#include <iostream>

class Statistik {
private:
	std::vector <int> pl_points;
public:
	Statistik(int pl_amount);
	void info();
	void make_pt_pl(int new_points, int pl_points); // в 2 поле параметр з класу
	void make_pt_rent(int new_rent, int pl_id);
	void make_pt_special(int pl_id);
};