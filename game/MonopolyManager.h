
#pragma once
#include <string>
#include <list>
#include <memory>
#include <vector>
#include <unordered_map>

//#include "../fields/Field.h"

class MonopolyManager
{
public:
	std::unordered_map<std::string, std::vector<int>> upg_map;
	MonopolyManager();
	MonopolyManager(std::string);
	std::unordered_map<std::string, std::vector<int>> getMapId();
	bool vector_check(std::string key, int id_pl);
private: 
	std::string name;
	
};