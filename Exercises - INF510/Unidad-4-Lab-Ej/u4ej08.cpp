#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/*
    Programa en el cual llena data de un struct y luego se introduce en un vector, que luego sera imprimido en la consola

    Rodwel Polanco Martinez - 100500328
*/


// Declaracion del struct 
struct Contacto
{
    int codigo;
    string nombre;
    string email;
    int edad;
    double sueldoDeseado;
};

// Declaracion del print 
void print(vector<Contacto>);

int main(int argc, char** argv)
{
    Contacto c;
    vector<Contacto> contactos;

    cout << "Introduzca los siguientes datos (0 para finalizar)";

    do
    {
        cout << "\n\nCodigo        : ";
        cin >> c.codigo;

        if (c.codigo == 0) break; // Si el codigo es 0 rompe el ciclo

        // Introduce el por medio de la consola los nombre, email, edad, sueldo
        cin.ignore();
        cout << "Nombre        : ";
        cin.getline(c.nombre);
        cout << "Email         : ";
        cin.getline(c.email);
        cout << "Edad          : ";
        cin >> c.edad;
        cout << "Sueldo deseado: ";
        cin >> c.sueldoDeseado;

        contactos.push_back(c); // Los datos seran introducidos al final del vector.
    } while(true);

    print(contactos); // Llamada de la funcion print con el vector comidas siendo parametros

    return 0;
}

// Implementacion de la funcion print
void print(vector<Contacto> x)
{
    cout << endl;

    for (int i = 0; i < x.size(); i++) // For loop que recorre el vector 
    {
        // Imprime cada elemento del structs dentro del vector
        cout << setw(5) << left << x.at(i).codigo;
        cout << setw(20) << left << x.at(i).nombre;
        cout << setw(35) << left << x.at(i).email;
        cout << setw(5) << right << x.at(i).edad;
        cout << setw(10) << right << setprecision(2) << fixed << x.at(i).sueldoDeseado;
        cout << endl;
    }

    cout << endl << endl;
}
