#include <iostream>
#include <fstream>

/*
    Leer de un archivo de texto, e imprimir en consola.
    Creado por: 
        Rodwel Polanco Martinez - 100500328
*/

int main()
{
    // std::fstream myFile;

    // myFile.open("test.txt");

    // if (!myFile)
    // {
    //     std::cout << "El archivo no ha podido ser abierto." << std::endl;
    //     exit(1);
    // }

    std::string nameFile;
    std::string text;

    std::cout << "Introduzca el nombre del archivo." << std::endl;
    std::cin >> nameFile;

    std::ifstream myReadFile(nameFile);
    int countLines = 0;
    char decision;

    while (!myReadFile.eof())
    {
        std::getline(myReadFile, text);
        if (!text.empty())
        {
            countLines++;

            if (countLines % 25 == 0)
            {
                std::cout << "" << std::endl;
                std::cout << "Presione la tecla Y si quiere seguir leyendo. N si quiere detener y cerrar programa.." << std::endl;
                std::cin >> decision;

                if (tolower(decision) == 'n')
                {
                    myReadFile.close();
                    exit(1);
                }
            }
            std::cout << countLines << ": " << text << std::endl;
        }
    }

    // Cierra el archivo
    myReadFile.close();
    return 0;
}