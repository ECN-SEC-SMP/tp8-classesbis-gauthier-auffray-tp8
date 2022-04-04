#ifndef LION_H
#define LION_H

#include "animal.h"

class Lion : public Animal{

    public:
        //Constructeurs
        Lion(int, int);
        Lion(int, int, int, int);

        //Methodes
        void setAttaque();
        void deplace(int, int);
};

#endif