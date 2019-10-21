#include<iostream>
#include <string>
#include <algorithm>
#include "digitalplumber.hpp"

void parse(std::ifstream &myfile)
{
    myfile.open("C:/Projects/Advent/digitalPlumber/input.txt");
    std::string buffer;
    std::array<std::string, ARRSIZE> arr;
    int i = 0;
    while (std::getline(myfile, buffer))
    {
        eraseChar(comma,commaNum, buffer );
        eraseChar(bracket, bracketNum, buffer);
        //std::cout << std::endl;
        //std::cout << "BufAf;" << buffer;
        int arrSi = lineIntoArr(buffer, arr);
        //std::cout << "Buf=" << buffer << " size=" << arrSi << " " ;
        progArray[i].name = i;
        progArray[i].connToCheck = arrSi;
        //std::cout << progArray[i].name << ": ";
        for(int j = 0; j < arrSi; j++ )
        {
            progArray[i].connectorsArr[j] = stoi(arr[j+1]);
            //std::cout << "i=" << i << " j=" << j << " V=" << progArray[i].connectorsArr[j] << " ";
        }
        i++;
        //std::cout << std::endl;

    }
    myfile.close();
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

int lineIntoArr(std::string my, std::array<std::string, ARRSIZE> &arr)
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
    return i;
}

void valueForConnections()
{
    for(auto x: connections)
    {
        x = -1;
    }
}
bool isUnique(int number)
{
    bool result = true;
    for(int i = 0; connections[i] != -1; i++)
    {
        if(connections[i] == number)
        {
            result = false;
            break;
        }
    }
    return result;
}

void putConnections(int index)
{
    connections[0] = index;
    int j = 1;
    int k = index;
    //std::cout << "k=" << k << std::endl;
    while(progArray[k].connToCheck)
    {
        if(isUnique(progArray[k].connectorsArr[progArray[k].indexToStart]))
        {
            connections[j] = progArray[k].connectorsArr[progArray[k].indexToStart];
            //std::cout << "j=" << j << " conn=" << connections[j] << std::endl;
            progArray[k].connToCheck--;
            progArray[k].indexToStart++;
            k = connections[j];
            j++;
        }
        else
        {
            progArray[k].connToCheck--;
            progArray[k].indexToStart++;
        }
        if(progArray[k].connToCheck == 0)
        {
            for(int i = 0; i < j; i++)
            {
                if(progArray[connections[i]].connToCheck > 0)
                {
                    k=connections[i];
                    break;
                }
            }
        }
    }
    if(!count)
    {
        std::cout << "Answer: " << j << std::endl;
    }

    count++;
}
