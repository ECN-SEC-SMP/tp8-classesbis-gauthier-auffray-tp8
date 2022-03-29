#include <iostream>

void affichage(int maxX, int maxY);

int main() {
    int maxX = 10;
    int maxY = 10;
    int a = -6;
    int b = a % 4;
    a %= 4;
    std::cout << b << std::endl;

    return 0;
}

void affichage(int maxX, int maxY) {

}