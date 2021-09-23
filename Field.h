#pragma once

class Field {
public:
	int id;
	bool bought;
	int idPlayer;
	int cost;
private:
	int mono1[3] = { 1, 2, 3 };
	int mono2[3] = { 5,6,7 };
	int mono3[3] = { 10,11,12 };
	int mono4[3] = { 15,16,17 };
	int mono5[4] = { 20,21,22,23 };
	int mono6[4] = { 25,26,27,28 };
	int mono7[3] = { 30,31,32 };
	int mono8[3] = { 33,34,35 };
	int mono9[3] = { 37,38,39 };
	int mono10[3] = { 40,41,42 };
	int porlal[4] = { 8,24,36,43 };
	int question[3] = { 4,13,19 };
	int bank[1] = { 14 };
	int space[4] = { 0,9,18,29 };
};