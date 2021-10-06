#include "Actions.h"

void trade(std::unique_ptr<AbstractPlayer> player1, std::unique_ptr<AbstractPlayer> player2){
	std::cout << "Trade" << std::endl;
	std::cout << player1->namePlayer << " and " << player2->namePlayer << std::endl << std::endl;
	std::cout << player1->namePlayer << " fields: ";

	std::vector <int> idFieldPlayer1;
	std::vector <int> idFieldPlayer2;

	int idField;
	while (std::cin >> idField) {
		idFieldPlayer1.push_back(idField);
	}
	std::cout << std::endl << player2->namePlayer << " fields: ";
	while (std::cin >> idField) {
		idFieldPlayer2.push_back(idField);
	}

}

bool mySort(const std::unique_ptr<Field>& a, const std::unique_ptr<Field>& b) {
	return a->ID < b->ID;
}

void fieldCreation() {
	std::vector<std::unique_ptr<Field>> map;
	std::ifstream f("BasicField.txt");
	while (!f.eof()) {
		int id, group, cost;
		f >> id >> group >> cost;
		BasicField field(id, group, cost);
		map.push_back(std::make_unique<BasicField>(field));
	}

	std::ifstream f0("StartField.txt");
	while (!f0.eof()) {
		int id, group, cost;
		f0 >> id >> group >> cost;
		StartField field(id, group, cost);
		map.push_back(std::make_unique<StartField>(field));
	}
	std::ifstream f1("VadimField.txt");
	while (!f1.eof()) {
		int id, group, cost;
		f1 >> id >> group >> cost;
		VadimField field(id, group, cost);
		map.push_back(std::make_unique<VadimField>(field));
	}
	std::ifstream f2("QuestionField.txt");
	while (!f2.eof()) {
		int id, group, cost;
		f2 >> id >> group >> cost;
		QuestionField field(id, group, cost);
		map.push_back(std::make_unique<QuestionField>(field));
	}
	std::ifstream f3("PortalField.txt");
	while (!f3.eof()) {
		int id, group, cost;
		f3 >> id >> group >> cost;
		PortalField field(id, group, cost);
		map.push_back(std::make_unique<PortalField>(field));
	}
	std::ifstream f4("PolyanaField.txt");
	while (!f4.eof()) {
		int id, group, cost;
		f4 >> id >> group >> cost;
		PolyanaField field(id, group, cost);
		map.push_back(std::make_unique<PolyanaField>(field));
	}
	std::ifstream f5("GiftField.txt");
	while (!f5.eof()) {
		int id, group, cost;
		f5 >> id >> group >> cost;
		GiftField field(id, group, cost);
		map.push_back(std::make_unique<GiftField>(field));
	}
	std::cout << "ok";

	std::ifstream f6("SelectiveField.txt");
	while (!f6.eof()) {
		int id, group, cost;
		f6 >> id >> group >> cost;
		SelectiveField field(id, group, cost);
		map.push_back(std::make_unique<SelectiveField>(field));
	}
	std::cout << "ok";

	std::sort(map.begin(), map.end(), mySort);
	for (int i = 0; i < map.size(); i++) {
		std::cout << map[i]->ID << std::endl;
	}
}