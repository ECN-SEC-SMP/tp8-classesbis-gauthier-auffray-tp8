#ifndef PIERRE_H
#define PIERRE_H

#include "animal.h"

class Pierre : public Animal{

    public:
        //Constructeurs
        Pierre(int, int);
        Pierre(int, int, int, int);

        //Methodes
        void setAttaque();
        void deplace(int, int);
};

#endif
