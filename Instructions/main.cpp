#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int line = 0;
    std::ifstream myfile;
    std::string buffer;
    myfile.open("C:/Projects/Advent/Instructions/instr.txt");
    while (getline(myfile, buffer))
    {
        line++;
    }
    myfile.close();
    //std::cout << "line=" << line << std::endl;
    int myTable[line];
    myfile.open("C:/Projects/Advent/Instructions/instr.txt");
    int i = 0;
    int x = 0;
    while (myfile >> x)
    {
        myTable[i] = x;
        //std::cout << "i=" << i << "value=" << myTable[i] << std::endl;
        i++;
    }
    int rangeDown = 0;
    int rangeUp = line - 1;
    int position = 0;
    int number = 0;
    int oldPosition = 0;
    int offset = 3;
    while ( (position >= rangeDown) && (position <= rangeUp) )
    {
        oldPosition = position;
        position = position + myTable[position];
        if ( myTable[oldPosition] < offset)
        {
            myTable[oldPosition]++;
        }
        else
        {
            myTable[oldPosition]--;
        }
        number++;
        //std::cout << "pos=" << position << "    old=" << oldPosition << "   myTab=" << myTable[position] << "   myTanOld=" << myTable[oldPosition] << " num=" << number << std::endl;
    }
    std::cout << "number=" << number << std::endl;
    return 0;
}
