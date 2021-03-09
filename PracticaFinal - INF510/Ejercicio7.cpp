#include <iostream>

/*
    Leer tres numeros y determine el mayor

    Creado por:
    Rodwel Polanco Martinez - 100500328
*/


int main(){
    int num1;
    int num2;
    int num3;

    std::cout << "Introduzca el numero #1" << std::endl;
    std::cin >> num1;
    std::cout << "Introduzca el numero #2" << std::endl;
    std::cin >> num2;
    std::cout << "Introduzca el numero #3" << std::endl;
    std::cin >> num3;


    if (num1 > num2 && num1 > num3)
    {
        std::cout << num1 << " es el numero mayor." << std::endl;
        return 0;
    }

    if (num2 > num1 && num2 > num3)
    {
        std::cout << num2 << " es el numero mayor." << std::endl;
        return 0;
    }

    if (num3 > num1 && num3 > num2)
    {
        std::cout << num3 << " es el numero mayor." << std::endl;
        return 0;
    }
    
    std::cout << "No hay numero mayor" << std::endl;
    return 0;
}