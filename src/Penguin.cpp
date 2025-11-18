#include "../include/Penguin.h"

std::string Penguin::ContinentToStr(Continent continent) {
    switch (continent) {
        case Continent::Africa:        return "Africa";
        case Continent::Europe:        return "Europe";
        case Continent::Asia:          return "Asia";
        case Continent::NorthAmerica:  return "North America";
        case Continent::SouthAmerica:  return "South America";
        case Continent::Australia:     return "Australia";
        case Continent::Antarctica:    return "Antarctica";
        default:                       return "Unknown";
    }
}

Penguin::Penguin(Species species, double weight, double length, double population, int age, std::string color,
                 Continent continent)
    : Animal(species, weight, length, population, age), color(color), continent(continent) {}

void Penguin::Print() const {
    Animal::Print();
    std::cout << "Color: " << this->color
    << "\nContinent: " << ContinentToStr(this->continent);
}

void Penguin::Input() {
    Animal::Input();
    std::cout << "Enter color: "; std::cin >> this->color;

    int continent_number = 0;
    std::cout << "Enter continent number: "; std::cin >> continent_number;
    continent = static_cast<Continent>(continent_number);

}


