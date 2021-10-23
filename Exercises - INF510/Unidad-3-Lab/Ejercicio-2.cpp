#include <iostream>
#include <string>

/*
    Programa que imprime el nombre y apellido propporcionado por el usuario.

    Realizado por:
    Rodwel Polanco Martinez - 100500328
    Fecha: 
    22/10/2021
*/

int main()
{
    std::string nombre;
    std::cout << "Introduzca el nombre: ";
    std::getline(std::cin, nombre); // Introduce el nombre del usuario.

    std::string::iterator iter = nombre.begin();

    while(iter != nombre.end()){
        std::cout << *iter << std::endl;
        iter++;
    }

    return 0;
}