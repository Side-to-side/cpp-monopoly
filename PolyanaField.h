#pragma once

#include "Field.h"

class PolyanaField : public Field {
private:


public:
	friend Field;
	PolyanaField(int t_id, int t_cost, int t_group)
		: Field(t_id, t_cost, t_group) {};
};