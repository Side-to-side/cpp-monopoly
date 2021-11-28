#include "QuestionField.h"

void QuestionField::info() {
	std::cout << "it's QuestionField\n";
}

void QuestionField::incident1(std::unique_ptr<AbstractPlayer>& player) {
	int cashPlayer = player->getCash();
	if (cashPlayer >= 1000)
		cashPlayer -= 1000;
	else cashPlayer = 0;
	player->setCash(cashPlayer);
	player->setSkip(1);
	std::cout << "Today is the IASA event, you spent 1000 money and skip one move because of severe headache :)" << std::endl;
}

void QuestionField::incident2(std::unique_ptr<AbstractPlayer>& player) {
	player->setSkip(1);
	std::cout << "You suffered from bullying by Bokhonov and decided to watch the series, so you skip one move" << std::endl;
}

void QuestionField::incident3(std::unique_ptr<AbstractPlayer>& player) {
	int cashPlayer = player->getCash();
	cashPlayer += 2000;
	player->setCash(cashPlayer);
	std::cout << "Today is scholarship day and you get +2000 money :)" << std::endl;
}

void QuestionField::incident4(std::unique_ptr<AbstractPlayer>& player) {
	int cashPlayer = player->getCash();
	if (cashPlayer >= 500)
		cashPlayer -= 500;
	else cashPlayer = 0;
	player->setCash(cashPlayer);
	std::cout << "You met a friend and you sat in White Naliv, so you lost 500 money" << std::endl;
}

void QuestionField::incident5(std::unique_ptr<AbstractPlayer>& player) {
	int cashPlayer = player->getCash();
	cashPlayer += 1000;
	player->setCash(cashPlayer);
	std::cout << "You found 1000 money in the grass near the dorm and of course you took them :)))" << std::endl;
}

void QuestionField::action(std::unique_ptr<AbstractPlayer>& player) {
	std::random_device generation;
	int opt = generation() % 5 + 1;
	switch (opt) {
	case 1:
		incident1(player);
		return;
	case 2:
		incident2(player);
		return;
	case 3:
		incident3(player);
		return;
	case 4:
		incident4(player);
		return;
	case 5:
		incident5(player);
		return;
	default:
		return;
	}


}

void QuestionField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the QuestionField class will be located here