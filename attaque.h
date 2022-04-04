#ifndef FORME_H
#define FORME_H

#include <string>

class Attaque {
    private:
        int type;

    public:
        //Constructeur
        Attaque();
        Attaque(int);

        //Accesseurs en lecture
        int getAttaque() const { return this->type;}
        void getNomAttaque() const;

        //Méthodes
        bool resoudreAttaque(Attaque &a) const;
};

#endif