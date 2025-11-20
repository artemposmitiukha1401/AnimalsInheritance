#include "../include/Animal.h"

Animal::Animal(Species species, double weight, double length, double population, int age)
    : species(species), weight(weight), length(length), population(population), age(age) {
}


void Animal::Eat() const {
    std::cout << SpeciesToStr(species) << " ate something\n";
}

void Animal::Move() const {
    std::cout << SpeciesToStr(species) << " moved somewhere\n";
}

void Animal::Print() const {
    std::cout << "\nSpecies: " << SpeciesToStr(species)
            << "\nWeight: " << weight
            << "\nLength: " << length
            << "\nPopulation: " << population
            << "\nAge: " << age;
}

void Animal::Input() {
    try {
        int species_index = 0;
        std::cout << "Enter species number: ";
        std::cin >> species_index;
        species = static_cast<Species>(species_index);

        std::cout << "Enter weight: ";
        if (!(std::cin >> weight)) throw std::runtime_error("Invalid input");

        std::cout << "Enter length: ";
        if (!(std::cin >> length)) throw std::runtime_error("Invalid input");

        std::cout << "Enter population: ";
        if (!(std::cin >> population)) throw std::runtime_error("Invalid input");

        std::cout << "Enter age: ";
        if (!(std::cin >> age)) throw std::runtime_error("Invalid input");
    } catch (std::exception &e) {
        std::cerr << std::endl << e.what() << std::endl;
    }
}
