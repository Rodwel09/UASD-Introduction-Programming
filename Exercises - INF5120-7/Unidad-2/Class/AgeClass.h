#include <iostream>

class AgeClass
{
private:
    int age;
public:
    AgeClass(int ageIntroduce){
        age = ageIntroduce;
    }
    int returnAge(){
        return age;
    }
};
