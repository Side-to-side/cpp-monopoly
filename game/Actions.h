#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

#include "../players/AbstractPlayer.h"

#include "../fields/Field.h"
#include "../fields/BasicField.h"
#include "../fields/StartField.h"
#include "../fields/VadimField.h"
#include "../fields/QuestionField.h"
#include "../fields/PortalField.h"
#include "../fields/PolyanaField.h"
#include "../fields/GiftField.h"
#include "../fields/SelectiveField.h"

std::vector<std::unique_ptr<Field>> fieldCreation();