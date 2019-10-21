#include <string>
#include <fstream>
#include "packetscanners.hpp"

void readIntoArray(std::ifstream &file)
{
    std::string buffer;
    int i = 0;
    file.open("C:/Projects/Advent/packetscanners/input.txt");
    eraseChar(colon, colonNr, buffer);
    while(std::getline(file, buffer))
    {
        std::array<std::string, buffArrSize> bufArr;
        //char space = ' ';
        lineIntoString(buffer, bufArr);
        i = stoi(bufArr[0]);
        arr[i].range = stoi(bufArr[1]);
        arr[i].movesToMake = arr[i].range - 1;
        arr[i].mtmMobile = arr[i].range - 1;
        //std::cout << "i=" << i << "r=" << arr[i].range << std::endl;
        i++;
    }
    file.close();
}

void Scanner ::scannerMove()
{
    if(moveUp)
    {
        rangePos++;
        mtmMobile--;
        if(!mtmMobile)
        {
            moveUp = false;
            mtmMobile = movesToMake;
        }
    }
    else
    {
        rangePos--;
        mtmMobile--;
        if(!mtmMobile)
        {
            moveUp = true;
            mtmMobile = movesToMake;
        }
    }
}

void eraseChar(char ch, int number, std::string &str)
{
    for(int i = 0; i < str.length(); i++)
        {
            if( str[i] == ch)
            {
                str.erase(i,number);
                //std::cout << "string=" << str << std::endl;
            }
        }
}

void lineIntoString(std::string my, std::array<std::string, buffArrSize> &arr)
{
    std::string word = "";
    int i = 0;
    for (auto x: my)
    {
        if ( x == ' ' )
        {
            arr[i] = word;
            i++;
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    arr[i] = word;
}

bool isCaught(int dep)
{
    bool result = false;
    if(arr[dep].rangePos == 0 && arr[dep].range != 0)
    {
        result = true;
    }
    return result;
}

void crossFirewall()
{
    for(int i = 0 - delay; i < arrDepth; i++)
    {
        if( isCaught(i))
        {
            severity += i * arr[i].range;
        }
        for(int j = 0; j < arrDepth; j++)
        {
            if(arr[j].range != 0)
            {
                arr[j].scannerMove();
                std::cout << "j=" << j << "i=" << i << "   "
                          << arr[j].range << "   "
                          << arr[j].rangePos << "   "
                          << arr[j].movesToMake << "   "
                          << arr[j].moveUp << std::endl;
            }
        }
    }
}

void crossFirewallNotCaught(int del)
{
    caught = true;
    for(int i = - del; i < arrDepth; i++)
    {
        if( i >= 0 && isCaught(i))
        {
            std::cout << "i=" << i << std::endl;
            caught = false;
            break;
        }
        for(int j = 0; j < arrDepth; j++)
        {
            if(arr[j].range != 0)
            {
                arr[j].scannerMove();
//                std::cout << "j=" << j << "   "
//                          << arr[j].range << "   "
//                          << arr[j].rangePos << "   "
//                          << arr[j].movesToMake << "   "
//                          << arr[j].moveUp << std::endl;
            }
        }
    }
}

void clearPositions()
{
    for(int i = 0; i < arrDepth; i++)
    {
        arr[i].rangePos = 0;
        arr[i].mtmMobile = arr[i].movesToMake;
        arr[i].moveUp = true;

    }
}


