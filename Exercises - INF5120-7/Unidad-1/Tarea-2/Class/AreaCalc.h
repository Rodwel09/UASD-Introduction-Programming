#include <iostream>

class AreaCalc{
    private:
        int base;
        int height;
    public: 
        AreaCalc(int userBase, int userHeight){
            base = userBase;
            height = userHeight;
        }
        int printSquareArea(){
            return base * height;
        }
};