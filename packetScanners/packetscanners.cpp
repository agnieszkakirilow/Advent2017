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
        arr[i].movesToZero = (arr[i].range *2) - 2;
        //std::cout << "i=" << i << "r=" << arr[i].range << std::endl;
        i++;
    }
    file.close();
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

bool isCaughtDel(int dep, int del)
{
    bool result = false;
    if((dep + del) % arr[dep].movesToZero == 0)
    {
        result = true;
    }
    return result;
}
void crossFirewall()
{
    for(int i = 0; i < arrDepth; i++)
    {
        if( arr[i].range != 0 && isCaughtDel(i, 0))
        {
            severity += i * arr[i].range;
            //std::cout << "i=" << i << std::endl;
        }
    }
}

void crossFirewallNotCaught(int del)
{
    caught = true;
    for(int i = 0; i < (arrDepth); i++)
    {
        if( arr[i].range != 0 && isCaughtDel(i, del))
        {
            //std::cout << "i=" << i << std::endl;
            caught = false;
            break;
        }
    }
}




