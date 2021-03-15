#include "Class/AreaCalc.h"


int main(){
    int userBase;
    int userHeight;

    std::cout << "Introduce la base del cuadrado " << std::endl;
    std::cin >> userBase;
    std::cout << "Introduce la altura del cuadrado " << std::endl;
    std::cin >> userHeight;

    AreaCalc squareArea = AreaCalc(userBase, userHeight);

    std::cout << "El area del cuadrado es: " << squareArea.printSquareArea() << std::endl;
}