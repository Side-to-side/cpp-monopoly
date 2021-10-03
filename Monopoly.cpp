#include "Monopoly.h"

void Monopoly::menu() {
	std::cout << "MENU:\n";
	std::cout << "number of players: ";
	int n;
	std::cin >> n;
	numberPlayers = n;
	std::cout << "number of bots: ";
	std::cin >> n;
	numberBots = n;
}

void Monopoly::startGame() {
	int id = 0;
	for (int i = 0; i < numberPlayers; i++) {
		Player a("Human", id);
		vec_abstractPlayer.push_back(a);
		id++;
	}
	for (int i = 0; i < numberBots; i++) {
		AI a("Bot", id);
		vec_abstractPlayer.push_back(a);
		id++;
	}
	for (int i = 0; i < numberBots + numberPlayers; i++) {
		std::cout << vec_abstractPlayer[i].ID << " " << vec_abstractPlayer[i].pos << std::endl;
	}
	StartField f0(0, -1, 1);
	BasicField f1(1, 0, 1);
	BasicField f2(2, 0, 1);
	BasicField f3(3, 0, 1);
	QuestionField f4(4, -1, 11);
	BasicField f5(5, 0, 2);
	BasicField f6(6, 0, 2);
	BasicField f7(7, 0, 2);
	PortalField f8(8, -1, 13);
	PolyanaField f9(9, -1, 15);
	BasicField f10(10, 0, 3);
	BasicField f11(11, 0, 3);
	BasicField f12(12, 0, 3);
	QuestionField f13(13, -1, 11);
	SelectiveField f14(14, 0, 10);
	BasicField f15(15, 0, 4);
	BasicField f16(16, 0, 4);
	BasicField f17(17, 0, 4);
	VadimField f18(18, -1, 16);
	SelectiveField f19(19, 0, 10);
	BasicField f20(20, 0, 5);
	BasicField f21(21, 0, 5);
	BasicField f22(22, 0, 5);
	BasicField f23(23, 0, 5);
	PortalField f24(24, -1, 13);
	BasicField f25(25, 0, 6);
	BasicField f26(26, 0, 6);
	BasicField f27(27, 0, 6);
	BasicField f28(28, 0, 6);
	QuestionField f29(29, -1, 11);
	BasicField f30(30, 0, 7);
	BasicField f31(31, 0, 7);
	BasicField f32(32, 0, 7);
	BasicField f33(33, 0, 8);
	BasicField f34(34, 0, 8);
	BasicField f35(35, 0, 8);
	PortalField f36(36, -1, 13);
	SelectiveField f37(37, 0, 10);
	GiftField f38(38, -1, 12);
	QuestionField f39(39, -1, 11);
	BasicField f40(40, 0, 9);
	BasicField f41(41, 0, 9);
	BasicField f42(42, 0, 9);
	Cube Cube1;
	Cube Cube2;
}

void Monopoly::updateGame() {
	bool active = 1;
	while (active) {
		for (int i = 0; i < numberPlayers; i++)
		{	
			std::cout << "Set cubes\n";
			
			vec_abstractPlayer[i].ID;
		}
	}
}