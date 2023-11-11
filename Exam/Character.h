#pragma once

#include <string>

class Character {
protected:
    std::string name;
    int health;
    int experience;

public:
    Character(const std::string& name);

    const std::string& getName() const;
    int getHealth() const;
    int getExperience() const;

    void takeDamage(int damage);
    void gainExperience(int exp);

    void setHealth(int newHealth);

    virtual void performAction(Character& target) = 0;
};
