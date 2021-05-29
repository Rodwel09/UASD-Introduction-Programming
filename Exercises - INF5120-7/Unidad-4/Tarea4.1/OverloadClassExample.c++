#include "OverloadClass.h"

int main(){
    OverloadClass sampleA(143, 250);
    OverloadClass sampleB(150, 250);

    OverloadClass sampleC = sampleA + sampleB;

    std::cout << "A = " << sampleA.a << ", " << sampleA.b << "\n";
    std::cout << "B = " << sampleB.a << ", " << sampleB.b << "\n";
    std::cout << "C = " << sampleC.a << ", " << sampleC.b << "\n";

    return 0;
}