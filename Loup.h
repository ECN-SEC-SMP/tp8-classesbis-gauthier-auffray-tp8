#ifndef LOUP_H
#define LOUP_H

#include "Animal.h"

class Loup : public Animal {
public:
    // constructors
    Loup(int, int);
    Loup(int, int, int, int);

    // methodes
    virtual void setAttaque();
    virtual void deplace(int, int);
};

#endif