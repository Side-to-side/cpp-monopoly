#include "PolyanaField.h"

void PolyanaField::action(std::unique_ptr<AbstractPlayer>& player) {

}

void PolyanaField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the PolyanaField class will be located here