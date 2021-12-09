#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>
#include <time.h>

struct Invoice
{
    long factID;
    double factNet;
    double factAmount;
    double factDiscount;
    std::string factDate;
    std::string factClient;
};

// Declaracion de las constantes
const int MAX_ARGUMENTS_TO_INTRODUCE = 5;

const std::string SUM = "+";
const std::string REST = "-";
const std::string MULTH = "X";
const std::string MULTL = "x";
const std::string DIV = "/";
const std::string RESID = "%";
const std::string POTEN = "^";

const char PAPER = 'A';
const char ROCK = 'P';
const char SCCISOR = 'T';
const char OUTGAME = 'S';

// Declaracion de los strings cuando el usuario gana, empata o pierde.
const std::string WIN_MSG = "El usuario a ganado la ronda.";
const std::string LOSE_MSG = "El computador a ganado la ronda";
const std::string TIE_MSG = "Ha habido un empate.";

// Menu Functions
void Unidad1Menu();
void Unidad2Menu();
void Unidad3Menu();
void Unidad4Menu();
void Unidad5Menu();
void Unidad6Menu();
void Unidad7Menu();

// Programs of the diferent units
int MenuPrincipal();
void PrintCredentials();
// Unidad #1
void PrintHolaMundo();
// Unidad #2
void PrimeNumbers();
void PotentialCalc();
void SumMultOfNine();
// Unidad #3 
void InvoiceSystem();
void PrintNameAndLastName();
void ReadText();
// Unidad #4
void MatrixDet();
// Unidad #5
void FibonnaciSystem();
void RockPaperScissorsGame();
int CalcSim();
// Unidad #6
void ConcatPunt();
// Unidad #7
void FileSystem();

int main()
{
    int choice;
    do
    {
        choice = MenuPrincipal();
        switch (choice)
        {
        case 1:
            std::cout << "##################################" << std::endl;
            Unidad1Menu();
            break;
        case 2:
            std::cout << "##################################" << std::endl;
            Unidad2Menu();
            break;
        case 3:
            std::cout << "##################################" << std::endl;
            Unidad3Menu();
            break;
        case 4:
            std::cout << "##################################" << std::endl;
            Unidad4Menu();
            break;
        case 5:
            std::cout << "##################################" << std::endl;
            Unidad5Menu();
            break;
        case 6:
            std::cout << "##################################" << std::endl;
            Unidad6Menu();
            break;
        case 7:
            std::cout << "##################################" << std::endl;
            Unidad7Menu();
            break;
        default:
            break;
        }
    } while (choice != 0);
    PrintCredentials();
}

void Unidad7Menu(){
    int option;
    std::cout << "Unidad 7 -- Menu" << std::endl;
    do{
        std::cout << "1: Lee archivo y lo muestra en la consola" << std::endl;
        std::cout << "0: Salir del menu" << std::endl;
        std::cin >> option;
        std::cout << "##################################" << std::endl;
        if (option == 1) { FileSystem(); };
    }while(option != 0);
}

void Unidad6Menu(){
    int option;
    std::cout << "Unidad 6 -- Menu" << std::endl;
    do{
        std::cout << "1: Concatenar string usando punteros" << std::endl;
        std::cout << "0: Salir del menu" << std::endl;
        std::cin >> option;
        std::cout << "##################################" << std::endl;
        if (option == 1) { ConcatPunt(); };
    }while(option != 0);
}

void Unidad5Menu(){
    int option;
    std::cout << "Unidad 5 -- Menu" << std::endl;
    do{
        std::cout << "1: Sucession Fibonnacii" << std::endl;
        std::cout << "2: Juego Piedra, Papel, Tijeras" << std::endl;
        std::cout << "3: Simulacion calculadora" << std::endl;
        std::cout << "0: Salir del menu" << std::endl;
        std::cin >> option;
        std::cout << "##################################" << std::endl;
        if (option == 1) { FibonnaciSystem(); };
        if (option == 2) { RockPaperScissorsGame(); };
        if (option == 3) { CalcSim; };
    }while(option != 0);
}

void Unidad4Menu(){
    int option;
    std::cout << "Unidad 4 -- Menu" << std::endl;
    do{
        std::cout << "1: Matriz determinante" << std::endl;
        std::cout << "0: Salir del menu" << std::endl;
        std::cin >> option;
        std::cout << "##################################" << std::endl;
        if (option == 1) { MatrixDet(); };
    }while(option != 0);
}

void Unidad3Menu(){
    int option;
    std::cout << "Unidad 3 -- Menu" << std::endl;
    do{
        std::cout << "1: Identificar letras mayusculas, minusculas etc.." << std::endl;
        std::cout << "2: Descomposicion del nombre de usuario" << std::endl;
        std::cout << "3: Sistema de facturacion" << std::endl;
        std::cout << "0: Salir del menu" << std::endl;
        std::cin >> option;
        std::cin.ignore();

        std::cout << "##################################" << std::endl;
        if (option == 1) { ReadText(); };
        if (option == 2) { PrintNameAndLastName(); };
        if (option == 3) { InvoiceSystem(); };
    }while(option != 0);
}

void Unidad2Menu(){
    int option;
    std::cout << "Unidad 2 -- Menu" << std::endl;
    do{
        std::cout << "1: Suma multiplos de 9" << std::endl;
        std::cout << "2: Numeros Primos (50 - 500)" << std::endl;
        std::cout << "3: Potencia" << std::endl;
        std::cout << "0: Salir del menu" << std::endl;
        std::cin >> option;

        std::cout << "##################################" << std::endl;
        if (option == 1){ SumMultOfNine(); }
        if (option == 2){ PrimeNumbers(); }
        if (option == 3){ PotentialCalc();}
    } while(option != 0);
}

void Unidad1Menu(){
    int option;
    std::cout << "Unidad 1 -- Menu" << std::endl;
    do{
        std::cout << "1: Programa Hola Mundo" << std::endl;
        std::cout << "0: Salir de menu" << std::endl;
        std::cin >> option;
        std::cout << "#################################" << std::endl;
        if (option == 1){ PrintHolaMundo(); }
    }while(option != 0);
}

void PrintCredentials(){
    std::cout << "###############################################" << std::endl;
    std::cout << "Hecho por: Rodwel Polanco Martinez - 1005000328" << std::endl;
    std::cout << "###############################################" << std::endl;
}

void FileSystem(){
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
                    PrintCredentials();
                    return;
                }
            }
            std::cout << countLines << ": " << text << std::endl;
        }
    }

    // Cierra el archivo
    myReadFile.close();
    PrintCredentials();
}

// Funcion que toma los dos caracteres en forma de puntero
std::string MergeConcat(std::string* cad1, std::string* cad2)
{
    return *cad1 + *cad2;
}

void ConcatPunt(){
    // Declaracion de las variables
    std::string cadena1;
    std::string cadena2;

    std::cout << "Introduzca una palabra en la consola" << std::endl;
    std::cin >> cadena1;

    std::cout << "Introduzca otra palabra en la consola" << std::endl;
    std::cin >> cadena2;

    std::string* ptrCadena1 = &cadena1;
    std::string* ptrCadena2 = &cadena2;

    std::string result = MergeConcat(ptrCadena1, ptrCadena2);

    std::cout << result << std::endl;

    PrintCredentials();
}

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

int CalcSim(int argc, char** argv){
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
        }
        if (argv[2] == REST) // Si la operacion es una resta
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << rest(num1, num2) << std::endl; // Imprime el retorno de la funcion rest
        }
        if (argv[2] == DIV) // Si la operacion es una division
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << div(num1, num2) << std::endl; // Imprime el retorno de la funcion div
        }
        if (argv[2] == MULTH || argv[2] == MULTL) // Si la operacion es una multiplicacion
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << mult(num1, num2) << std::endl; // Imprime el retorno de la funcion mult
        }
        if (argv[2] == RESID) // Si la operacion de residuo
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << resid(num1, num2) << std::endl; // Imprime el retorno de la funcion residuo
        }
        if (argv[2] == POTEN) // Si la operacion es una potencia
        {
            num1 = atof(argv[1]);
            num2 = atof(argv[3]);

            std::cout << poten(num1, num2) << std::endl; // Imprime el retorno de la funcion potencia
        }
    }
    else
    {
        std::cout << "Argumentos no validos " << argc << std::endl; // Imprime el error en la consola.
    }

    PrintCredentials();
}

// Funcion que depliega el menu del juego
void displayMenu(){
    std::cout << "Jugemos piedra, papel, tijeras. Seleccione una de las siguientes opciones" << std::endl;
    std::cout << "A --> Papel" << std::endl;
    std::cout << "P --> Piedra" << std::endl;
    std::cout << "T ---> Tijeras" << std::endl;
    std::cout << "S ---> Para salir del juego" << std::endl;
}

// Funcion que toma el caracter del usuario
char getUserDecision(){
    char decision;
    std::cin >> decision;

    return decision;
}

// Funcion toma un caracter random 
char getComputerOption(){
    char allOptions[] = {'A', 'P', 'T'};
    srand(time(0));
    int randIndex = rand() % 3;
    return allOptions[randIndex];
}

// Funcion que verifica los datos del usuario y del opciones del computador
std::string checkOptions(char optionComputer, char userOptions){
    if (userOptions == 'S') return "False";

    std::cout << "El usuario a elegido: " << userOptions << " El computador a elegido: " << optionComputer << std::endl;
    // Papel
    if (userOptions == 'A' && optionComputer == 'T') return LOSE_MSG;
    if (userOptions == 'A' && optionComputer == 'P') return WIN_MSG;
    if (userOptions == 'A' && optionComputer == 'A') return TIE_MSG;
    // Piedra
    if (userOptions == 'P' && optionComputer == 'T') return WIN_MSG;
    if (userOptions == 'P' && optionComputer == 'A') return LOSE_MSG;
    if (userOptions == 'P' && optionComputer == 'P') return TIE_MSG;
    // Tijera
    if (userOptions == 'T' && optionComputer == 'A') return WIN_MSG;
    if (userOptions == 'T' && optionComputer == 'P') return LOSE_MSG;
    if (userOptions == 'T' && optionComputer == 'T') return TIE_MSG;

    return "";
}

void RockPaperScissorsGame(){
    bool endLoop = false; // Variable del ciclo
    do
    {
        displayMenu(); // Llama la funcion display menu
        
        char computerOptions = getComputerOption(); // Se optiene la caracter del computador
        char userOption = getUserDecision(); // Se optiene el caracter del usuario

        std::string options = checkOptions(computerOptions, toupper(userOption)); // En vez de validar que solamente introduzca numeros en mayuscula es mas eficiente. Transformarlos a mayuscula directamente.

        if(options == "False"){ // Si las opciones retorna "Falsa"
            endLoop = true; // Marca la variable endLoop verdadero
        }else{
            std::cout << options << std::endl; // Imprime el dato de la variable options
        }
    } while (!endLoop); // Si en loop es falso, continua el loop.

    PrintCredentials();
}

int Fibonnacci(int searchTerm, int position = 0, int inicial1 = 0, int inicial2 = 1){
    int sequence = inicial1 + inicial2;
    if (sequence >= searchTerm) return position; // Si sequence variable es mayor o igual que la variable searchTerm retorna el valor de position
    return Fibonnacci(searchTerm, position + 1, inicial2, sequence); // Retorno de la funcion fibonacci de forma recursiva.
}

void FibonnaciSystem(){
    // Declaracion de la variable
    long amount = Fibonnacci(21); // Llamada de la funcion fibonnacci
    std::cout << "Cantidad: " << amount << std::endl; // Imprime el valor final.
    PrintCredentials();
}

void MatrixDet(){
    int val;
    int firstValue = 1;
    int secondValue = 1;

    int myMatrix[2][2];

    // Inicializacion de la matriz
    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 2; c++)
        {
            std::cout << "Introduzca el valor en matriz " << std::endl;
            std::cin >> val;
            myMatrix[f][c] = val;
        }
    }

    for (int f = 0; f < 2; f++)
    {
        for (int c = 0; c < 2; c++)
        {
            // Calculo de la determinante.
            if (f == c)
            {
                firstValue = firstValue * myMatrix[f][c];   
            }
            else
            {
                secondValue = secondValue * myMatrix[f][c];
            }
        }
    }

    std::cout << "El valor de la determinante es: " << secondValue - firstValue  << std::endl;

    PrintCredentials();
}

void InvoiceSystem(){
    struct Invoice inv1;
    std::cout << "Introduzca el numero de la factura " << std::endl;
    std::cin >> inv1.factID;
    std::cin.ignore();
    std::cout << "Introduzca el nombre del cliente " << std::endl;
    std::getline(std::cin, inv1.factClient);
    std::cout << "Introduzca el monto de la factura " << std::endl;
    std::cin >> inv1.factAmount;
    std::cin.ignore();
    std::cout << "Introduzca la fecha de la factura " << std::endl;
    std::getline(std::cin, inv1.factDate);

    if (inv1.factAmount >= 20000 && inv1.factAmount < 30000) inv1.factDiscount = inv1.factAmount * 0.07;
    if (inv1.factAmount >= 30000 && inv1.factAmount < 50000) inv1.factDiscount = inv1.factAmount * 0.1;
    if (inv1.factAmount >= 50000) inv1.factDiscount = inv1.factAmount * 0.14;
    if (inv1.factAmount < 2000) inv1.factDiscount = 0;

    inv1.factNet = inv1.factAmount - inv1.factDiscount;

    std::cout << "El valor neto de la factura es " << inv1.factNet << std::endl;

    PrintCredentials();
}

void PrintNameAndLastName(){
    std::string nombre;
    std::cout << "Introduzca el nombre: ";
    std::getline(std::cin, nombre); // Introduce el nombre del usuario.

    std::string::iterator iter = nombre.begin();

    while(iter != nombre.end()){
        std::cout << *iter << std::endl;
        iter++;
    }

    PrintCredentials();
}

void ReadText(){
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

    PrintCredentials();
}

void PrintHolaMundo(){
    std::cout << "Hola estoy programando en c++" << std::endl;
    PrintCredentials();
}

void PotentialCalc(){
    double base;
    int exponente;
    int result = 1;
    int counter = 0;

    std::cout << "Introduzca la base de la potencia ";
    std::cin >> base;
    std::cout << "Introduzca el exponente de la potencia ";
    std::cin >> exponente;

    exponente = (exponente <= 0) ? 1 : exponente; // Validando el exponente
    
    while (counter < exponente)
    {
        result = result * base;   
        counter++;
    }
    
    std::cout << "El resultado de la potencia es: " << result << std::endl;
    PrintCredentials();
}

void PrimeNumbers(){
    std::cout << "Todos los numeros de 50 al 500" << std::endl;
    for (int num = 50; num <= 500; num++)
    {
        bool isPrime = true;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
            }
        }

        if (isPrime)
        {
            std::cout << num << std::endl;
        }
    }
    PrintCredentials();
}

void SumMultOfNine(){
    int startNumber;
    int endNumber;

    int sums = 0; // Guarda la suma de todos los multiplos de 9
    int multiplesCount = 0; // Guarda el conteo de multiplos de 9

    std::cout << "Introduzca el numero inicial ";
    std::cin >> startNumber;
    std::cout << "Introduzca el numero para finalizar ";
    std::cin >> endNumber;

    if (startNumber < endNumber)
    {
        while (startNumber < endNumber)
        {
            if (startNumber % 9 == 0)
            {
                sums += startNumber;
                multiplesCount++;
            }
            startNumber++;
        }
        int prom = sums / multiplesCount;
        std::cout << "El promedio es: " << prom << std::endl;
    }
    else
    {
        std::cout << "El numero inicial tiene que ser menor que el numero final" << std::endl;
    }

    PrintCredentials();
}



int MenuPrincipal()
{
    int option;
    std::cout << "Menu Principal - Elija una opcion" << std::endl;
    std::cout << "1: Unidad 1" << std::endl;
    std::cout << "2: Unidad 2" << std::endl;
    std::cout << "3: Unidad 3" << std::endl;
    std::cout << "4: Unidad 4" << std::endl;
    std::cout << "5: Unidad 5" << std::endl;
    std::cout << "6: Unidad 6" << std::endl;
    std::cout << "7: Unidad 7" << std::endl;
    std::cout << "0: Salir del programa" << std::endl;
    std::cin >> option;

    return option;
}
