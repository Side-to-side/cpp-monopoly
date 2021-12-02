#include "QuestionField.h"

void QuestionField::incident1(std::unique_ptr<AbstractPlayer>& player) { 
	int cashPlayer = player->getCash();
	if (cashPlayer >= 1000)
		cashPlayer -= 1000;
	else cashPlayer = 0;
	player->setCash(cashPlayer);
	player->setSkip(1);
}

void QuestionField::incident2(std::unique_ptr<AbstractPlayer>& player) {
	player->setSkip(1);
}

void QuestionField::incident3(std::unique_ptr<AbstractPlayer>& player) {
	int cashPlayer = player->getCash();
	cashPlayer += 2000;
	player->setCash(cashPlayer);
}

void QuestionField::incident4(std::unique_ptr<AbstractPlayer>& player) {
	int cashPlayer = player->getCash();
	if (cashPlayer >= 500)
		cashPlayer -= 500;
	else cashPlayer = 0;
	player->setCash(cashPlayer);
}

void QuestionField::incident5(std::unique_ptr<AbstractPlayer>& player) { 
	int cashPlayer = player->getCash();
	cashPlayer += 1000;
	player->setCash(cashPlayer);
}

std::unique_ptr<AbstractPlayer> QuestionField::action(std::unique_ptr<AbstractPlayer> player) {
	std::random_device generation;
	int opt = generation() % 5 + 1;
  View display;
	switch (opt) {
	case 1:
    display.showIncident1();
		incident1(player);
		return std::move(player);
	case 2:
    display.showIncident2();
		incident2(player);
		return std::move(player);
	case 3:
    display.showIncident3();
		incident3(player);
		return std::move(player);
	case 4:
    display.showIncident4();
      incident4(player);
		return std::move(player);
	case 5:
    display.showIncident5();
		incident5(player);
		return std::move(player);
	default:
		return std::move(player);
	}


}

void QuestionField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the QuestionField class will be located here