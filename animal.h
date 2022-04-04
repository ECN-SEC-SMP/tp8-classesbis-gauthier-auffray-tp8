#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include "attaque.h"

class Animal {

    protected:
        int x, y;
        std::string nom;
        bool vivant;
        Attaque typeAttaque;

    public:
        //Constrcteurs
        Animal(int, int);
        Animal(int, int, int, int);

        //Accesseurs en lecture
        std::string getNom() const { return this->nom;}
        int getX() const { return this->x;}
        int getY() const { return this->y;}
        bool getVivant() const { return this->vivant;}
        Attaque getAttaque() const {return this->typeAttaque;}

        //Accesseurs en ecriture
        void setX(int n_x) {this->x = n_x;}
        void setY(int n_y) {this->y = n_y;}
        void setVivant(bool v) {this->vivant = v;}
        bool attaque(Attaque &a);

        //Méthodes
        virtual void setAttaque()=0;
        virtual void deplace(int maxX, int maxY)=0;
};

#endif