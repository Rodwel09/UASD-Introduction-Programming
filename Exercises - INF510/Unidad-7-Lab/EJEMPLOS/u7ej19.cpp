#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Contacto
{
    char nombre[30];
    unsigned int edad;
};

// Programa que escribe datos en el archivo
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    Contacto contc; // Declaracion de struct

    fstream datos("contacto.dat", ios::out
                                | ios::binary
                                | ios::app); // Abrir archivo de datos

    cout << "Entre datos de contacto (0 - Salir):\n";
	do
	{
		// Leer datos de la consola
		cout << "\nNombre: ";
		cin.getline(contc.nombre, 30);
		if (strcmp(contc.nombre, "0") == 0)
            break;
		cout << "Edad  : ";
		cin >> contc.edad;
		cin.ignore();
		datos.write(reinterpret_cast<char *>(&contc), sizeof(contc)); // Escribir dato en el archivo
	} while (true);

	datos.close(); // Cerrar el archivo
	return 0;
}
