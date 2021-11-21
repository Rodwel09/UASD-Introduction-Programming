/*
    Programa que hace la simulacion del Juego, Piedra, Papel o Tijeras.
    
    Creado por: Rodwel Polanco Martinez - 100500328
*/

#include <vector>
#include <string>
#include <random>
#include <time.h>
#include <iostream>

// Declaracion de las constantes
const char PAPER = 'A';
const char ROCK = 'P';
const char SCCISOR = 'T';
const char OUTGAME = 'S';

// Declaracion de los strings cuando el usuario gana, empata o pierde.
const std::string WIN_MSG = "El usuario a ganado la ronda.";
const std::string LOSE_MSG = "El computador a ganado la ronda";
const std::string TIE_MSG = "Ha habido un empate.";

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

// Inicio del a funcion main (principal)
int main(){
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

    return 0;
}