#include "attaque.h"
#include <cstdlib>

//Constructeurs
Attaque::Attaque() {
    this->type = rand() % 3;    //Type prend une valeur alatoire entre 0 et 2
}


Attaque::Attaque(int a) {
    this->type = a;
}


//Accesseurs
void Attaque::getNomAttaque() const {
     switch (this->type){
         case 0:
            std::printf("Attaque PIERRE !");
            break;
         case 1:
            std::printf("Attaque FEUILLE !");
            break;
         case 2:
            std::printf("Attaque CIDEAUX !");
            break;
         default:
            std::printf("Attaque INVALIDE !");
    }
}


//Méthodes
bool Attaque::resoudreAttaque(Attaque& a) const { //le a est une reference vers l'objet
    bool vainqueur = 0;
    
    if ((this->type == 1) && (a.type == 0)) vainqueur = 1;  //Feuille vs Pierre, on gagne
    if ((this->type == 2) && (a.type == 1)) vainqueur = 1;  //Ciseaux vs Feuille, on gagne
    if ((this->type == 0) && (a.type == 2)) vainqueur = 1;  //Pierre vs Ciseaux, on gagne
    if (this->type == a.type) vainqueur = rand() % 2;       //Si egalité, tirage au sort entre les deux

    return vainqueur;
}