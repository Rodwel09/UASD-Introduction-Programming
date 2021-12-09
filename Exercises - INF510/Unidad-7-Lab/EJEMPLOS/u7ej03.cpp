#include <iostream>
#include <fstream>
using namespace std;

// Programa que verifica si el archivo existe en el directorio y lo crea si no existe
// Rodwel Polanco Martinez - 100500328

int main()
{
	fstream dataFile;
	dataFile.open("existe.txt", ios::in); // Abre el archivo
	if (dataFile.fail()) // Si el archivo falla al abrir
	{
		cout << "Crea archivo ya que no existe.\n"; 
		dataFile.open("existe.txt", ios::out); // Crea el archivo
		dataFile << "Esta es una nueva linea.\n"; // Agrega una linea nueva
	}
	else
	{
		cout << "Archivo ya existe :)\n"; // Imprime que archivo existe.
	}
	dataFile.close(); // Cierra el archivo.
	return 0;
}
