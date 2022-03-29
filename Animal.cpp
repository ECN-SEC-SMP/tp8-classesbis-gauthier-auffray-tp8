#include "Animal.h"
#include <cstdlib>

// constructors
Animal::Animal(int maxX, int maxY, int a, int b) {
    if(a < maxX) {
        this->x = a;
    }
    else {
        this->x = a % maxX;
    }
    if(b < maxY) {
        this->y = b;
    }
    else {
        this->y = b % maxY;
    }
    this->vivant = true;
}

Animal::Animal(int maxX, int maxY) {
    this->x = std::rand() % maxX;
    this->y = std::rand() % maxY;
    this->vivant = true;
}

bool Animal::attaque(Animal& a) {
    Attaque adversaire = a.getAttaque();
    return this->typeAttaque.resoudreAttaque(adversaire);
}
