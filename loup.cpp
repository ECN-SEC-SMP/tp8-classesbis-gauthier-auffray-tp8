#include "loup.h"
#include "attaque.h"
#include <cstdlib>

//Constructeurs
Loup::Loup(int maxX, int maxY) : Animal(maxX, maxY) {
    //Pas besoin de reseter vivant et les coord puisqu'on l'a déjà fait dans la class "Animal"
    this->nom = "Loup";
    Attaque attaque1;            //on instancie une attaque aléatoire 
    this->typeAttaque = attaque1;   
    
}

Loup::Loup(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Loup";
    Attaque attaque1;            //on instancie une attaque aléatoire
    this->typeAttaque = attaque1;   
}


//Methodes
void Loup::setAttaque() {
    Attaque attaque1;            //on instancie une attaque aléatoire
    this->typeAttaque = attaque1; 
}


void Loup::deplace(int maxX, int maxY) {
    this->setX(rand() % maxX +1);
    this->setY(rand() % maxY +1);
}