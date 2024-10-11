#pragma once
#include <iostream>
#include <string>
#include "Spells.h"

class Character {
private:
    std::string classType;
    std::string playerName;
    int health, maxHealth, damage, defense;
    Spells spellBook;

public:
    //Constructor/Destructor
    Character( std::string classType, std::string playerName, int health, int maxHealth, int damage, int defense );
    virtual ~Character();

    //GETTERS
    std::string getClassType() const;
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getDamage() const;
    int getDefense() const;

    //SETTERS
    void setClassType( std::string newClassType );
    void setName( std::string newName );
    void setHealth( int newHealth );
    void setMaxHealth( int newMaxHealth );
    void setDamage( int newDamage );
    void setDefense( int newDefense );

    //Actions
    void takeDamage( int damage );
    int attack();
    void heal( int amount );

    //Display
    void displayCharacter() const;

    bool isAlive();

};