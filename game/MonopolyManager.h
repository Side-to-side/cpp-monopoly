#pragma once
#include <string>
#include <list>
#include <memory>
#include "../fields/Field.h"

class MonopolyManager
{
public:
	std::unordered_map<std::string, std::vector<int>> monopolies_map;
	MonopolyManager();
	MonopolyManager(std::string);
	std::unordered_map<std::string, std::vector<int>> getMapId();
private: 
	std::string name;
	
};

