#include "Class/Polimorfismo_SobreEscrituraMetodos/Chiguagua.h"
#include "Class/Polimorfismo_SobreEscrituraMetodos/Rodwaller.h"

template<typename Dog, typename T>
inline bool instanceof(const T*) {
    return std::is_base_of<Dog, T>::value;
}

int main(){
    Dog viv;
    Chiguagua tom;
    Chiguagua lun;
    Rodwaller nek;

    viv.setDogName("Viviana");
    tom.setDogName("Luna");
    lun.setDogName("Tom");
    nek.setDogName("Neko");

    // Same methods for all clases
    viv.printName();
    tom.printName("Tom");
    lun.printName("Luna");
    nek.printName("Neko");
}