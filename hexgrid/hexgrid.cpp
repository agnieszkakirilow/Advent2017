#include <fstream>
#include "hexgrid.hpp"

void countSize()
{
    myfile.open("C:/Projects/Advent/hexgrid/input.txt");
    char ch;
    while(myfile)
    {
         myfile.get(ch);
         if(ch == 44)
         {
             count++;
         }
    }
    count++;
    myfile.close();
}

void readIntoArray(std::ifstream &myfile)
{
    myfile.open("C:/Projects/Advent/hexgrid/input.txt");
    std::string buffer;
    int i = 0;
    while(std::getline(myfile, buffer, ',' ))
    {
        directionsArray[i] = buffer;
        //std::cout << directionsArray[i] << "   " << i << std::endl;
        i++;
    }
    myfile.close();
}

void useDirections()
{
    for(int i = 0; i < SIZE; i++)
    {
        if(directionsArray[i] == "n")
        {
            x = x-1;
        }
        else if(directionsArray[i] == "ne")
        {
            y = y+1;
        }
        else if(directionsArray[i] == "se")
        {
            x = x+1;
            y = y+1;
        }
        else if(directionsArray[i] == "s")
        {
            x = x+1;
        }
        else if(directionsArray[i] == "sw")
        {
            y = y-1;
        }
        else
        {
            x = x-1;
            y = y-1;
        }
        if(abs(y) > max)
        {
            max = abs(y);
        }
    }
    std::cout << x;
}

void distance()
{
    std::cout << "distance=" << abs(y) << std::endl;
}
