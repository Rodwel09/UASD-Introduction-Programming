#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
    Programa que modifica, añade, borra y intercambia los valores de dos vectores
    Rodwel Polanco Martinez - 100500328
*/

// Declaracion de funcion print
void print(vector<string>);

int main(int argc, char** argv)
{
    // Declaracion de variables
    vector<string> comidas;
    vector<string> bebidas;
    vector<string>::iterator ite; // Declaracion de iterador

    // Añadiendo los valores al vector de bebidas
    bebidas.push_back("Pina Colada");
    bebidas.push_back("Vino Carbernet Sauvignon");
    bebidas.push_back("Vino Pinot Noir");
    bebidas.push_back("Vino Tempranillo");
    bebidas.push_back("Vino Merlot");
    bebidas.push_back("Cerveza Beck's");

    // Añadiendo los valores al vector de comidas
    comidas.push_back("Ravioli relleno de espinacas");
    comidas.push_back("Canelones rellenos de carne");
    comidas.push_back("Lasagna de pollo");
    comidas.push_back("Crema de auyama");
    comidas.push_back("Ravioli relleno de hongos");
    comidas.push_back("Alitas en salsa BBQ");
    comidas.push_back("Costillas Babyback");
    comidas.push_back("Ribeye 16oz");
    comidas.push_back("Chivo guisado picante");

    // Imprime el size de comidas, luego confirma si el vector esta vacio, luego imprime el quinto elemento del vector comidas.
    cout << "comidas.size()  : " << comidas.size() << endl;
    cout << "comidas.empty() : " << ((comidas.empty()) ? "Vacio" : "Tiene elementos") << endl;
    cout << "comidas.at(5)   : " << comidas.at(5) << endl;

    ite = find(comidas.begin(), comidas.end(), "Ribeye 16oz"); // Encuentra un elmento entre el primer elemento del vector y el ultimo elemento del vector.
    cout << "comidas.find(\"Ribeye 16oz\"): " << *ite << endl; // Imprime un string a la consola

    // ite = 8

    // Imprime el vector comidas
    print(comidas);

    // Imprime el string en consola
    cout << "comidas.erase(ite)" << endl;
    comidas.erase(ite); // Borra el iterador en comidas
    print(comidas); // Llamada de la funcion print con el vector comidas como parametro

    // Imprime el string en consola
    cout << "comidas.insert(ite - 4, \"Spaguetti a la bolognesa\")" << endl;
    comidas.insert(ite - 4, "Spaguetti a la bolognesa"); // Inserta el string en el vector comidas con el iterador
    print(comidas); // Llamada de la funcion print con el vector comidas como parametro

    cout << "comidas.pop_back()" << endl;
    comidas.pop_back(); // Remueve el ultimo elemento del vector comidas
    print(comidas); // // Llamada de la funcion print con el vector comidas como parametro


    cout << "comidas.swap(bebidas)" << endl;
    comidas.swap(bebidas); // Cambia los valores de comida con los de bebidas
    print(comidas); // Llamada de la funcion print con el vector comidas como parametro

    return 0;
}

// Declaracion de la funcion print
void print(vector<string> x)
{
    cout << endl;
    for (int i = 0; i < x.size(); i++) // For loop que recorre el vector
        cout << x.at(i) << endl; // Imprime cada elemento del vector

    cout << endl << endl;
}
