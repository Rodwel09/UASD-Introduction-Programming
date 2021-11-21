#include <iostream>
#include <vector>

using namespace std;

/*
    Programa que imprime el valor de un vector, añade, remueve, limpia y demuestra el size del vector.

    Rodwel Polanco Martinez - 100500328
*/

// Declaracion de funcion "Print"
void print(vector<string>);

int main(int argc, char** argv)
{
    // Declaracion de vector "comidas" y iterador "v"
    vector<string> comidas;
    vector<string>::iterator v;

    // Introducion de elementos al vector tipo string
    comidas.push_back("Pincho de Camarones");
    comidas.push_back("Chuleta Fresca a la Parrilla");
    comidas.push_back("Fabada");
    comidas.push_back("Paella Marinera");
    comidas.push_back("Vino Pinot Noir");
    comidas.push_back("Vino Late Harvest");

    v = comidas.begin(); // Inicializar el iterador con el primer index del vector comidas
    while(v != comidas.end()) // Mientras el iterador sea diferente al index final del vector comidas
    {
        cout << *v++ << endl; // Imprime los valores del vector.
    }

    v = comidas.begin(); // Inicializar el iterador con el primer index del vector comidas

    //cout << endl << *(v + 2) << endl << endl;

    comidas.erase(v + 2); // Borra el tercer elemento del vector.
    print(comidas); // Llama la funcion "print" con vector comidas como parametros

    cout << endl << endl << comidas.size() << endl; // Imprime el size el vector comidas
    comidas.clear(); // Limpia el vector comidas
    cout << endl << endl << comidas.size() << endl; // Imprime el size del vector comidas

    return 0; // Retorna el numero 0
}

// Inicializacion de la funcion "print"
void print(vector<string> arr)
{
    for (int i = 0; i < arr.size(); i++) // For loop que recorre el vector completo
        cout << arr.at(i) << endl; // Imprime los valores del vector.
}
