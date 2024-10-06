#include <iostream>
#include <string>
#include <stdlib.h>
#include "CombatSystem.h"

void Combat::startCombat( Character* player, Enemy& enemy ) {

    bool playerIsAlive;
    bool enemyIsAlive;
    playerIsAlive = player->isAlive();
    enemyIsAlive = enemy.isAlive();

    std::cout << "Combat Started between " << player->getName() << " and " << enemy.getEnemyType() << "\n";

    while( playerIsAlive && enemyIsAlive ) {
        if( isPlayerTurn ) {
            int choice;
            std::cout << "Its your turn to attack!\n" 
                      << "1. Attack\n"
                      << "2. Heal\n" 
                      << "Choose an Action: ";
            std::cin >> choice;

            if( player->isAlive() && enemy.isAlive() ) {
                switch( choice ) {
                case 1:
                    int playerDamage;
                    playerDamage = player->getDamage();
                    std::cout << "You attacked " << enemy.getEnemyType() << " for " << player->getDamage() << std::endl;
                    enemy.takeDamage( playerDamage );
                    if( enemy.getHealth() <= 0 ) {
                        std::cout << enemy.getEnemyType() << " has been slain!" << std::endl;
                        enemyIsAlive = false;
                        break;
                    } else {
                        player->displayCharacter();
                        enemy.displayEnemy();
                        isPlayerTurn = false;
                        break;
                    }
                case 2:
                    std::cout << "You healed yourself! (WIP)"; //Will be implemented after setting the combat
                    isPlayerTurn = false;
                    break;
                }
            }
        } else {
            int enemyDamage;
            enemyDamage = enemy.getDamage();
            std::cout << enemy.getEnemyType() << " attacks " << player->getName() << " for " << enemy.getDamage();
            player->takeDamage( enemyDamage );
            player->displayCharacter();
            enemy.displayEnemy();
            isPlayerTurn = true;
        }
    }
}
