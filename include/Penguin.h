#ifndef ANIMALSINHERITANCE_PENGUIN_H
#define ANIMALSINHERITANCE_PENGUIN_H
#include "Animal.h"
#include "Continent.h"

class Penguin : public Animal {
    std::string color;
    Continent continent;

    static std::string ContinentToStr(Continent continent);
public:
    Penguin(Species species, double weight, double length, double population, int age, std::string color, Continent continent);
    void Print() const;
    void Input();
};


#endif