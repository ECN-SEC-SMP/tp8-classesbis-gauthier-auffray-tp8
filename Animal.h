#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include "Attaque.h"

class Animal {
private:
    std::string nom;
    int x; // abscisse de l'animal
    int y; // ordonnée de l'animal
    bool vivant;
    Attaque typeAttaque;

public:
    // constructor
    Animal(int, int);
    Animal(int, int, int, int);

    // getters
    std::string getNom()const {return nom;}
    int getX()const {return x;}
    int getY()const {return y;}
    bool getVivant()const {return vivant;}
    Attaque getAttaque()const {return typeAttaque;}

    // setters
    void setVivant(const bool v) {vivant = v;}

    // methodes
    bool attaque(Animal&);
    virtual void setAttaque() = 0;
    virtual void deplace(int, int) = 0;
};

#endif