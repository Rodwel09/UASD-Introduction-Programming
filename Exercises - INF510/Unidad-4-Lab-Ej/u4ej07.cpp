#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
    Programa que modifica, añade, borra y intercambia los valores de dos vectores
    
    Rodwel Polanco Martinez - 100500328
*/

// Declaracion de la funcion print
void print(vector<string>);

int main(int argc, char** argv)
{
    //Declaracion de los vectores e iterador
    vector<string> comidas;
    vector<string> bebidas;
    vector<string>::iterator ite;

    // Introducion de datos en los valores de bebidas y comidas vectores
    bebidas.push_back("Pina Colada");
    bebidas.push_back("Vino Carbernet Sauvignon");
    bebidas.push_back("Vino Pinot Noir");
    bebidas.push_back("Vino Tempranillo");
    bebidas.push_back("Vino Merlot");
    bebidas.push_back("Cerveza Beck's");

    comidas.push_back("Ravioli relleno de espinacas");
    comidas.push_back("Canelones rellenos de carne");
    comidas.push_back("Lasagna de pollo");
    comidas.push_back("Crema de auyama");
    comidas.push_back("Ravioli relleno de hongos");
    comidas.push_back("Alitas en salsa BBQ");
    comidas.push_back("Costillas Babyback");
    comidas.push_back("Ribeye 16oz");
    comidas.push_back("Chivo guisado picante");

    // Imprime el size de los vectores, elemento del vector y encontrar un elemento en el vector comida
    cout << "comidas.size()  : " << comidas.size() << endl;
    cout << "comidas.empty() : " << ((comidas.empty()) ? "Vacio" : "Tiene elementos") << endl; // Revisar si el vector esta vacio o no
    cout << "comidas.at(5)   : " << comidas.at(5) << endl;
    ite = find(comidas.begin(), comidas.end(), "Ribeye 16oz");
    cout << "comidas.find(\"Ribeye 16oz\"): " << *ite << endl; // Imprime string en consola

    // ite = 8

    print(comidas); // Llamada de la funcion print con el vector comidas siendo parametros

    cout << "comidas.erase(ite)" << endl;
    comidas.erase(ite); // Borra un elemento del vector comidas
    print(comidas);  // Llamada de la funcion print con el vector comidas siendo parametros

    cout << "comidas.insert(ite - 4, \"Spaguetti a la bolognesa\")" << endl;
    comidas.insert(ite - 4, "Spaguetti a la bolognesa"); // Insertar un elemento en el vector comidas
    print(comidas);  // Llamada de la funcion print con el vector comidas siendo parametros

    cout << "comidas.pop_back()" << endl;
    comidas.pop_back(); // Borra el ultimo elemento del vector comidas
    print(comidas);  // Llamada de la funcion print con el vector comidas siendo parametros

    cout << "comidas.swap(bebidas)" << endl;
    comidas.swap(bebidas); //Intercambia los valores del vector comidas por el bebidas
    print(comidas);  // Llamada de la funcion print con el vector comidas siendo parametros

    return 0;
}

// Implementacion de la funcion de print
void print(vector<string> x)
{
    cout << endl;
    vector<string>::iterator ite = x.begin(); // Inicializacion del iterador

    while(ite != x.end())
        cout << *ite++ << endl; // Imprime cada elemento del vector.

    cout << endl << endl;
}
