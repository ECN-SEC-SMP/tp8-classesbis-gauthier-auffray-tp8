#include <string>
#include "animal.h"
#include <cstdlib>

//Constrcteurs
Animal::Animal(int maxX, int maxY) {
    
    this->vivant = 1;
    //on place l'animal aléatoirement sur la grille de maxX*maxY
    this->setX(rand() % maxX + 1);      //Placé aléatoirement entre colonne 1 et maxX
    this->setY(rand() % maxY + 1);      //Placé aléatoirement entre ligne 1 et maxY
}
   
      
Animal::Animal(int maxX, int maxY, int a, int b) {
    
    this->vivant = 1;
    //on place l'animal aux coord (a,b) s'ils sont bien sur la grille maxX*maxY
    if ((a > 0) && (a <= maxX)) this->setX(a);
    if ((b > 0) && (a <= maxY)) this->setY(b);
}

