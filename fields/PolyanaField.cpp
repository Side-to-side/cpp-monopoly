#include "PolyanaField.h"

std::unique_ptr<AbstractPlayer> PolyanaField::action(std::unique_ptr<AbstractPlayer> player) {
  return std::move(player);
}

void PolyanaField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the PolyanaField class will be located here