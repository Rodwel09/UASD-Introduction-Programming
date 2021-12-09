#include <iostream>
#include <fstream>

using namespace std;

// Programa que ingresa data en un archivo de data.
// Rodwel Polanco Martinez - 1000500328

struct Track
{
    int trackId;
    char titulo[40];
    int duracion;
};

int main()
{
    // Declaracion de variables
    Track track;
    char continuar;
    fstream musicFile;
    int contador = 0;

    musicFile.open("musica.dat", ios::out | ios::binary); // Abrir archivo binario

    do
    {
        track.trackId = contador++;
        cout << "Titulo         : ";
        cin.getline(track.titulo, 40);
        cout << "Duracion (segs): ";
        cin >> track.duracion; // Leer los datos en la consola

        musicFile.write(reinterpret_cast<char *>(&track), sizeof(track)); // Escribe en el archivo

        cout << "\nDesea agregar otra cancion (s/n)? ";
        cin.get(continuar); // Leer decision
   } while (toupper(continuar) == 'S');

   musicFile.close(); // Cerrar el archivo

   return 0;
}
