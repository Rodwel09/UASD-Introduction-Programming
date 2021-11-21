#include <iostream>
#include <vector>

using namespace std;

/*
    Programa que introduce edades por medio del usuario en la consola en un vector, luego los imprime al usuario.

    Rodwel Polanco Martinez - 100500328
*/

int main(int argc, char** argv)
{
    // Declaracion del vector
    vector<int> edades;

    // vector<int> edades(4);
    // vector<int> edades(4, -9);

    // Declaracion de variables
    int edad;
    int cont = 1;

    do // Mientras el usuario no introduzca el numero cero, sigue pidiendo la edad infinitas veces.
    {
        cout << "Entre edad " << cont++ << ": ";
        cin >> edad;

        if (edad == 0) break;

        edades.push_back(edad); // Introduce los valores en el vector
    } while(true);

    for (int i = 0; i < edades.size(); i++) // For loop que recorre los valores del vector
    {
        cout << edades.at(i) << endl; // Imprime el valor del vector.
    }

    return 0; // Retorna el numero 0
}
