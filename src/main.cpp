#include <iostream>
#include "main.h"
#include "conio.h"
#include "stdlib.h"

Spell fireball("Fireball", 10, 10);
Spell lightningBolt("Lightning Bolt", 20, 20);
Spells spellBook;

Character* createCharacter() {
    int choice;

    while(true) {
        std::cout << "Choose your class:\n"
                  << "1. Warrior\n"
                  << "2. Priest\n"
                  << "3. Wizard\n"
                  << "4. Rouge\n"
                  << "Enter your choice ( 1 - 4): ";
        std::cin >> choice;

        if( choice >= 1 && choice <= 4) {
            return Create::characterCreation(choice);
        } else {
            std::cout << "Invalid choice! Please enter a number between 1 and 4 only.";
        }
    }
}


int main() {
    Character* player = createCharacter();
    player->displayCharacter();

    system("cls");

    spellBook.addSpell(fireball);
    spellBook.addSpell(lightningBolt);
    spellBook.displaySpellBook();

    return 0;
}