#include <iostream>
#include "diskdefragmentation.cpp"


int main()
{
    addToString();
    fillArray(hashArr);
    loopStr(0);
    createDenseHash(hashArr, denseHashArr);
    countBits(denseHashArr);
//    for(int n = 0; n < DISKSIZE; n++)
//    {
//        std::cout << "n=" << n << "   ";
//        fillArray(hashArr);
//        loopStr(n);
//        createDenseHash(hashArr, denseHashArr);
//        countBits(denseHashArr);
//        current = 0;
//        skip = 0;
//        std::cout << "count=" << count << std::endl;
//    }
    std::cout << "count" << count << "   " << skip << std::endl;
    printArray(hashArr);
    return 0;
}
