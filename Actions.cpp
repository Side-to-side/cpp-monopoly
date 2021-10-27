#include "Actions.h"

bool mySort(const std::unique_ptr<Field>& a, const std::unique_ptr<Field>& b) {
	return a->ID < b->ID;
}

// function to transfer field data from files to vector

std::vector<std::unique_ptr<Field>> fieldCreation() {
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

	std::ifstream f6("SelectiveField.txt");
	while (!f6.eof()) {
		int id, group, cost;
		f6 >> id >> group >> cost;
		SelectiveField field(id, group, cost);
		map.push_back(std::make_unique<SelectiveField>(field));
	}

	std::sort(map.begin(), map.end(), mySort);
	
	return map;
}