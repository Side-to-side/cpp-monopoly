#include "QuestionField.h"

void QuestionField::action(std::unique_ptr<AbstractPlayer>& player) {

}

void QuestionField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
std::string QuestionField::getGroup() {
	return "no group";
}
// functions for the QuestionField class will be located here