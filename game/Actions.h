#include <iostream>
#include <fstream>
#include <vector>
#include <memory>
#include <unordered_map>

#include "../fields/Field.h"
#include "../fields/BasicField.h"
#include "../fields/StartField.h"
#include "../fields/VadimField.h"
#include "../fields/QuestionField.h"
#include "../fields/PortalField.h"
#include "../fields/PolyanaField.h"
#include "../fields/GiftField.h"
#include "../fields/SelectiveField.h"


#include "../lib/json.hpp"

std::vector<std::unique_ptr<Field>> fieldCreation();
