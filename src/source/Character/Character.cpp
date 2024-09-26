#include "Character.h"
#include <iostream>
#include <string>

Character::Character( std::string classType, std::string playerName, int health, int maxHealth, int damage, int defense ) :
    classType(classType), playerName(playerName), health(health), maxHealth(maxHealth), damage(damage), defense(defense) {};
Character::~Character() {};

//GETTERS
std::string Character::getClassType() const { return classType; }
std::string Character::getName() const { return playerName; }
int Character::getHealth() const { return health; }
int Character::getMaxHealth() const { return maxHealth; }
int Character::getDamage() const { return damage; }
int Character::getDefense() const { return defense; }

//SETTERS
void Character::setClassType( std::string newClassType ) { classType = newClassType; }
void Character::setName( std::string newName ) { playerName = newName; }
void Character::setHealth( int newHealth ) { health = newHealth; }
void Character::setMaxHealth( int newMaxHealth ) { maxHealth = newMaxHealth; }
void Character::setDamage( int newDamage ) { damage = newDamage; }
void Character::setDefense( int newDefense ) { defense = newDefense;} 

//Actions 
void Character::takeDamage( int damage ) {
    health -= damage;
    if( health < 0) {
        health = 0;
    }
}

int Character::attack() {
    return damage;
}

void Character::heal( int amount ) {
    health += amount;
    if( health > maxHealth ) {
        health = maxHealth;
    }
}

//Display
void Character::displayCharacter() const {
    std::cout << "Status:\n"
              << "Class: " << classType << "\n"
              << "Name: " << playerName << "\n"
              << "Health: " << health << "/" << maxHealth << "\n"
              << "Damage: " << damage << "\n"
              << "Defemse: " << defense << std::endl;
}