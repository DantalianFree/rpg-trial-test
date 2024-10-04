#pragma once
#include <iostream>
#include <string>
#include "Character.h"
#include "Enemy.h"

class Combat {
public:
    void startCombat( Character* player, Enemy& enemy);
    void combatStatus() const;

};