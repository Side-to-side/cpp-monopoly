#include <iostream>
#include <vector>
#include "../players/AbstractPlayer.h"
class Statistik {
	
public:
	Statistik(int pl_count);
	void info();
	void update_pt(int pl_id, int points);
private:
	std::vector <int> pl_points;
};