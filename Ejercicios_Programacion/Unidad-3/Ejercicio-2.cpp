#include <iostream>
#include <string>


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