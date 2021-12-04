#include <iostream>

// Programa que usa dos punteros y los concatena en una funcion.
// Rodwel Polanco Martinez - 100500328


// Funcion que toma los dos caracteres en forma de puntero
std::string MergeConcat(std::string* cad1, std::string* cad2)
{
    return *cad1 + *cad2;
}

int main()
{
    // Declaracion de las variables
    std::string cadena1;
    std::string cadena2;

    std::cout << "Introduzca una palabra en la consola" << std::endl;
    std::cin >> cadena1;

    std::cout << "Introduzca otra palabra en la consola" << std::endl;
    std::cin >> cadena2;

    std::string* ptrCadena1 = &cadena1;
    std::string* ptrCadena2 = &cadena2;

    std::string result = MergeConcat(ptrCadena1, ptrCadena2);

    std::cout << result << std::endl;
}