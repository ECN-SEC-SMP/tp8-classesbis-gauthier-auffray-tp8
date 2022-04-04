#include "jeu.h"
#include <iostream>

void affichage(int maxX, int maxY) {

    for(int j = 0; j < maxY; j++) {
        for(int i = 0; i < maxX; i++) {
            std::cout << "|----";
        }
        std::cout << "|" << std::endl;
        for(int i = 0; i < maxX; i++) {
            std::cout << "|    ";
        }
        std::cout << "|" << std::endl;
    }
    for(int i = 0; i < maxX; i++) {
            std::cout << "|----";
    }
    std::cout << "|" << std::endl;
}