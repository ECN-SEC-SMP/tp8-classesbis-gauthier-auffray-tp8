#ifndef OURS_H
#define OURS_H

#include "animal.h"

class Ours : public Animal{

    public:
        //Constructeurs
        Ours(int, int);
        Ours(int, int, int, int);

        //Methodes
        void setAttaque();
        void deplace(int, int);
};

#endif