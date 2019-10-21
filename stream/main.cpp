#include <iostream>
#include "stream.cpp"

int main()
{
    countChars(myfile);
    std::cout << "Chars in buffer:" << charNumber << std::endl;
    readIntoBuffer(myfile);
    for(int i = 0; i < 100; i++)
    {
        std::cout << buffer[i];
    }
    std::cout << std::endl;
    std::cout << "length" << buffer.length() << std::endl;
    eraseExclamations();
    std::cout << "count" << count << std::endl;
    std::cout << "length" << buffer.length() << std::endl;
    //std::cout << buffer << std::endl;
    for(int i = 0; i < 100; i++)
    {
        std::cout << buffer[i];
    }
    eraseGarbage();
    std::cout << buffer <<std::endl;
    countScore();
    std::cout << "Score=" << score << std::endl;
    std::cout << "Garbage=" << garbageCount << std::endl;

    return 0;
}


