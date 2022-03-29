#ifndef LION_H
#define LION_H

#include "Animal.h"

class Lion : public Animal {
public:
    // constructors
    Lion(int, int);
    Lion(int, int, int, int);

    // methodes
    virtual void setAttaque();
    virtual void deplace(int, int);
};

#endif