#pragma once
#include <string>
#include <list>
#include <memory>
#include "fields/Field.h"

class MonopolyManager
{
public:
	MonopolyManager();
	~MonopolyManager();

private:
	int master_id;
	std::list<std::unique_ptr<Field>> shopList;
};

