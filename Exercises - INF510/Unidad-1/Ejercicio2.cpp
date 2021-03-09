//
//  main.cpp
//  Ejercicio-2
//
//  Created by Rodwel Polanco Martinez on 9/26/20.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    double firstNumber;
    double secondNumber;
    double thirdNumber;
    
    cout << "Introduce el primer numero: ";
    cin >> firstNumber;
    cout << "Introduce el segundo numero: ";
    cin >> secondNumber;
    cout << "Introduce el tercer numero: ";
    cin >> thirdNumber;

    double sum = firstNumber + secondNumber + thirdNumber;
    
    double prom = sum / 3;
    
    cout << "El promedio de los numeros ingresados es: " << prom << "\n";
    return 0;

}
