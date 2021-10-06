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

void trade(std::unique_ptr<AbstractPlayer> player1, std::unique_ptr<AbstractPlayer> player2);
void fieldCreation();
