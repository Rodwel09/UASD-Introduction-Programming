#include <iostream>

int main(){
    int startNumber;
    int endNumber;
    int amountMultiplies = 0; // Guarda cantidad de multiplos
    int sumMultiplies = 0; // Guarda la suma de todos los multiplos

    std::cout << "Introduzca el numero inicial ";
    std::cin >> startNumber; 
    std::cout << "Introduzca el numero para finalizar ";
    std::cin >> endNumber;

    if (startNumber < endNumber)
    {
        while (startNumber < endNumber)
        {
            if (startNumber % 7 == 0)
            {
                sumMultiplies += startNumber;
                amountMultiplies++;
            }
            startNumber++;
        }
        int prom = sumMultiplies / amountMultiplies;
        std::cout << "El promedio es: " << prom << std::endl;
    }
    else
    {
        std::cout << "El numero inicial tiene que ser menor que el numero final" << std::endl;
    }
    return 0;
}