#include <iostream>

using namespace std;

/*
    Programa que imprime cada caracter de un string, esto es posible ya que los string son listas que contienen caracteres
    
    Rodwel Polanco Martinez - 1000500328
*/

int main(int argc, char** argv)
{
    // Declaracion de variable
    string comida = "Guineito con Spaguetti";
    string::iterator vIte = comida.begin(); // Declaracion del iterador que contendra el primer caracter del string

    while (vIte != comida.end()) // Mientras la variable vite sea diferente al ultimo caracter del string.
        cout << *vIte++ << endl; // Imprime los caracteres del string.

    return 0; // Retorna el numero 0.
}
