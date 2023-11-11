#include "Character.h"

Character::Character(const std::string& name) : name(name), health(35), experience(0) {}

const std::string& Character::getName() const {
    return name;
}

int Character::getHealth() const {
    return health;
}

int Character::getExperience() const {
    return experience;
}

void Character::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

void Character::gainExperience(int exp) {
    experience += exp;
}

void Character::setHealth(int newHealth) {
    health = newHealth;
}

void Character::performAction(Character& target) {}