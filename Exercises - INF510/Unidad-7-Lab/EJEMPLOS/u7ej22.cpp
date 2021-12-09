#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Declaracion del struct
struct Ubicacion
{
   char nombre[40];
   double latitud;
   double longitud;
};

int main(int argc, char** argv)
{
    // Declaracion de la variable
    Ubicacion lugar;
    fstream ubicaciones;

    ubicaciones.open("lugar.dat", ios::out | ios::binary); // Abrir el archivo

    cout << "Ubicaciones [0 - para salir]\n\n";
    do
    {
        cout << "Lugar   : ";
        cin.getline(lugar.nombre, 40); // Lectura de lugar

        if (strcmp(lugar.nombre, "0") == 0)
            break;

        cout << "Latitud : ";
        cin >> lugar.latitud;
        cout << "Longitud: ";
        cin >> lugar.longitud;
        cin.ignore(); // Lectura de datos

        ubicaciones.write(reinterpret_cast<char *>(&lugar), sizeof(lugar)); // Escribir en el archivo
    } while (true);

    ubicaciones.close(); // Cerrar el archivo

    return 0;
}
