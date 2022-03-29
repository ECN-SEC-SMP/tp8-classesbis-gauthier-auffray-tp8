#include "Ours.h"
#include <cstdlib>

// constructors
Ours::Ours(int maxX, int maxY) : Animal(maxX, maxY) {
    this->nom = "Ours";
}

Ours::Ours(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Ours";
}

// methodes
void Ours::setAttaque() {
    Attaque new_attaque(1);
    this->typeAttaque = new_attaque;
}

void Ours::deplace(int maxX, int maxY) {
    int deplacement = rand() % 8;
    switch (deplacement) {
    case 0:
        this->x += 2 % maxX;
        this->y += 1 % maxY;
        break;
    case 1:
        this->x += 1 % maxX;
        this->y += 2 % maxY;
        break;
    case 2:
        this->x -= 1 % maxX;
        this->y += 2 % maxY;
        break;
    case 3:
        this->x -= 2 % maxX;
        this->y += 1 % maxY;
        break;
    case 4:
        this->x -= 2 % maxX;
        this->y -= 1 % maxY;
        break;
    case 5:
        this->x -= 1 % maxX;
        this->y -= 2 % maxY;
        break;
    case 6:
        this->x += 1 % maxX;
        this->y -= 2 % maxY;
        break;
    case 7:
        this->x += 2 % maxX;
        this->y -= 1 % maxY;
        break;
    default:
        break;
    }
}