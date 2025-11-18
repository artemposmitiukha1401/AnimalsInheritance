cmake_minimum_required(VERSION 4.0)
project(AnimalsInheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(AnimalsInheritance src/main.cpp
        src/Animal.cpp
        include/Animal.h
        src/Elephant.cpp
        include/Elephant.h
        src/Penguin.cpp
        include/Penguin.h
        src/Parrot.cpp
        include/Parrot.h
        include/Shark.cpp
        include/Shark.h
        include/Continent.h)
