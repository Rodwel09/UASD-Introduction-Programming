#include <iostream>

// Template
template<class TParam>
void Swap(TParam &x, TParam &y){
    TParam temp = x;
    x = y;
    y = temp;
}

// Funcion principal
int main(){
    int a = 5;
    int b = 6;

    Swap(a, b);
}