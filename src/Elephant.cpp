#include "../include/Elephant.h"

std::string Elephant::ContinentToStr(Continent continent) {
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

Elephant::Elephant(Species species, double weight, double length, double population, int age, double trunk_length,
                   Continent continent)
        : Animal(species, weight, length, population, age){
    this->trunk_length = trunk_length;
    this->continent = continent;
}

void Elephant::Print() const {
    Animal::Print();
    std::cout << "Trunk length: " << this->trunk_length
    << "\nContinent: " << ContinentToStr(this->continent);
}

void Elephant::Input() {
    Animal::Input();
    try {
        int continent_number = 0;
        std::cout << "Enter trunk length: ";
        if (!(std::cin >> trunk_length)) throw std::runtime_error("Invalid input");

        std::cout << "Enter continent number: ";
        std::cin >> continent_number;
        continent = static_cast<Continent>(continent_number);
    }
    catch (const std::exception& e) {
        std::cerr << std::endl << e.what() << std::endl;
    }

}

void Elephant::Eat() const {
    std::cout << "Elephant ate some fruits\n";
}

void Elephant::Move() const {
    std::cout << "The elephant walked a few meters\n";
}

