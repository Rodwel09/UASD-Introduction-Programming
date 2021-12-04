#include <iostream>

using namespace std;

// Programa que recorre una lista de numeros dentro de un puntero, lo multiplica y luego los imprime. 
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    short numeros[] = {31, 19, 14, 74, 9}; // Declaracion de la lista

    /** No se debe utilizar &numeros para
      * asignar la direccion de memoria del
      * arreglo a numerosPtr ya que el nombre
      * del arreglo en si mismo contiene la
      * direccion de memoria en RAM de la primera
      * posicion en el arreglo, el elemento cero
      */
    short *numerosPtr = numeros; // Declaracion y asignacion de lista al puntero.

    int indice = 0;
    while (indice < 5) // Inicio del loop
    {
        *(numerosPtr + indice) *= 2; // Multiplica por 2 el numero en el ciclo
        cout << indice << ": "
             << *(numerosPtr + indice) // Imprime los elementos de la lista.
             << endl;
        indice++;
    }

    return 0;
}
