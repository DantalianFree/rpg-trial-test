#pragma once
#include <iostream>
#include "Spells.h"

/*Spell Structure:
    Spell Name:
    Damage:
    Mana Cost:
    Description:
*/

//Spell List
//in Alphabetical Order

Spell Burn(
    "Burn",
    7, 
    4, 
    "Deals light fire damage"
);

Spell ChillTouch(
    "Chill Touch", 
    7, 
    3,
    "Reduces enemy 3 defense for 2 turns"
);

Spell FireBolt(
    "Firebolt", 
    15,
    8,
    "Shoots a small fireball at an enemy, dealing light fire damage."
);

Spell IceShard(
    "Ice Shard",
    6,
    6,
    "Fires a tiny shard of ice, dealing light cold damage."
);

Spell ManaBurst(
    "Manaburst", 
    5, 
    5,
    "Releases a small amount of mana, causing minor magical damage."
);

Spell Spark(
    "Spark",
    3,
    5,
    "Emits a small jolt of electricity"    
);

Spell StoneThrow(
    "Stone Throw",
    6,
    3,
    "Hurls a small rock at an enemy, dealing light physical damage"
);

