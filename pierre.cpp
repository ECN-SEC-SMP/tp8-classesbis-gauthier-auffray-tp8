#include "pierre.h"
#include "attaque.h"

//Constructeurs
Pierre::Pierre(int maxX, int maxY) : Animal(maxX, maxY) {
    //Pas besoin de reseter vivant et les coord puisqu'on l'a déjà fait dans la class "Animal"
    this->nom = "Pierre";
    Attaque attaque1(0);            //on instancie une attaque PIERRE, on peut aussi le faire avec = new Attaque, cela va permettre
    // d'optimiser la mémoire et la vitesse mais il ne faut pas oublier de le delete pour éviter les fuites mémoire et l'attaque est alors
    //indépendante de l'animal, elle n'est donc pas supprimé lors de la suppression de l'animal contrairement au premier cas.
    this->typeAttaque = attaque1;   
    
}

Pierre::Pierre(int maxX, int maxY, int a, int b) : Animal(maxX, maxY, a, b) {
    this->nom = "Pierre";
    Attaque attaque1(0);            //on instancie une attaque PIERRE
    this->typeAttaque = attaque1;   
}


//Methodes
void Pierre::setAttaque() {
   //Attaque unique pour pierre, on ne met rien
}


void Pierre::deplace(int maxX, int maxY) {
    //Les pierres ne se déplacent pas
}