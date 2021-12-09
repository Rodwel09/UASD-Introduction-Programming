#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

// Programa que lee el archivo y imprime la data dentro del archivo.
// Rodwel Polanco Martinez - 1000500328

struct Estudiante
{
	string matricula;
	string nombre;
	int carrera;
};

int main()
{
	// Declaracion de variable
	string linea;
	Estudiante e;

	fstream dataFile;
	dataFile.open("estud1.txt", ios::in); // Abrir archivo en el directorio

	while (!dataFile.eof()) // Mientras haya data
	{
		getline(dataFile, linea); // Lectura de la linea
		cout << linea << endl; // Impresion de la linea
	}

	dataFile.close(); // Cerrar el archivo
	return 0;
}
