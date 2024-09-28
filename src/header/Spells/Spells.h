#pragma once
#include <iostream>
#include <string>
#include <vector>

class Spell {
private:
    std::string spellName;
    int damage, manaCost;

public:
    Spell( std::string spellName, int damage, int manaCost );
    ~Spell();

    std::string getSpellName() const;
    int getDamage() const;
    int getManaCost() const;

    void setSpellName( std::string newSpellName );
    void setDamage( int newDamage );
    void setManaCost( int newManaCost );

    void displaySpell() const;

};

class Spells {
private:
    std::vector<Spell> spellBook;

public:
    void addSpell( const Spell* spellName );
    void removeSpell( const Spell* spellName );
};