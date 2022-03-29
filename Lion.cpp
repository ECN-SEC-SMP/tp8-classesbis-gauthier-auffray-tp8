#include "Lion.h"
#include "Attaque.h"
#include <cstdlib>

// constructors
Lion::Lion(int maxX, int maxY) : Animal(maxX, maxY) {
    this->nom = "Lion";
}

Lion::Lion(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Lion";
}

// methodes
void Lion::setAttaque() {
    Attaque new_attaque(rand() % 2 + 1);
    this->typeAttaque = new_attaque;
}

void Lion::deplace(int maxX, int maxY) {
    int deplacement = rand() % 4;
    switch (deplacement) {
    case 0:
        this->x += 1 % maxX;
        this->y += 1 % maxY;
        break;
    case 1:
        this->x += 1 % maxX;
        this->y -= 1 % maxY;
        break;
    case 2:
        this->x -= 1 % maxX;
        this->y -= 1 % maxY;
        break;
    case 3:
        this->x -= 1 % maxX;
        this->y -= 1 % maxY;
        break;
    default:
        break;
    }
}