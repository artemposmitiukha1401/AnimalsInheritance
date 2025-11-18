#ifndef ANIMALSINHERITANCE_SHARK_H
#define ANIMALSINHERITANCE_SHARK_H
#include "Animal.h"

class Shark : public Animal {
    double bite_force = 0;
public:
    Shark(Species species, double weight, double length, double population, int age, double bite_force);
    void Print() const;
    void Input();

    void Eat() const;
    void Move() const;
};


#endif