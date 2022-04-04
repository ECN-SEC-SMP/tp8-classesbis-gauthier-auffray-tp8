#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include "Animal.h"
#include "Lion.h"
#include "Ours.h"
#include "Pierre.h"
#include "Loup.h"
#include "jeu.h"

int main() {
    srand(time(NULL));

    int maxX = 3;
    int maxY = 3;
    std::vector<Animal*>list_animaux;

    
    affichage(maxX, maxY);

    return 0;
}
