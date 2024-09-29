#pragma once
#include "Character.h"
#include "Warrior.h"
#include "Priest.h"
#include "Wizard.h"
#include <iostream>
#include <string>

class Create {
public:
    static Character* characterCreation( int cType ) {
        switch( cType ) {
            case 1:
                return new Warrior();
            case 2: 
                return new Priest();
            case 3:
                return new Wizard();
            default:
                return nullptr;
        }
    }

};