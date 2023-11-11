#include "Item.h"

Item::Item(const std::string& name, int value) : name(name), value(value) {}

const std::string& Item::getName() const {
    return name;
}

int Item::getValue() const {
    return value;
}