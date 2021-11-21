#include <iostream>
#include <vector>

using namespace std;
/*
    Programa que introduce un elemento en un vector por medio del usuario, luego imprime el size del vector

    Rodwel Polanco Martinez - 100500328
*/
int main(int argc, char** argv)
{
    /** Declara un vector de enteros
     *  (int) con cero elementos
     **/
    vector<int> numeros;
    int num;

    cout << "Entre un numero: ";
    cin >> num; // Lee el numero introducido por el usuario
    numeros.push_back(num); // Introduce la variable en el vector numeros

    cout << "El vector tiene "
         << numeros.size() // Imprime el size del vector
         << " elementos." << endl;

    return 0;
}
