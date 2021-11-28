#include "VadimField.h"

void VadimField::action(std::unique_ptr<AbstractPlayer>& player) {
	player->setPos(9);
}

void VadimField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
std::string VadimField::getGroup() {
	return "no group";
}
// functions for the VadimField class will be located here