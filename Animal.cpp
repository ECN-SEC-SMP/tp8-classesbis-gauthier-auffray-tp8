#include <Animal.h>

// constructors
Animal::Animal(int maxX, int maxY, int a, int b) {
    this->x = a;
    this->y = b;
    this->vivant = true;
}

Animal::Animal(int maxX, int maxY) {

}

bool Animal::attaque(Animal& a) {
    return this->typeAttaque.resoudreAttaque(a.getAttaque());
}

