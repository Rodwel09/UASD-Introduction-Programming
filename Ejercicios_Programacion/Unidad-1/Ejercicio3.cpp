//
//  main.cpp
//  Ejercicio-3
//
//  Created by Rodwel Polanco Martinez on 9/26/20.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // Declaracion de variables
    char userName[30];
    int age;
    
    // Introduccion de datos
    cout << "Introduce la edad del usuario: ";
    cin >> age;
    cin.ignore();
    cout << "Introduce el nombre de usuario: ";
    cin.getline(userName, 30);
    
    // Salida de informacion
    cout << "Hola " << userName << " usted tiene " << age << " años \n";
    return 0;
}
