#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Programa que toma diferentes datos en un struct y lo escribe en un archivo.
// Rodwel Polanco Martinez - 100500328

struct Estudiante
{
	string matricula;
	string nombre;
	int carrera;
};

int main()
{
	// Declaracion de variables
	char continuar;
	Estudiante e;

	fstream dataFile;
	dataFile.open("estud1.txt", ios::out | ios::app); // Abre el archivo

	do
    {
		cout << "Matricula: ";
		getline(cin, e.matricula); // Lectura de matricula
		cout << "Nombre   : ";
		getline(cin, e.nombre); // Lectura de nombre
		cout << "Carrera  : ";
		cin >> e.carrera; // Lectura de carrera
		cin.ignore();

		dataFile << setw(15) << left << e.matricula
				 << setw(35) << left << e.nombre
				 << setw(10) << left << e.carrera // Formateo de datos en archivo
				 << "\n";

		cout << "Desea continuar (S/N)? ";
		cin >> continuar; // Lectura de decision
		cin.ignore();
	} while (continuar == 'S' || continuar == 's'); // Ejecutar loop mientras la variable continuar es S minuscula o mayuscula

	dataFile.close(); // Cierre del archivo.
	return 0;
}
