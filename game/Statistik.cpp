#include "Statistik.h"


Statistik::Statistik(int pl_amount) {
	for (int i = 0; i < pl_amount; i++) {
		pl_points.push_back(0);
	}
}

void Statistik::info() {
	std::cout << "\n---- Your current game points ----\n";
	for (int i = 0; i < pl_points.size(); i++) {
		std::cout << "Player " << i+1 << " : " << pl_points[i] << "\n";
	}
}

void Statistik::make_pt_pl(int fields_count, int pl_id) {
	pl_points[pl_id] += fields_count * 5;
}

void Statistik::make_pt_rent(int new_rent, int pl_id) {
	pl_points[pl_id] += new_rent;
}

void Statistik::make_pt_special(int pl_id) {
	pl_points[pl_id] *= 1, 1; 
}

