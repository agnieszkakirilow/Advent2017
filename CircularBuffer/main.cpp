#include <iostream>
#include "circularbuffer.cpp"




int main()
{

    readIntoArray(myfile, lengthArray);
    fillArray(buffer);
    fillArray(asciiBuffer);

//    for(auto x : lengthArray)
//    {
//        std::cout << x << "   ";
//    }
//    std::cout << std::endl;

    //perform(buffer, lengthArray);
    //printArray(buffer);
    //multiplyFirstTwo();

//    for(auto x : lengthArray)
//    {
//        std::cout << x << "   ";
//    }
//    std::cout << std::endl;

    readStringIntoArray(myfile, AsciiArray);
    performInLoop();
    createDenseHash(asciiBuffer, denseHash);

    for(auto x : denseHash)
    {
        if( x < 16 )
        {
            std::cout << "0" << std::hex << x;
        }
        else
        {
            std::cout << std::hex << x;
        }
    }
    std::cout << std::endl;

    writeIntoString(result);
    std::cout << result;

    return 0;
}
