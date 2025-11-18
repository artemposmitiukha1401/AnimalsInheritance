#include "../include/Parrot.h"

Parrot::Parrot(Species species, double weight, double length, double population, int age,bool canSpeak, std::string color)
    : Animal(species, weight, length, population, age), canSpeak(canSpeak), color(color){}

void Parrot::Print() const {
    Animal::Print();
    std::cout << "Color: " << this->color
    << "\nCan speak: " << canSpeak;
}

void Parrot::Input() {
    Animal::Input();
    std::cout << "Enter color: "; std::cin >> this->color;
    std::cout << "Ability to speak: "; std::cin >> this->canSpeak;
}

void Parrot::Eat() const {
    std::cout << "Parrot ate crackers\n";
}

void Parrot::Move() const {
    std::cout << "Parrot flew 1 m\n";
}
