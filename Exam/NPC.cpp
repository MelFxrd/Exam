#include "NPC.h"
#include <iostream>

NPC::NPC(const std::string& name) : Character(name) {}

void NPC::performAction(Character& target) {
    std::cout << "NPC " << getName() << " атакует " << target.getName() << "!\n";

    int damage = 11;
    target.takeDamage(damage);

    std::cout << target.getName() << " получает " << damage << " урона.\n";
}