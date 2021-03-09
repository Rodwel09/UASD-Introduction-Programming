#include <iostream>

/*
    Leer numeros y imprimir en reversa 
    
    Creado por:

    Rodwel Polanco Martinez - 10050328
*/

int main(){
    int limit;
    int number;


    std::cout << "Cuantos numeros introducira " << std::endl;
    std::cin >> limit;

    int storeNumbers[limit];

    for (int i = 0; i < limit; i++)
    {
        std::cout << "Introduzca el numero: " << std::endl;
        std::cin >> number;

        storeNumbers[i] = number;
    }

    std::cout << "Sucession de numeros en orden inverso" << std::endl;
    for (int i = limit - 1; i >= 0; i--)
    {
        std::cout << storeNumbers[i] << std::endl;
    }
    
    
}