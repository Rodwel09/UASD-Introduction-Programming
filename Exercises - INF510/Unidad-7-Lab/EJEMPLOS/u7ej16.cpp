#include <iostream>
#include <fstream>

using namespace std;

// Programa que abre un archivo y escribe en ese archivo
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
	fstream dataFile;

    cout << "Abriendo archivo...\n";
    dataFile.open("libros.txt", ios::out); // Abrir el archivo libro.txt

    cout << "Escribiendo en el archivo...\n";
    dataFile << "Expert Oracle PL/SQL\n";
    dataFile << "Ruby On Rails\n";
    dataFile << "Database Design Solutions\n";
    dataFile << "Starting Out C++\n";
	dataFile << "Oracle PL/SQL Best Practices\n"; // Escribir el archivo

	cout << "Cerrando archivo...\n";
    dataFile.close(); // Cerrando el archivo

    cout << "Fin del programa.\n";
    return 0;
}
