#include "AlcoholContainer.h"
#include <iostream>

AlcoholContainer::AlcoholContainer() : liquid(), strength(0.0) {}

AlcoholContainer::AlcoholContainer(const std::string& liquidName, double liquidDensity, double s)
    : liquid(liquidName, liquidDensity), strength(s) {}

Liquid AlcoholContainer::getLiquid() const {
    return liquid;
}

double AlcoholContainer::getStrength() const {
    return strength;
}

void AlcoholContainer::setStrength(double newStrength) {
    strength = newStrength;
}

void AlcoholContainer::Read() {
    liquid.Read(); 

    std::cout << "Enter alcohol strength: ";
    std::cin >> strength;
    std::cin.ignore();
}

int AlcoholContainer::Int() {
    return static_cast<int>(strength);
}

void AlcoholContainer::Display() const {
    liquid.Display();

    std::cout << "Strength: " << strength << "%" << std::endl;
}
