#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Programa que escribe y imprime una lista de numeros en dos archivos (pares, impares)
// Rodwel Polanco Martinez - 100500328

int getRandomNumber();
void writeNumber(fstream &, int);
void openFile(fstream &, string);
void closeFile(fstream &);

const int TOTAL_NUMBER = 10;
const int LIMIT_NUMBER = 100;

int main()
{
    // Declaracion de variables
    fstream oddFile;
    fstream evenFile;

    // Abrir los archivos
    openFile(oddFile, "impares.txt");
    openFile(evenFile, "pares.txt");

    int number;
    srand(time(0));

    cout << "Escribiendo numeros:\n\n";
    for (int i = 0; i < TOTAL_NUMBER; i++) // Se usa el ciclo para escribir numeros random
    {
        number = getRandomNumber();

        cout << number << "  ";
        if (number % 2 == 0)
            writeNumber(evenFile, number); // Si el numero es par se escribira en el archivo pares
        else
            writeNumber(oddFile, number); // Si el numero es impar se escribira en el archivo pares
    }

    closeFile(oddFile); // Cerrar los dos archivos
    closeFile(evenFile);
    cout << "\n\nTerminado!" << endl;

    return 0;
}

int getRandomNumber()
{
    return rand() % LIMIT_NUMBER + 1;
}

void writeNumber(fstream &file, int number)
{
    file << number << endl;
}

void openFile(fstream &file, string fileName)
{
    file.open(fileName.c_str(), ios::out);
}

void closeFile(fstream &file)
{
    file.close();
}
