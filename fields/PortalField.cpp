#include "PortalField.h"

void PortalField::action(std::unique_ptr<AbstractPlayer>& player) {
	
  std::random_device generation;

  player->setPos(generation() % 44);

}
// functions for the PortalField class will be located here