#pragma once
#include <iostream>
#include <string>
#include "Character.h"
#include "Enemy.h"
#include "Spells.h"

class Combat {
public:
    bool isPlayerTurn = true; 
    void startCombat( Character* player, Enemy& enemy);

};