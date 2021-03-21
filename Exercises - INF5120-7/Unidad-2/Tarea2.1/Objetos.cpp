#include "Class/Objetos/Person.h"

int main(){

    Person* person = new Person;
    
    person->SetName("Rodwel Polanco Martinez");
    person->SetAge("21");

    person->FullInfo();

    //delete object from memory
    delete person;
}