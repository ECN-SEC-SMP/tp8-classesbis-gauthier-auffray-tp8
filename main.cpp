#include <cstdlib>
#include <string>
#include "loup.h"
#include "pierre.h"
#include "animal.h"
#include "lion.h"
#include "ours.h"
#include <vector>
#include <iostream>
#include "time.h"

#define MAX_X 10
#define MAX_Y 10


void createLion(int x, int y, std::vector<Animal *>* v) {
     Lion* nom = new Lion(MAX_X, MAX_Y, x, y);
     v->push_back(nom);
}

void createOurs(int x, int y, std::vector<Animal *>* v) {
     Ours* nom = new Ours(MAX_X, MAX_Y, x, y);
     v->push_back(nom);
}

int main(){

    std::srand(0);      //Initialisation du générateur de nombres aléatoires

    std::vector<Animal *> v_Animal;
    
    Pierre* pierre1 = new Pierre(MAX_X, MAX_Y, 1, 1);
    Pierre* pierre2 = new Pierre(MAX_X, MAX_Y, 2, 2);
    Pierre* pierre3 = new Pierre(MAX_X, MAX_Y, 3, 3);
    Pierre* pierre4 = new Pierre(MAX_X, MAX_Y, 4, 4);
    Pierre* pierre5 = new Pierre(MAX_X, MAX_Y, 5, 5);
    Loup* loup1 = new Loup(MAX_X, MAX_Y, 6, 6);
    Loup* loup2 = new Loup(MAX_X, MAX_Y, 7, 7);
    Loup* loup3 = new Loup(MAX_X, MAX_Y, 8, 8);
    Loup* loup4 = new Loup(MAX_X, MAX_Y, 9, 9);
    Loup* loup5 = new Loup(MAX_X, MAX_Y, 10, 10);
    createLion(1, 2, &v_Animal);
    createLion(1, 3, &v_Animal);
    createLion(1, 4, &v_Animal);
    createLion(1, 5, &v_Animal);
    createLion(1, 6, &v_Animal);
    

    std::cout << "Coordonne x : " << pierre3->getX() << std::endl;
    std::cout << "Coordonne y : " << pierre3->getY() << std::endl;
    
    v_Animal.push_back(pierre1);
    v_Animal.push_back(pierre2);
    v_Animal.push_back(pierre3);
    v_Animal.push_back(pierre4);
    v_Animal.push_back(pierre5);

    v_Animal.push_back(loup1);
    v_Animal.push_back(loup2);
    v_Animal.push_back(loup3);
    v_Animal.push_back(loup4);
    v_Animal.push_back(loup5);


    std::cout << "*******Vecteur Animal*********\n" << std::endl;
    int i = 0;
    for (Animal * const &a : v_Animal) {
        std::cout << "**********************" << i << std::endl;
        std::cout << "Element numero " << i << std::endl;
        std::cout << "Coordonne x : " << a->getX() << std::endl;
        std::cout << "Coordonne y : " << a->getY() << std::endl;
        i++;
    }


    double diff = 0;
    clock_t current_time = clock();
    clock_t last_time = current_time;

    bool continuer = 1;
    char choix;

    while (continuer) {

        for(int j = 0; j < 2 * MAX_Y + 1; j++) {
            for (int i = 0; i < MAX_X; i++) {

                //Gestion affichage grille vide
                if (j % 2 == 0){
                    std::printf("|----");
                } 
                else {
                    bool pleine = 0;
                    //Gestion affichage animaux
                    for (Animal * const &a : v_Animal) {
                        if ((a->getX() == i+1) && (a->getY() == (j/2)+1) && (a->getVivant() == 1)) {
                            pleine = 1;
                            if (a->getNom() == "Pierre") std::printf("|P   ");
                            if (a->getNom() == "Loup") std::printf("|W   "); 
                            if (a->getNom() == "Ours") std::printf("|O   "); 
                            if (a->getNom() == "Lion") std::printf("|L   "); 
                        }   
                    }
                    if (pleine == 0) std::printf("|    ");
                }

                //Gestion retour à la ligne
                if (i == MAX_X-1) {
                    std::printf("|\n");
                }
                
            }
        }

        int nbVivant = 0;
        for (Animal * const &a : v_Animal) {
            if (a->getVivant() == 1) nbVivant++;
        }
        std::cout << "Il y a " << nbVivant << " animaux vivants" << std::endl;
        

        //Affichage des coordonnées
        for (Animal * const &a : v_Animal) {   
            Attaque attaque1 = a->getAttaque(); 
            std::cout << "(" << a->getX() << "," << a->getY()<< ") attaque :" << attaque1.getAttaque() << std::endl;
        }

        //Gestion d'un nouveau tour
        std::cout << "Continuer ? (y/n) " << std::endl;
        std::cin >> choix;
        if (choix == 'y') continuer = 1;
        else continuer = 0;

        //Deplacement des animaux
        for (Animal * const &a : v_Animal) {
            a->deplace(MAX_X, MAX_Y);
        }

        //Gestion des bagarres
        int i1 = 0;
        int i2 = 0;
        for (Animal * const &a : v_Animal) {
            for (Animal * const &aa : v_Animal) {
                Attaque attaque1 = a->getAttaque();
                Attaque attaque2 = aa->getAttaque();

                if ((a->getX() == aa->getX()) && (a->getY() == aa->getY()) && (a != aa)){    //si deux animaux sur la même case
                    std::cout << a->getNom() << i1 << " et " << aa->getNom() << i2 << " sur la meme case (" << a->getX() << "," << a->getY()<< ")" << std::endl;
                    
                    if (attaque1.resoudreAttaque(attaque2)) {
                        aa->setVivant(0);   //si animal 1 gagne, on tue animal 2 
                    }
                    else {
                        a->setVivant(0);    //sinon on tue animal 1    
                    }
                    std::cout << "Vivant (a) ? " << a->getVivant() << std::endl;
                    std::cout << "Vivant (aa) ? " << aa->getVivant() << std::endl;
                }
                i2++;
            }
            i2 = 0;
            i1++;    
        }  

        /*//Destruction des animaux
        for (Animal * const &a : v_Animal) {
            if(!a->getVivant()) delete a;   //si animal mort on le delete
        }        */   
    }

    //Destruction des animaux
    for (int i = 0; i < v_Animal.size(); ++i) {
        delete v_Animal[i]; // Calls ~object and deallocates *tmp[i]
    }
    std::cout << "Taille vecteur " << v_Animal.size() << std::endl;
    std::cout << "Element Pierre1 " << v_Animal.size() << std::endl;


return 0;  
}