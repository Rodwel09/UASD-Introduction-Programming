#include <iostream>
#include <fstream>

// Programa que le solicite al usuario introducir el nombre de un archivo.
// Y deplegar el contenido del archivo en la pantalla. 
// Rodwel Polanco Martinez - 100500328

int main()
{
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