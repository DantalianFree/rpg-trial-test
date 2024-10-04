#include <iostream>
#include <string>
#include "CombatSystem.h"

void Combat::startCombat( Character* player, Enemy& enemy ) {
    std::cout << "Combat Started between " << player->getName() << " and " << enemy.getEnemyType() << "\n";
}