#include <iostream>

// Programa que imprime la direccion en memoria de una variable y el valor de la variable
// Rodwel Polanco Martinez - 100500328

using namespace std;

int main(int argc, char** argv)
{
    int a = 45; // Declaracion de la variable

    cout << "El valor de a es: " << a << endl; // Imprime el valor de la variable
    cout << "La direccion de a es: " << &a << endl; // Imprime el valor de la variable en memoria (direccion)

    return 0;
}
