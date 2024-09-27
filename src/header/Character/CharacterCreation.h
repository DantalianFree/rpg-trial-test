#pragma once
#include "Character.h"
#include "Warrior.h"
#include <iostream>
#include <string>

class Create {
public:
    static Character* characterCreation( int cType ) {
        switch( cType ) {
            case 1:
                return new Warrior();
        }
    }

};