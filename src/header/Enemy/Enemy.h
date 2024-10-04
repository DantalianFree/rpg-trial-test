#pragma once
#include <iostream>
#include <string>

class Enemy {
private:
    std::string enemyType;
    int damage, defense, health, maxHealth;

public:
    Enemy( std::string enemyType, int damage, int defense, int health, int maxHealth );
    ~Enemy();

    std::string getEnemyType() const;
    int getDamage() const;
    int getDefense() const;
    int getHealth() const; 
    int getMaxHealth() const;

    void setEnemyType( std::string newType );
    void setDamage( int newDamage );
    void setDefense( int newDefense );
    void setHealth( int newHealth );
    void setMaxHealth( int newMaxHealth );

    void displayEnemy() const;

    int attack( int damage );
    void heal( int amount );


};