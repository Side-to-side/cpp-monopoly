#include "PortalField.h"

void PortalField::action(std::unique_ptr<AbstractPlayer>& player) {
	
  std::random_device generation;

  player->setPos(generation() % 44);

}

void PortalField::deserialize(const json& data) {
    data.at("id").get_to(id);
}
// functions for the PortalField class will be located here