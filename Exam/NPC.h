#pragma once

#include "Character.h"

class NPC : public Character {
public:
    NPC(const std::string& name);

    void performAction(Character& target) override;
};