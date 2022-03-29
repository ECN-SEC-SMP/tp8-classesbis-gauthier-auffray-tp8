#include "Pierre.h"

// constructors
Pierre::Pierre(int maxX, int maxY) : Animal(maxX, maxY) {
    this->nom = "Pierre";
}

Pierre::Pierre(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Pierre";
}

// methodes
void Pierre::setAttaque() {
    Attaque new_attaque(0);
    this->typeAttaque = new_attaque;
}

void Pierre::deplace(int maxX, int maxY) {  
}