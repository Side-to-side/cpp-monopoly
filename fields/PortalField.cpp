#include "PortalField.h"

std::unique_ptr<AbstractPlayer> PortalField::action(std::unique_ptr<AbstractPlayer> player) {
	
  std::random_device generation;

  player->setPos(generation() % 44);

  return std::move(player);
}

void PortalField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the PortalField class will be located here