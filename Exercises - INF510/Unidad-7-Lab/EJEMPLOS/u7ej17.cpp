#include <iostream>
#include <fstream>

using namespace std;

// Programa que imprime las lineas de texto del archivo
// Rodwel Polanco Martinez - 100500328

int main(int argc, char** argv)
{
    // Declaracion de los variables
	fstream dataFile;
	string linea;

    cout << "Abriendo archivo...\n\n";
    dataFile.open("libros.txt", ios::in); // Abrir el archivo

    if (dataFile.fail()) // Si el archivo falla imprimir error
    {
        cout << "Error al abrir el archivo.\n";
        cout << "Puede que el archivo no exista.\n";
    }
    else
    {
        cout << "Leyendo el archivo...\n";
        while (!dataFile.eof()) // Mientras el archivo tiene data.
        {
            getline(dataFile, linea); // Obtener linea
            cout << linea << endl; // Imprimir la linea
        }

        cout << "Cerrando archivo...\n";
        dataFile.close(); // Cerrar archivo
    }

    cout << "Fin del programa.\n";
    return 0;
}
