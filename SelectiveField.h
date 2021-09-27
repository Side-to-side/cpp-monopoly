#pragma once

#include "Field.h"

class SelectiveField : public Field {
private:


public:
	friend Field;
	SelectiveField(int t_id, int t_cost, int t_group)
		: Field(t_id, t_cost, t_group) {};
};