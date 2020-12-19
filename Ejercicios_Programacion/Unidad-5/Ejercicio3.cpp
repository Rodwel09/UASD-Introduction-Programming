/*
    Programa que haga la simulacion de calculadora.
    Creado por: Rodwel Polanco Martinez - 100500328

    Ejemplo de introduccion de valores
    C:\> calc 4 + 8 [enter]
    C:\> 12
*/

#include <iostream>

const int MAX_ARGUMENTS_TO_INTRODUCE = 5;

const std::string SUM = "+";
const std::string REST = "-";
const std::string MULTH = "X";
const std::string MULTL = "x";
const std::string DIV = "/";
const std::string RESID = "%";
const std::string POTEN = "^";

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


int main(int argc, char** argv){
    double num1 = 0;
    double num2 = 0;

    if (argc == MAX_ARGUMENTS_TO_INTRODUCE)
    {
        if (argv[2] == SUM)
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << suma(num1, num2) << std::endl;
            return 0;
        }
        if (argv[2] == REST)
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << rest(num1, num2) << std::endl;
            return 0;
        }
        if (argv[2] == DIV)
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << div(num1, num2) << std::endl;
            return 0;
        }
        if (argv[2] == MULTH || argv[2] == MULTL)
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << mult(num1, num2) << std::endl;
            return 0;
        }
        if (argv[2] == RESID)
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << resid(num1, num2) << std::endl;
            return 0;
        }
        if (argv[2] == POTEN)
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << poten(num1, num2) << std::endl;
            return 0;
        }
    }
    else
    {
        std::cout << "Argumentos no validos " << argc << std::endl;
    }
    return 0;
}
