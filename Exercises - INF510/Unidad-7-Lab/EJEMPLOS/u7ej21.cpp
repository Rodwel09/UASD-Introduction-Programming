#include <iostream>
#include <fstream>
using namespace std;

// Programa que imprime la cantidad de bytes, y las fechas introducidas en el usuario
// Rodwel Polanco Martinez - 1000500328

int main(int argc, char** argv) {

    // Declaracion de variables
    const int BYTES_READ_WRITE = 8;
    char fecha[9];
    long bytes, skip;
    fecha[8] = '\0';

    fstream file("fechas.txt", ios::in | ios::out | ios::binary); // Abir el archivo

    file.seekg(16L, ios::beg);
    file.read(fecha, BYTES_READ_WRITE);
    cout << "La 3ra fecha es: " << fecha << endl; // Imprime la 3ra fecha

    file.seekg((long) (6 * BYTES_READ_WRITE), ios::beg);
    file.read(fecha, BYTES_READ_WRITE);
    cout << "La 7ma fecha es: " << fecha << endl; // Imprime la 7ma fecha

    file.seekp(0L, ios::end);
    bytes = file.tellp();
    cout << "\nEl archivo tiene " << bytes << " bytes.\n"; // Imprime la cantidad de bytes del archivo

    cout << "\nEntre una nueva fecha (YYYYMMDD): ";
    cin.getline(fecha, 9);
    file.write(fecha, BYTES_READ_WRITE);
    bytes += BYTES_READ_WRITE; // Escribe una nueva fecha en el archivo

    file.seekg(ios::beg);
    skip = 0;
    while ((skip * BYTES_READ_WRITE) != bytes) {
        file.seekg(skip * BYTES_READ_WRITE, ios::beg);
        file.read(fecha, BYTES_READ_WRITE);
        cout << "Fecha " << ++skip << ": " << fecha << endl; // Imprime las fechas del archivo
    }

    file.close(); // Cerrar el archivo
    return 0;
}
