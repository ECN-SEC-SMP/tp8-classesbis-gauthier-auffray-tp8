#ifndef ATTAQUE_H
#define ATTAQUE_H

#include <string>

class Attaque {

private:
    int type; // 0 pierre, 1 feuille, 2 ciseaux

public:
    // constructors
    Attaque();
    Attaque(int a);

    // methodes
    int getAttaque()const {return type;}
    std::string getNomAttaque()const;
    bool resoudreAttaque(Attaque&)const;
};

#endif