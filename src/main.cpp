#include <iostream>

#include "../include/Animal.h"
#include "../include/Elephant.h"
#include "../include/Parrot.h"
#include "../include/Penguin.h"
#include "../include/Shark.h"

int main() {
    Animal animal(Species::Dog, 15.0, 0.8, 1000000, 5);
    std::cout << "=== Animal ===\n";
    animal.Print();
    std::cout << '\n';
    animal.Eat();
    animal.Move();
    std::cout << "\n\n";

    Elephant elephant(
        Species::Elephant,
        5000.0,
        3.0,
        415000,
        25,
        2.0,
        Continent::Africa
    );
    std::cout << "=== Elephant ===\n";
    elephant.Print();
    std::cout << '\n';
    elephant.Eat();
    elephant.Move();
    std::cout << "\n\n";

    Parrot parrot(
        Species::Chicken,
        1.0,
        0.3,
        10000000,
        2,
        true,
        "green"
    );
    std::cout << "=== Parrot ===\n";
    parrot.Print();
    std::cout << '\n';
    parrot.Eat();
    parrot.Move();
    std::cout << "\n\n";

    Penguin penguin(
        Species::Penguin,
        30.0,
        0.7,
        12000000,
        4,
        "black-white",
        Continent::Antarctica
    );
    std::cout << "=== Penguin ===\n";
    penguin.Print();
    std::cout << "\n\n";

    Shark shark(
        Species::Fish,
        800.0,
        4.0,
        1000000,
        15,
        3000.0
    );
    std::cout << "=== Shark ===\n";
    shark.Print();
    std::cout << '\n';
    shark.Eat();
    shark.Move();
    std::cout << "\n\n";

    return 0;

}
