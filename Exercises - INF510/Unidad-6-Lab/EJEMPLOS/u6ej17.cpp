#include <iostream>

using namespace std;

// Programa que asigna structs, strings y numeros en un puntero y los imprime.
// Rodwel Polanco Martinez - 100500328

struct Hotel // Declaracion del struct
{
    string nombre;
    int estrellas;
};

int main(int argc, char** argv)
{
    void *puntero; // Declaracion del puntero

    Hotel hotel = {"Royalton", 5}; // Declacion de una instanciacion de un struct
    
    // Declacion de variables
    string pelicula = "Interstellar"; 
    long valor = 1991;

    puntero = &pelicula; // Asignacion de direccion la variable al puntero
    //puntero = &valor;
    //puntero = &hotel;

    string *str = (string *) puntero; // Conversion a string al puntero
    cout << *str << endl; // Imprime el valor del puntero.

    return 0;
}
