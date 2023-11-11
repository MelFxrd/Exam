#include "Enemy.h"
#include <iostream>

Enemy::Enemy(const std::string& name) : Character(name) {}

void Enemy::performAction(Character& target) {
    std::cout << "Враг " << getName() << " атакует " << target.getName() << "!\n";

    int damage = 12;
    target.takeDamage(damage);

    std::cout << target.getName() << " получает " << damage << " урона.\n";
}