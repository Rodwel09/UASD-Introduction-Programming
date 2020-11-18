#include <iostream>
#include <string>


int main()
{
    std::string text;

    std::cout << "Introduzca un texto cualquiera ";
    std::getline(std::cin, text); // Se obtiene el texto.

    int digit_counter = 0;
    int supper_counter = 0;
    int space_counter = 0;
    int lower_counter = 0;
    int alpha_counter = 0;

    for (int index = 0; index < text.length(); index++)
    {
        if (isdigit(text.at(index))) digit_counter++;
        if (isupper(text.at(index))) supper_counter++;
        if (isspace(text.at(index))) space_counter++;
        if (islower(text.at(index))) lower_counter++;
        if (isalpha(text.at(index))) alpha_counter++;
    }
    
    std::cout << "Numero de digitos que aparecen en el texto " << digit_counter << std::endl;
    std::cout << "Numero de letras de mayusculas en el texto " << supper_counter << std::endl;
    std::cout << "Numero de espacios en el texto " << space_counter << std::endl;
    std::cout << "Numero de letras minusculas en el texto " << lower_counter << std::endl;
    std::cout << "Numero de letras alphanumericas en el texto " << alpha_counter << std::endl;
}