#include "BasicField.h"

void BasicField::action(std::unique_ptr<AbstractPlayer>& player) {

}

void BasicField::deserialize(const json& data) {
    data.at("id").get_to(id);
    data.at("group").get_to(group);
    data.at("cost").get_to(cost);
  }

// functions for the BasicField class will be located here