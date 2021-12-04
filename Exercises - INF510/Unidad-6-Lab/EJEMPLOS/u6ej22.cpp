#include <iostream>

using namespace std;

// Programa que modifca el contenido de la direcicon en memoria de un puntero.
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    char letra = 'M';
    char vocal = 'A';
    const char * ptrChr = &letra;

    /**
     El puntero NO puede modificar el contenido
     de la direccion de memoria que el apunta
    */
    *ptrChr = 'Z'; // Error!!!

    /**
     El puntero puede apuntar a otra direccion
     de memoria, su valor puede ser cambiado
    */
    ptrChr = &vocal; // Correcto!
    return 0;
}
