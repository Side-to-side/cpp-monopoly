#include "SelectiveField.h"

void SelectiveField::action(std::unique_ptr<AbstractPlayer>& player) {

}

void SelectiveField::deserialize(const json& data) {
    data.at("id").get_to(id);
    data.at("cost").get_to(cost);
}
// functions for the SelectiveField class will be located here