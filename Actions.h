#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "AbstractPlayer.h"
#include "Field.h"
#include "BasicField.h"
#include "StartField.h"
#include "VadimField.h"
#include "QuestionField.h"
#include "PortalField.h"
#include "PolyanaField.h"
#include "GiftField.h"
#include "SelectiveField.h"

std::vector<std::unique_ptr<Field>> fieldCreation();
bool mySort(const std::unique_ptr<Field>& a, const std::unique_ptr<Field>& b);