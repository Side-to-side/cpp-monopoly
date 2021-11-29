
#include "../game/MonopolyManager.h"

MonopolyManager::MonopolyManager() //таблиця потрібна для прокачки монополій, шляхом провірки чи всі поля належать гравцю.
{
	name = " ";
  
  std::vector<int> tempV = { };
	std::string groups[9] = { "humanitarian","PE","DiscreteMath", "NumericalMethods",
	"Circuitry"	,  "DSA",
	"MathematicalAnalysis", "Physics", "Programming" };
	int k_iter = 0;
	while (k_iter < 9) {
		upg_map.insert(std::make_pair(groups[k_iter], tempV));
		k_iter++;	
	}
}

MonopolyManager::MonopolyManager(std::string nameT) {
	name = nameT;
}

std::unordered_map<std::string, std::vector<int>> MonopolyManager::getMapId() {
	return upg_map;
}

bool MonopolyManager::vector_check(std::string key, int id_pl) {
	std::vector <int> temp = upg_map.find(key)->second;
	for (int i = 0; i < temp.size(); i++) {
		if (temp[i] != id_pl) return false;
	}
	return true;
}