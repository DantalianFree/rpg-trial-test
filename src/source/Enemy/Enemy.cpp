#include <iostream>
#include <string>
#include "Enemy.h"

Enemy::Enemy( std::string enemyType, int damage, int defense, int health, int maxHealth ) 
    : enemyType(enemyType), damage(damage), defense(defense), health(health), maxHealth(maxHealth) {};
Enemy::~Enemy() {};
 
std::string Enemy::getEnemyType() const { return enemyType; }
int Enemy::getDamage() const { return damage; }
int Enemy::getDefense() const { return defense; }
int Enemy::getHealth() const { return health; }
int Enemy::getMaxHealth() const { return maxHealth; }

void Enemy::setEnemyType( std::string newType ) { enemyType = newType; }
void Enemy::setDamage( int newDamage ) { damage = newDamage; }
void Enemy::setDefense( int newDefense ) { defense = newDefense; }
void Enemy::setHealth( int newHealth ) { health = newHealth; }
void Enemy::setMaxHealth( int newMaxHealth ) { maxHealth = newMaxHealth; }

void Enemy::displayEnemy() const {
    std::cout << "Enemy Status:\n"
              << "Type: " << enemyType << "\n"
              << "Health: " << health << "/" << maxHealth << "\n"
              << "Damage: " << damage << "\n"
              << "Defense: " << defense << std::endl;
}

int Enemy::attack( int damage ) {
    return damage;
}

void Enemy::heal( int amount ) {
    health += amount;
    if(health > maxHealth ) {
        health = maxHealth;
    }
}