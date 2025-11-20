#ifndef ANIMALSINHERITANCE_ANIMAL_H
#define ANIMALSINHERITANCE_ANIMAL_H
#include <iostream>

enum class Species {
    Dog,
    Cat,
    Horse,
    Cow,
    Sheep,
    Goat,
    Pig,
    Chicken,
    Duck,
    Goose,
    Rabbit,
    Deer,
    Fox,
    Wolf,
    Bear,
    Lion,
    Tiger,
    Elephant,
    Giraffe,
    Zebra,
    Kangaroo,
    Penguin,
    Turtle,
    Snake,
    Frog,
    Fish,
    Insect,
    Parrot
};

class Animal {
    Species species = Species::Dog;
    double weight = 0;
    double length = 0;
    double population = 0;
    int age = 0;


    static std::string SpeciesToStr(Species species) {
        switch (species) {
            case Species::Dog: return "Dog";
            case Species::Cat: return "Cat";
            case Species::Horse: return "Horse";
            case Species::Cow: return "Cow";
            case Species::Sheep: return "Sheep";
            case Species::Goat: return "Goat";
            case Species::Pig: return "Pig";
            case Species::Chicken: return "Chicken";
            case Species::Duck: return "Duck";
            case Species::Goose: return "Goose";
            case Species::Rabbit: return "Rabbit";
            case Species::Deer: return "Deer";
            case Species::Fox: return "Fox";
            case Species::Wolf: return "Wolf";
            case Species::Bear: return "Bear";
            case Species::Lion: return "Lion";
            case Species::Tiger: return "Tiger";
            case Species::Elephant: return "Elephant";
            case Species::Giraffe: return "Giraffe";
            case Species::Zebra: return "Zebra";
            case Species::Kangaroo: return "Kangaroo";
            case Species::Penguin: return "Penguin";
            case Species::Turtle: return "Turtle";
            case Species::Snake: return "Snake";
            case Species::Frog: return "Frog";
            case Species::Fish: return "Fish";
            case Species::Insect: return "Insect";
            case Species::Parrot: return "Parrot";
            default: return "Unknown";
        }
    }
public:
    Animal(Species species, double weight, double length, double population, int age);
    void Eat() const;
    void Move() const;
    void Print() const;
    void Input();




};


    #endif
