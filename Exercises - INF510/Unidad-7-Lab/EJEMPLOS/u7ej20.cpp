#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
using namespace std;

// Declaracion de struct
struct Contacto
{
    char nombre[30];
    unsigned int edad;
};

int main(int argc, char** argv)
{
    Contacto contc; // Declaracion de struct
    fstream datos("contacto.dat", ios::in
                                | ios::binary); // Abrir el archivo binario

    cout << "Presione cualquier tecla para listar los contactos:";
    getch();
    cout << endl << endl;
    datos.read(reinterpret_cast<char *>(&contc), sizeof(contc)); // Leer el archivo
	while (!datos.eof()) // Mientras haya informacion del archivo
	{
        cout << setw(30) << left << contc.nombre << "\t"
             << setw(5) << right << contc.edad << endl; // Imprimir informacion del archivo
        datos.read(reinterpret_cast<char *>(&contc), sizeof(contc));
	}

	datos.close(); // Cerrar el archivo
	return 0;
}
