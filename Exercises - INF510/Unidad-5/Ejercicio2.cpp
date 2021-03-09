/*
    Programa que hace la simulacion del Juego, Piedra, Papel o Tijeras.
    Creado por: Rodwel Polanco Martinez - 100500328
*/

#include <vector>
#include <string>
#include <random>
#include <time.h>
#include <iostream>

const char PAPER = 'A';
const char ROCK = 'P';
const char SCCISOR = 'T';
const char OUTGAME = 'S';

const std::string WIN_MSG = "El usuario a ganado la ronda.";
const std::string LOSE_MSG = "El computador a ganado la ronda";
const std::string TIE_MSG = "Ha habido un empate.";


void displayMenu(){
    std::cout << "Jugemos piedra, papel, tijeras. Seleccione una de las siguientes opciones" << std::endl;
    std::cout << "A --> Papel" << std::endl;
    std::cout << "P --> Piedra" << std::endl;
    std::cout << "T ---> Tijeras" << std::endl;
    std::cout << "S ---> Para salir del juego" << std::endl;
}

char getUserDecision(){
    char decision;
    std::cin >> decision;

    return decision;
}

char getComputerOption(){
    char allOptions[] = {'A', 'P', 'T'};
    srand(time(0));
    int randIndex = rand() % 3;
    return allOptions[randIndex];
}

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

int main(){
    bool endLoop = false;
    do
    {
        displayMenu();
        
        char computerOptions = getComputerOption();
        char userOption = getUserDecision();

        std::string options = checkOptions(computerOptions, toupper(userOption)); // En vez de validar que solamente introduzca numeros en mayuscula es mas eficiente. Transformarlos a mayuscula directamente.

        if(options == "False"){
            endLoop = true;
        }else{
            std::cout << options << std::endl;
        }
    } while (!endLoop);

    return 0;
}