#include<fstream>
#include <vector>
#include <cstdlib>
#include "jumpinstructions.hpp"

int lineCount(std::ifstream &myfile)
{
    myfile.open("C:/Projects/Advent/jumpInstructions/input.txt");
    int result = 0;
    while (std::getline(myfile, lineBuffer))
    {
        line++;
    }
    myfile.close();
    return result;
}

void lineIntoString(std::string my, std::array<std::string, SIZE> &arr)
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

void parseFile(std::ifstream &myfile)
{
    myfile.open("C:/Projects/Advent/jumpinstructions/input.txt");
    int i = 0;
    std::string stringBuffer;
    std::array<std::string, SIZE> arr;
    while (std::getline(myfile, stringBuffer))
    {
        lineIntoString(stringBuffer, arr);
        strArray[i].regToChange = arr[0];
        strArray[i].incOrDec = arr[1];
        strArray[i].modifierStr = arr[2];
        strArray[i].regName = arr[4];
        strArray[i].higherOrLower = arr[5];
        strArray[i].numberToCompareStr = arr[6];
        strArray[i].modifier = std::stoi(strArray[i].modifierStr);
        strArray[i].numberToCompare = std::stoi(strArray[i].numberToCompareStr);
        i++;
    }
    myfile.close();
}

void printStrArr()
{
    for(int i = 0; i < MAX; i++)
    {
        std::cout << strArray[i].regToChange      << "  " <<
                     strArray[i].incOrDec           << "  " <<
                     strArray[i].modifierStr        << "  " <<
                     strArray[i].regName            << "  " <<
                     strArray[i].higherOrLower      << "  " <<
                     strArray[i].numberToCompareStr << "  " <<
                     strArray[i].regValue           << "  " <<
                     strArray[i].modifier           << "  " <<
                     strArray[i].numberToCompare    << "  " <<std::endl;
    }
}

bool isUnique(int index, std::string name)
{
    bool result = true;
    for(int i = 0; i < index; i++)
    {
        if(regArray[i].name == name)
        {
            result = false;
            break;
        }
    }
    return result;
}

void constructReg()
{
    int regArrIndex = 0;
    for(int i = 0; i < MAX; i++)
    {
        if(isUnique(regArrIndex, strArray[i].regToChange))
        {
            regArray[regArrIndex].name = strArray[i].regToChange;
            regArray[regArrIndex].value = 0;
            //std::cout << regArrIndex << "   " << regArray[regArrIndex].name << std::endl;
            regArrIndex++;

        }
        if(isUnique(regArrIndex, strArray[i].regName))
        {
            regArray[regArrIndex].name = strArray[i].regName;
            regArray[regArrIndex].value = 0;
            //std::cout << regArrIndex << "   " << regArray[regArrIndex].name << std::endl;
            regArrIndex++;

        }
    }
    regArrSize = regArrIndex;
}

int mapName(std::string name)
{
    int result = -1;
    for(int i = 0; i < regArrSize; i++)
    {
        if(regArray[i].name == name)
        {
            result = i;
            break;
        }
    }
    return result;
}

bool expression(std::string h, int a, int b)
{
    bool result = false;

    if (h == "==")
    {
        if(a==b)
        {
            result = true;
        }
    }
    if (h == "!=")
    {
        if(a!=b)
        {
            result = true;
        }
    }
    if (h == ">")
    {
        if(a>b)
        {
            result = true;
        }
    }
    if (h == ">=")
    {
        if(a>=b)
        {
            result = true;
        }
    }
    if (h == "<")
    {
        if(a<b)
        {
            result = true;
        }
    }
    if (h == "<=")
    {
        if(a<=b)
        {
            result = true;
        }
    }
    return result;
}

void performInstruction()
{
    for(int i = 0; i < MAX; i++)
    {
        int indexRegToChange = mapName(strArray[i].regToChange);
        //std::cout << "indexRegToIncr" << indexRegToIncr << "   ";
        int indexRegName = mapName(strArray[i].regName);
        //std::cout << "indexRegName" << indexRegName << std::endl;
        //std::cout << "expression="  << expression(strArray[i].higherOrLower, regArray[indexRegName].value, strArray[i].numberToCompare) << "   "
//                                    << strArray[i].modifierStr << "   "
//                                    << strArray[indexRegName].regValue << "   "
//                                    << strArray[i].numberToCompare << "   "
//                                    << strArray[i].incOrDec << std::endl;
        if(expression(strArray[i].higherOrLower, regArray[indexRegName].value, strArray[i].numberToCompare))
        {
            if(strArray[i].incOrDec == "inc")
            {
                regArray[indexRegToChange].value += strArray[i].modifier;
                //std::cout << "i=" << indexRegToChange << "in" << indexRegName << "value=" << regArray[indexRegToChange].value << std::endl;
                if(regArray[indexRegToChange].value > maxEver)
                {
                    maxEver = regArray[indexRegToChange].value;
                }
            }
            else
            {
                regArray[indexRegToChange].value -=strArray[i].modifier;
                //std::cout << "i=" << indexRegToChange << "in" << indexRegName << "value=" << regArray[indexRegToChange].value << std::endl;
                if(regArray[indexRegToChange].value > maxEver)
                {
                    maxEver = regArray[indexRegToChange].value;
                }
            }
        }
    }
}

int findMax()
{
    int max = regArray[0].value;
    for(int i = 1; i < regArrSize; i++)
    {
        if(regArray[i].value > max)
        {
            max = regArray[i].value;
        }
    }
    return max;
}

