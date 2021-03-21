#include "Class/Polimorfismo_SobreEscrituraMetodos/Chiguagua.h"
#include "Class/Polimorfismo_SobreEscrituraMetodos/Rodwaller.h"

// En este programa se entiende los elementos de polimorfismo y por los sobreescripcion de los metodos.

int main(){
    Dog dog;
    Chiguagua chiguagua;
    Rodwaller rodwaller;

    std::cout << "El metodo bark de la clase Dog" << std::endl;
    dog.Bark();

    std::cout << "El metodo bark de la clase Chiguagua que hereda de la clase Dog" << std::endl;
    chiguagua.Bark();

    std::cout << "El metodo bark de la clase Rodwaller que hereda de la clase Dog" << std::endl;
    rodwaller.Bark();
}