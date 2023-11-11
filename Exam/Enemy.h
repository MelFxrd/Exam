#pragma once

#include "Character.h"

class Enemy : public Character {
public:
    Enemy(const std::string& name);

    void performAction(Character& target) override;
};