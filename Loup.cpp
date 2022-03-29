#include "Loup.h"
#include <cstdlib>

// constructors
Loup::Loup(int maxX, int maxY) : Animal(maxX, maxY) {
    this->nom = "Loup";
}

Loup::Loup(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Loup";
}

// methodes
void Loup::setAttaque() {
    Attaque new_attaque;
    this->typeAttaque = new_attaque;
}

void Loup::deplace(int maxX, int maxY) {
    int deplacement = rand() % maxX;
    this->x = deplacement;
    deplacement = rand() % maxY;
    this->y = deplacement;
}