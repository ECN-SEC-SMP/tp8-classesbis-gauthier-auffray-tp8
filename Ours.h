#ifndef OURS_H
#define OURS_H

#include "Animal.h"

class Ours : public Animal {
public:
    // constructors
    Ours(int, int);
    Ours(int, int, int, int);

    // methodes
    virtual void setAttaque();
    virtual void deplace(int, int);
};

#endif