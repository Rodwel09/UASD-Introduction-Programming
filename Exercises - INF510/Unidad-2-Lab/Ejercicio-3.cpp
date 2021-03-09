#include <iostream>

int main()
{
    double base;
    int exponente;
    int result = 1;
    int counter = 0;

    std::cout << "Introduzca la base de la potencia ";
    std::cin >> base;
    std::cout << "Introduzca el exponente de la potencia ";
    std::cin >> exponente;

    exponente = (exponente <= 0) ? 1 : exponente; // Validando el exponente
    
    while (counter < exponente)
    {
        result = result * base;   
        counter++;
    }
    
    std::cout << "El resultado de la potencia es: " << result << std::endl;
    return 0;
}