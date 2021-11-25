#include "QuestionField.h"

void QuestionField::action(std::unique_ptr<AbstractPlayer>& player) {

}

void QuestionField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the QuestionField class will be located here