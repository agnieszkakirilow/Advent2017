#include <iostream>
#include "jumpinstructions.cpp"

using namespace std;

int main()
{
    lineCount(myfile);
    parseFile((myfile));
    constructReg();
    std::cout << regArrSize << std::endl;
    performInstruction();
    findMax();
    std::cout << "max=" << findMax() << std::endl;
//    for(int i = 0; i < regArrSize; i++)
//    {
//        std::cout << regArray[i].name << "   " << regArray[i].value << std::endl;
//    }
    //printStrArr();
    std::cout << "maxEver=" << maxEver << std::endl;
    return 0;
}
