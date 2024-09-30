#include "Spells.h"
#include <iostream>

Spell::Spell( std::string spellName, int damage, int manaCost ) : spellName( spellName ), damage( damage ), manaCost( manaCost) {};
Spell::~Spell() {};

std::string Spell::getSpellName() const { return spellName; }
int Spell::getDamage() const { return damage; }
int Spell::getManaCost() const { return manaCost; }

void Spell::setSpellName( std::string newSpellName ) { spellName = newSpellName; }
void Spell::setDamage( int newDamage ) { damage = newDamage; }
void Spell::setManaCost( int newManaCost ) { manaCost = newManaCost; }

void Spell::displaySpell() const {
    std::cout << "Spell: " << spellName << "\n"
              << "Damage: " << damage << "\n"
              << "Mana Cost: " << manaCost << std::endl;
}


void Spells::addSpell( const Spell spellName ) {
    spellBook.push_back(spellName);
}

void Spells::removeSpell( std::string spellName ) {
    for( size_t i = 0; 0 < spellBook.size(); i++ ) {
        if( spellName == spellBook[i].getSpellName() ) {
            spellBook.pop_back();
            std::cout << "Spell has been removed!";
        }
    }
}

void Spells::displaySpellBook() const {
    
}