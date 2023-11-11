#pragma once

#include <string>

class Item {
private:
    std::string name;
    int value;

public:
    Item(const std::string& name, int value);

    const std::string& getName() const;
    int getValue() const;
};