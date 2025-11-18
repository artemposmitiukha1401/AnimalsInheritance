#include "Shark.h"

Shark::Shark(Species species, double weight, double length, double population, int age, double bite_force)
    : Animal(species, weight, length, population, age), bite_force(bite_force) {}

void Shark::Print() const {
    Animal::Print();
    std::cout << "Bit force: " << bite_force << std::endl;
}

void Shark::Input() {
    Animal::Input();

    std::cout << "Bite force: " << bite_force << std::endl;
}

void Shark::Eat() const {
    std::cout << "Shark ate some fish\n";
}

void Shark::Move() const {
    std::cout << "Shark swam 10 m\n";
}
