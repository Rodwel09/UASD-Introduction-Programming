/*
    Programa que haga la simulacion de calculadora.
    Creado por: Rodwel Polanco Martinez - 100500328

    Ejemplo de introduccion de valores
    C:\> calc 4 + 8 [enter]
    C:\> 12
*/

#include <iostream>

// Declaracion de constantes
const int MAX_ARGUMENTS_TO_INTRODUCE = 5;

const std::string SUM = "+";
const std::string REST = "-";
const std::string MULTH = "X";
const std::string MULTL = "x";
const std::string DIV = "/";
const std::string RESID = "%";
const std::string POTEN = "^";

// Declaracion de funciones para la calculadora
int suma(double n1, double n2)
{   
    return n1 + n2;
}

int mult(double n1, double n2){
    return n1 * n2;
}

int rest(double n1, double n2){
    return n1 - n2;
}

int div(double n1, double n2){
    return n1 / n2;
}

int resid(int n1, int n2){
    return n1 % n2;
}

int poten(int n1, int n2){
    return n1 ^ n2;
}   


// Declaracion de la funcion main
int main(int argc, char** argv){
    // Declaracion de variables
    double num1 = 0;
    double num2 = 0;

    if (argc == MAX_ARGUMENTS_TO_INTRODUCE) // Comparar los argumentos con el constante "MAX_ARGUMENTS_TO_INTRODUCE" 
    {
        if (argv[2] == SUM) // Si la operacion es una suma
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << suma(num1, num2) << std::endl; // Imprime el retorno de la funcion suma
            return 0;
        }
        if (argv[2] == REST) // Si la operacion es una resta
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << rest(num1, num2) << std::endl; // Imprime el retorno de la funcion rest
            return 0;
        }
        if (argv[2] == DIV) // Si la operacion es una division
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << div(num1, num2) << std::endl; // Imprime el retorno de la funcion div
            return 0;
        }
        if (argv[2] == MULTH || argv[2] == MULTL) // Si la operacion es una multiplicacion
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << mult(num1, num2) << std::endl; // Imprime el retorno de la funcion mult
            return 0;
        }
        if (argv[2] == RESID) // Si la operacion de residuo
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << resid(num1, num2) << std::endl; // Imprime el retorno de la funcion resid
            return 0;
        }
        if (argv[2] == POTEN) // Si la operacion es una potencia
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << poten(num1, num2) << std::endl; // Imprime el retorno de la funcion poten
            return 0;
        }
    }
    else
    {
        std::cout << "Argumentos no validos " << argc << std::endl; // Imprime el error en la consola.
    }
    return 0;
}
