#include <iostream>

/*
    Leer tres longitudes y determine si forma un triangulo

    Creado por:
    Rodwel Polanco Martinez - 100500328
*/


int main(){
    int log1;
    int log2;
    int log3;

    std::cout << "Introduzca la longitud #1" << std::endl;
    std::cin >> log1;
    std::cout << "Introduzca la longitud #2" << std::endl;
    std::cin >> log2;
    std::cout << "Introduzca la longitud #3" << std::endl;
    std::cin >> log3;

    if (log1 == log2 && log2 == log3)
    {
        std::cout << "Es un triangulo equilatero" << std::endl;
        return 0;
    }

    if (log1 != log2 && log2 != log3)
    {
        std::cout << "Es un triangulo escaleno" << std::endl;
        return 0;
    }
    
    if (log1 == log2 && log2 != log3){
        std::cout << "Es un triangulo isoceles" << std::endl;
        return 0;
    }

    if (log1 != log2 && log2 == log3){
        std::cout << "Es un triangulo isoceles" << std::endl;
        return 0;
    }

    if (log1 == log3 && log2 != log1){
        std::cout << "Es un triangulo isoceles" << std::endl;
        return 0;
    }
}