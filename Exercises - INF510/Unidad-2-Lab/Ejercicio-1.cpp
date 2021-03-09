#include <stdio.h>
#include <iostream>


int main(){
    int startNumber;
    int endNumber;

    int sums = 0; // Guarda la suma de todos los multiplos de 9
    int multiplesCount = 0; // Guarda el conteo de multiplos de 9

    std::cout << "Introduzca el numero inicial ";
    std::cin >> startNumber;
    std::cout << "Introduzca el numero para finalizar ";
    std::cin >> endNumber;

    if (startNumber < endNumber)
    {
        while (startNumber < endNumber)
        {
            if (startNumber % 9 == 0)
            {
                sums += startNumber;
                multiplesCount++;
            }
            startNumber++;
        }
        int prom = sums / multiplesCount;
        std::cout << "El promedio es: " << prom << std::endl;
    }
    else
    {
        std::cout << "El numero inicial tiene que ser menor que el numero final" << std::endl;
    }
    return 0;
}

