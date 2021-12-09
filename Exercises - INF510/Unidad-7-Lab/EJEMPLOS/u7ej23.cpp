#include <iostream>
#include <fstream>
using namespace std;

// Programa que lee un archivo binario donde se contiene las ubicaciones 
// Rodwel Polanco Martinez - 100500328

// Declaracion de structs
struct Ubicacion
{
   char nombre[40];
   double latitud;
   double longitud;
};

long byteNumero(int);
void muestraUbicacion(Ubicacion);

int main(int argc, char** argv)
{
    // Declaracion de variables
    Ubicacion lugar;
    fstream ubicaciones;
    long bytes;
    int pos;

    ubicaciones.open("lugar.dat", ios::in | ios::binary); // Abrir archivo binario

    if (ubicaciones)
    {
        ubicaciones.seekg(0L, ios::end);
        bytes = ubicaciones.tellg();

        cout << "Existen " << bytes / sizeof(lugar)
             << " ubicaciones, cual desea visualizar (1 - "
             << bytes / sizeof(lugar) << ")? [0 - Salir]\n\n";

        do
        {
            cout << "Ubicacion No.: ";
            cin >> pos; // Leer dato en consola

            if (pos == 0)
                break;
            else if (pos > bytes / sizeof(lugar) || pos < 0)
            {
                cout << "Numero de ubicacion incorrecto.\n\n";
                continue;
            }

            ubicaciones.seekg(byteNumero(pos), ios::beg);
            ubicaciones.read(reinterpret_cast<char *>(&lugar),
                             sizeof(lugar)); // Leer el archivo binario
            muestraUbicacion(lugar);
        } while (true);
    }

    ubicaciones.close(); // Cerrar el archivo

    return 0;
}

long byteNumero(int recNumero)
{
    return sizeof(Ubicacion) * (recNumero - 1);
}

void muestraUbicacion(Ubicacion record)
{
    cout << record.nombre << " -> "
         << "Latitud: " << record.latitud
         << " Longitud: " << record.longitud
         << endl << endl;
}
