#pragma once

#include "Field.h"

class VadimField : public Field {
private:


public:
	friend Field;
	VadimField(int t_id, int t_cost, int t_group)
		: Field(t_id, t_cost, t_group) {
		type = 8;
	}
};