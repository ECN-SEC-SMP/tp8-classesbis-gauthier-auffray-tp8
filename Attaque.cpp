#include "Attaque.h"
#include <random>
#include <cstdlib>

// constructors
Attaque::Attaque() {
    // std::default_random_engine re;
    // std::uniform_int_distribution<int> distrib
    this->type = rand() % 3;
}

Attaque::Attaque(int a) {
    this->type = a;
}

// methode
std::string Attaque::getNomAttaque()const {
    std::string to_return;
    switch (this->type) {
    case 0:
        to_return = "Pierre";
        break;
    case 1:
        to_return = "Feuille";
        break;
    case 2:
        to_return = "Ciseaux";
        break;
    default:
        to_return = "Err";
        break;
    }
    return to_return;
}

bool Attaque::resoudreAttaque(Attaque& a)const {
    if(a.getNomAttaque() == this->getNomAttaque()) {
        int rnd = rand() % 2;
        return bool(rnd);
    }
    else if(a.getNomAttaque() == "Pierre" && this->getNomAttaque() == "Feuille") {
        return true;
    }
    else if(a.getNomAttaque() == "Feuille" && this->getNomAttaque() == "Ciseaux") {
        return true;
    }
    else if(a.getNomAttaque() == "Ciseaux" && this->getNomAttaque() == "Pierre") {
        return true;
    }
    else {
        return false;
    }
}