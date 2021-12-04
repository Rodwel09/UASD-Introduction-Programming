#include <iostream>
#include <vector>

using namespace std;

// Accediendo a los elementos de un vector a traves
// de punteros

// Rodwel Polanco Martinez - 100500328

int main (int argc, char** argv)
{
    vector<string> entradas(5); // Declaracion del vector

    string *p = entradas.data(); // Declaracion del puntero asignacion del puntero del vector

    *p = "Alitas Picantes Deshuesadas"; // Asignacion de string al puntero
    p++; // nos movemos a la segunda posicion
    *p = "Palitos Mozarella"; // Asignacion de string al puntero
    p[2] = "Bastoncitos de Camarones"; // P ya esta movido, cae en la 4ta posicion

    cout << "Contenido del vector:\n\n";

    for (unsigned int i = 0; i < entradas.size(); i++)
        cout << "[" << i << "]: " << entradas.at(i) << endl; // Imprime los valores

    cout << endl;

    return 0;
}
