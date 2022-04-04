#include "lion.h"
#include "attaque.h"
#include <cstdlib>

//Constructeurs
Lion::Lion(int maxX, int maxY) : Animal(maxX, maxY) {
    //Pas besoin de reseter "vivant" et les coord puisqu'on l'a déjà fait dans la class "Animal"
    this->nom = "Lion";
    Attaque attaque1;            //on instancie une attaque aléatoire 
    this->typeAttaque = attaque1;   
    
}

Lion::Lion(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Lion";
    Attaque attaque1((rand() % 2 +1));            //on instancie une attaque aléatoire entre feuille et ciseaux (1 ou 2)
    this->typeAttaque = attaque1;   
}


//Methodes
void Lion::setAttaque() {
    Attaque attaque1((rand() % 2 +1));            //on instancie une attaque aléatoire entre feuille et ciseaux (1 ou 2)
    this->typeAttaque = attaque1; 
}


void Lion::deplace(int maxX, int maxY) {

    int deplacement = rand() % 3;   //nombre aléatoire de 0 à 3

    switch (deplacement) {
        case 0: //Bas - Droite
                this->setX((this->getX() + 1) % maxX);
                this->setY((this->getY() + 1) % maxY);
            break;

        case 1: //Haut - Droite
                this->setX((this->getX() + 1) % maxX);
                if(this->getY() == 1) this->setY(maxY); //Si position actuelle à 1 on bascule à maxY
                else this->setY((this->getY() - 1));    //sinon on la décrémente
            break;

        case 2: //Haut - Gauche
                if(this->getX() == 1) this->setX(maxX); //Si position actuelle à 1 on bascule à maxX
                else this->setX((this->getX() - 1));    //sinon on la décrémente
                this->setY((this->getY() + 1) % maxY);
            break;

        case 3: //Bas - Gauche
                if(this->getX() == 1) this->setX(maxX); //Si position actuelle à 1 on bascule à maxX
                else this->setX((this->getX() - 1));    //sinon on la décrémente
                if(this->getY() == 1) this->setY(maxY); //Si position actuelle à 1 on bascule à maxY
                else this->setY((this->getY() - 1));    //sinon on la décrémente
            break;
        default:
    }
}