#include "Player.h"
#include <iostream>

Player::Player(const std::string& name) : Character(name) {}

void Player::performAction(Character& target) {
    std::cout << "Игрок " << getName() << " атакует " << target.getName() << "!\n";

    int damage = 7;
    target.takeDamage(damage);

    std::cout << target.getName() << " получает " << damage << " урона.\n";
}