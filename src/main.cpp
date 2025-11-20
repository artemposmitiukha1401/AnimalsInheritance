#include <iostream>

#include "../include/Animal.h"
#include "../include/Elephant.h"
#include "../include/Parrot.h"
#include "../include/Penguin.h"
#include "../include/Shark.h"

void PrintOptions() {
    std::cout << "\n[1]: Elephant"
            << "\n[2]: Parrot"
            << "\n[3]: Penguin"
            << "\n[4]: Shark";
}

int main() {
    // Animal animal(Species::Dog, 15.0, 0.8, 1000000, 5);
    // std::cout << "=== Animal ===\n";
    // animal.Print();
    // std::cout << '\n';
    // animal.Eat();
    // animal.Move();
    // std::cout << "\n\n";
    //
    // Elephant elephant(
    //     Species::Elephant,
    //     5000.0,
    //     3.0,
    //     415000,
    //     25,
    //     2.0,
    //     Continent::Africa
    // );
    // std::cout << "=== Elephant ===\n";
    // elephant.Print();
    // std::cout << '\n';
    // elephant.Eat();
    // elephant.Move();
    // std::cout << "\n\n";
    //
    // Parrot parrot(
    //     Species::Chicken,
    //     1.0,
    //     0.3,
    //     10000000,
    //     2,
    //     true,
    //     "green"
    // );
    // std::cout << "=== Parrot ===\n";
    // parrot.Print();
    // std::cout << '\n';
    // parrot.Eat();
    // parrot.Move();
    // std::cout << "\n\n";
    //
    // Penguin penguin(
    //     Species::Penguin,
    //     30.0,
    //     0.7,
    //     12000000,
    //     4,
    //     "black-white",
    //     Continent::Antarctica
    // );
    // std::cout << "=== Penguin ===\n";
    // penguin.Print();
    // std::cout << "\n\n";
    //
    // Shark shark(
    //     Species::Fish,
    //     800.0,
    //     4.0,
    //     1000000,
    //     15,
    //     3000.0
    // );
    // std::cout << "=== Shark ===\n";
    // shark.Print();
    // std::cout << '\n';
    // shark.Eat();
    // shark.Move();
    // std::cout << "\n\n";
    Animal *animal = nullptr;

    int choice = 0;
    PrintOptions();
    std::cout << "\nEnter object choice: ";
    std::cin >> choice;
    switch (choice) {
        case 1:
            animal = new Elephant{Species::Elephant, 4354, 3.5, 54000, 45, 2.4, Continent::Africa};
            animal->Move();
            animal->Eat();
            break;

        case 2:
            animal = new Parrot{Species::Parrot, 1.2, 0.4, 10000000, 3, true, "green"};
            animal->Move();
            animal->Eat();
            break;

        case 3:
            animal = new Penguin{Species::Penguin, 25.0, 0.9, 1200000, 6, "black-white", Continent::Antarctica};
            animal->Move();
            animal->Eat();
            break;

        case 4:
            animal = new Shark{Species::Fish, 800.0, 4.2, 1500000, 12, 2500.0};
            animal->Move();
            animal->Eat();
            break;

        default:
            std::cout << "Invalid option.\n";
            break;
    }

    delete animal;
    return 0;
}
