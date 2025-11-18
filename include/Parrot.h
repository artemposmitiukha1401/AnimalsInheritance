#ifndef ANIMALSINHERITANCE_PARROT_H
#define ANIMALSINHERITANCE_PARROT_H
#include "Animal.h"


class Parrot : public Animal {
    bool canSpeak = false;
    std::string color;
public:
    Parrot(Species species, double weight, double length,
        double population, int age, bool canSpeak, std::string color);

    void Print() const;
    void Input();

    void Eat() const;
    void Move() const;
};


#endif