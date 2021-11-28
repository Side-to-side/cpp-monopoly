
#include "../game/MonopolyManager.h";

MonopolyManager::MonopolyManager()
{
	name = " ";
}

MonopolyManager::MonopolyManager(std::string nameT) {
	name = nameT;
}

std::unordered_map<std::string, std::vector<int>> MonopolyManager::getMapId() {
	return monopolies_map;
}
