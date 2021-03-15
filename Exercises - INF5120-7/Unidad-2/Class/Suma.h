#include <iostream>

class Suma{
    private: 
        int num1;
        int num2;
    public:
        Suma(int userNum1, int userNum2){
            num1 = userNum1;
            num2 = userNum2;
        }
        int returnSum(){
            return num1 + num2;
        }
};