#pragma once
#include "Character.h"
#include "Spells.h"
#include <iostream>

class Wizard : public Character {
private:
    int mana, maxMana;

public:
    //Constructor for Wizard
    Wizard();
};