//
//  main.cpp
//  Uasd-Ejercicios
//
//  Created by Rodwel Polanco Martinez on 9/25/20.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int firstNumber;
    int secondNumber;
    
    cout << "Introduce el primer numero: ";
    cin >> firstNumber;
    cout << "Introduce el segundo numero: ";
    cin >> secondNumber;
    
    int sum = firstNumber + secondNumber;
    int rest = firstNumber - secondNumber;
    int multi = firstNumber * secondNumber;
    int div = firstNumber / secondNumber;
    
    cout << "Resultado de la suma: " << sum << "\n";
    cout << "Resultado de la resta: " << rest << "\n";
    cout << "Resultado de la multiplicacion: " << multi << "\n";
    cout << "Resultado de la division: " << div << "\n";
    
    return 0;
}