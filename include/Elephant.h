#ifndef ANIMALSINHERITANCE_ELEPHANT_H
#define ANIMALSINHERITANCE_ELEPHANT_H
#include "Animal.h"
#include "Continent.h"
class Elephant : public Animal {
    double trunk_length = 0;
    Continent continent = Continent::Africa;
    static std::string ContinentToStr(Continent continent);
    public:
    Elephant(Species species, double weight, double length, double population, int age, double trunk_length, Continent continent);

    void Print() const;
    void Input();

    void Eat() const;
    void Move() const;


};


#endif