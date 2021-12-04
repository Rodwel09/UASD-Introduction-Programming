#include <iostream>

using namespace std;

// Programa que asigna el valor de una variable a un puntero luego cambia su valor e imprime las diferencias.
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    int numero = 19; // Declaracion de variable
    int *puntero = &numero; // Declaracion y asignacion de puntero con la variable numero.

    cout << "La direccion de numero es  : " << &numero << endl // Imprime la direccion de la variable
         << "El contenido de puntero es : " << puntero << endl // Imprime el contenido del puntero (direccion)
         << "Lo que apunta el puntero es: " << *puntero << endl; // Imprime el valor del puntero

    // cambiar valor de numero a traves del puntero
    *puntero += 3;

    cout << "El valor de numero es: " << numero << endl; // Imprime el valor de la variable
    return 0;
}
