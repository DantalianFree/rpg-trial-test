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
                      << "2. Cast Spell\n"
                      << "3. Heal\n" 
                      << "Choose an Action: ";
            std::cin >> choice;

            if( player->isAlive() && enemy.isAlive() ) {
                switch( choice ) {
                case 1:
                    int playerDamage;
                    playerDamage = player->getDamage();
                    std::cout << "You attacked " << enemy.getEnemyType() << " for " << player->getDamage() << " damage!" << std::endl;
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
                    std::cout << "cast";
                    break;
                case 3:
                    std::srand(time(0));
                    int amount = rand() % 9 + 1;

                    std::cout << "You healed " << amount << " health points!" << std::endl;
                    player->heal(amount);
                    isPlayerTurn = false;
                    break;
                }
            }
        } else {
            int enemyDamage;
            enemyDamage = enemy.getDamage();
            std::cout << enemy.getEnemyType() << " attacks " << player->getName() << " for " << enemy.getDamage() << " damage!\n";
            player->takeDamage( enemyDamage );
            
            if (player->getHealth() <= 0) {
            std::cout << player->getName() << " has been defeated!\n";
            playerIsAlive = false;
            } else {
                player->displayCharacter();
                enemy.displayEnemy();
                isPlayerTurn = true;
            }
        }
    }
}
