#include "ours.h"
#include "attaque.h"
#include <cstdlib>

//Constructeurs
Ours::Ours(int maxX, int maxY) : Animal(maxX, maxY) {
    //Pas besoin de reseter "vivant" et les coord puisqu'on l'a déjà fait dans la class "Animal"
    this->nom = "Ours";
    Attaque attaque1;            //on instancie une attaque aléatoire 
    this->typeAttaque = attaque1;   
    
}

Ours::Ours(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Ours";
    Attaque attaque1(1);            //on instancie une attaque forcée avec feuille (1)
    this->typeAttaque = attaque1;   
}


//Methodes
void Ours::setAttaque() {
    Attaque attaque1(1);            //on instancie une attaque forcée avec feuille (1)
    this->typeAttaque = attaque1; 
}


void Ours::deplace(int maxX, int maxY) {

    int deplacement = rand() % 7;   //nombre aléatoire de 0 à 7

    switch (deplacement) {
        case 0: //Bas - Droite - Bas
                this->setX((this->getX() + 1) % maxX);
                
                this->setY((this->getY() + 2) % maxY);
            break;

        case 1: //Bas - Droite - Droite
                this->setX((this->getX() + 2) % maxX);
                
                this->setY((this->getY() + 1) % maxY);
            break;

        case 2: //Haut - Droite - Droite
                this->setX((this->getX() + 2) % maxX);
                
                if(this->getY() == 1) this->setY(maxY); //Si position actuelle à 1 on bascule à maxY
                else this->setY((this->getY() - 1));    //sinon on la décrémente
            break;

        case 3: //Haut - Droite - Haut
                this->setX((this->getX() + 1) % maxX);
                
                if(this->getY() == 1) this->setY(maxY-1);   //Si position actuelle à 1 on bascule à maxY-1
                else if(this->getY() == 2) this->setY(maxY);     //Si position actuelle à 2 on bascule à maxY
                else this->setY((this->getY() - 1));        //sinon on la décrémente
            break;

        case 4: //Haut - Gauche - Haut
                if(this->getX() == 1) this->setX(maxX);         //Si position actuelle à 1 on bascule à maxX
                else this->setX((this->getX() - 1));            //sinon on la décrémente
                
                if(this->getY() == 1) this->setY(maxY-1);       //Si position actuelle à 1 on bascule à maxY-1
                else if(this->getY() == 2) this->setY(maxY);    //Si position actuelle à 2 on bascule à maxY
                else this->setY((this->getY() - 1));            //sinon on la décrémente
            break;

        case 5: //Haut - Gauche - Gauche
                if(this->getX() == 1) this->setX(maxX-1);           //Si position actuelle à 1 on bascule à maxX
                else if(this->getX() == 2) this->setX(maxX);        //Si position actuelle à 2 on bascule à maxY
                else this->setX((this->getX() - 1));                //sinon on la décrémente
                
                if(this->getY() == 1) this->setY(maxY);             //Si position actuelle à 1 on bascule à maxY-1
                else this->setY((this->getY() - 1));                //sinon on la décrémente
            break;

        case 6: //Bas - Gauche - Gauche
                if(this->getX() == 1) this->setX(maxX-1);           //Si position actuelle à 1 on bascule à maxX
                else if(this->getX() == 2) this->setX(maxX);        //Si position actuelle à 2 on bascule à maxY
                else this->setX((this->getX() - 1));                //sinon on la décrémente
                
                 this->setY((this->getY() + 1) % maxY);
            break;
    
        case 7: //Bas - Gauche - Bas
                if(this->getX() == 1) this->setX(maxX);         //Si position actuelle à 1 on bascule à maxX
                else this->setX((this->getX() - 1));            //sinon on la décrémente

                this->setY((this->getY() + 2) % maxY);
            break;
        default:
    }
}