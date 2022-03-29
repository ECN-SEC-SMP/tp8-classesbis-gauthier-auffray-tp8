#ifndef PIERRE_H
#define PIERRE_H

#include "Animal.h"

class Pierre : public Animal {
public:
    // constructors
    Pierre(int, int);
    Pierre(int, int, int, int);

    // methodes
    virtual void setAttaque();
    virtual void deplace(int, int);
};

#endif