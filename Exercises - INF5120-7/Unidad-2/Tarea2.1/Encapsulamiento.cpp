#include "Class/Objetos/Person.h"


int main(){
    Person* person1 = new Person();
    person1->SetName("Michael Jackson");
    person1->SetAge("51");

    Person* person2 = new Person();
    person2->SetName("Bill Hader");
    person2->SetAge("41");
    
    person1->FullInfo();

    person2->FullInfo();
}