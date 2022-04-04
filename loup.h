#ifndef LOUP_H
#define LOUP_H

#include "animal.h"

class Loup : public Animal{

    public:
        //Constructeurs
        Loup(int, int);
        Loup(int, int, int, int);

        //Methodes
        void setAttaque();
        void deplace(int, int);
};

#endif