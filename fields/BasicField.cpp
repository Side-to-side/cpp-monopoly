#include "BasicField.h"

void BasicField::setGroup(std::string g) {
	this->group = g;
}

void BasicField::setCost(int cost) {
	this->cost = cost;
}

std::string BasicField::getGroup() {
	return group;
}

int BasicField::getCost() {
	return cost;
}

void BasicField::action(std::unique_ptr<AbstractPlayer>& player) {

}

void BasicField::deserialize(const json& data) {
    data.at("id").get_to(id);
    data.at("group").get_to(group);
    data.at("cost").get_to(cost);
}

// functions for the BasicField class will be located here