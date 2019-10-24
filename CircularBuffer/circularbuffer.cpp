#include<fstream>
#include<array>
#include<string>
#include "circularbuffer.hpp"



void readIntoArray(std::string &filePath, std::array<int, LENGTHSIZE> &arr)
{
    myfile.open(filePath);
    int i = 0;
    std::string stringBuffer;
    while(std::getline(myfile, stringBuffer, ',' ))
    {
        arr[i] = std::stoi(stringBuffer);
        //std::cout << arr[i] << "   " << i << std::endl;
        i++;
    }
    myfile.close();
}

void fillArray(std::array<int, SIZE> &arr)
{
    for(int i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
}

void printArray(std::array<int, SIZE> &arr)
{
    for(auto x : arr)
    {
        std::cout << x << "   ";
    }
    std::cout << std::endl;
}

void perform(std::array<int, SIZE> &arr, std::array<int, LENGTHSIZE> &lArray)
{
    int length = 0;
    std::array<int, SIZE> tmparr;
    for(int w = 0; w < LENGTHSIZE; w++)
    {
        length = lArray[w];
        //std::cout << "length" << length << "cur" << current << " ";
        if((current+length) <= END)
        {
            //std::cout << "if" << std::endl;
            int j = 0;
            for(int i = current; i < (current + length/2); i++)
            {
                int tmp = arr[i];
                arr[i] = arr[current+length-1-j];
                arr[current+length-1-j] = tmp;
                //std::cout << "tmp=" << tmp << "arr=" << arr[i] << "i" << i << "   ";
                j++;
            }
            //std::cout << std::endl;
        }
        else
        {
            int j = 0;
            int k = current;
            //std::cout << "else" << std::endl;
            for(int i = 0; i < length; i++)
            {
                tmparr[j] = arr[k];
                //std::cout << "j" << j << "k" << k << "arr" << arr[k] << "   ";
                j++;
                if(k == END)
                {
                    k = 0;
                }
                else
                {
                    k++;
                }
            }
            for(int i = 0; i < length/2; i++)
            {
                int tmp = tmparr[i];
                tmparr[i] = tmparr[length-1-i];
                tmparr[length-1-i] = tmp;
            }
            int l = 0;
            int m = current;
            for(int i = 0; i < length; i++)
            {
                arr[m] = tmparr[l];
                //std::cout << "m" << m << "l" << l << "arr" << arr[m] << "   ";
                l++;
                if(m == END)
                {
                    m = 0;
                }
                else
                {
                    m++;
                }
            }
        }
        int newcurr = current + length + skip;
        if(newcurr <= END)
        {
            current = current + length + skip;
        }
        else
        {
            int j = 0;
            for(int i = 0; i < newcurr; i++)
            {
                if (j == END)
                {
                    j = 0;
                }
                else
                {

                    j++;
                }
            }
            current = j;
        }
        skip++;
        //printArray(arr);
    }
}

void multiplyFirstTwo()
{
    int result = (buffer[0])*(buffer[1]);
    std::cout << "result=" << result << std::endl;
}

void readStringIntoArray(std::string &filePath, std::array<int, ASCIISIZE> &arr)
{
    myfile.open(filePath);
    std::string stringBuffer;
    std::getline(myfile, stringBuffer);
    for(int i = 0; i < (ASCIISIZE - NUMTOADDSIZE); i++)
    {
        arr[i] = stringBuffer.at(i);//extracts characters from a given string
        std::cout << "s=" << stringBuffer.at(i) << "as=" << arr[i] << "   ";
    }
    int j = 0;
    for(int i = (ASCIISIZE-NUMTOADDSIZE); i < ASCIISIZE; i++)
    {
        arr[i] = NumToAdd[j];
        //std::cout << "NumToAdd=" << arr[i] << "   ";
        j++;
    }
    std::cout << std::endl;
    myfile.close();
}

void performAsciiArray(std::array<int, SIZE> &arr, std::array<int, ASCIISIZE> &lArray)
{
    int length = 0;
    std::array<int, SIZE> tmparr;
    for(int w = 0; w < ASCIISIZE; w++)
    {
        length = lArray[w];
        //std::cout << "length" << length << "cur" << current << " ";
        if((current+length) <= END)
        {
            //std::cout << "if" << std::endl;
            int j = 0;
            for(int i = current; i < (current + length/2); i++)
            {
                int tmp = arr[i];
                arr[i] = arr[current+length-1-j];
                arr[current+length-1-j] = tmp;
                //std::cout << "tmp=" << tmp << "arr=" << arr[i] << "i" << i << "   ";
                j++;
            }
            //std::cout << std::endl;
        }
        else
        {
            int j = 0;
            int k = current;
            //std::cout << "else" << std::endl;
            for(int i = 0; i < length; i++)
            {
                tmparr[j] = arr[k];
                //std::cout << "j" << j << "k" << k << "arr" << arr[k] << "   ";
                j++;
                if(k == END)
                {
                    k = 0;
                }
                else
                {
                    k++;
                }
            }
            for(int i = 0; i < length/2; i++)
            {
                int tmp = tmparr[i];
                tmparr[i] = tmparr[length-1-i];
                tmparr[length-1-i] = tmp;
            }
            int l = 0;
            int m = current;
            for(int i = 0; i < length; i++)
            {
                arr[m] = tmparr[l];
                //std::cout << "m" << m << "l" << l << "arr" << arr[m] << "   ";
                l++;
                if(m == END)
                {
                    m = 0;
                }
                else
                {
                    m++;
                }
            }
        }
        int newcurr = current + length + skip;
        if(newcurr <= END)
        {
            current = current + length + skip;
        }
        else
        {
            int j = 0;
            for(int i = 0; i < newcurr; i++)
            {
                if (j == END)
                {
                    j = 0;
                }
                else
                {

                    j++;
                }
            }
            current = j;
        }
        skip++;
        //printArray(arr);
    }
}

void performInLoop()
{
    for(int index = 0; index < LOOPNR; index++)
    {
        performAsciiArray(asciiBuffer, AsciiArray);
    }
}

void createDenseHash(std::array<int, SIZE> &arr, std::array<int, LENGTHSIZE> &lArray)
{
    int number = 0;;
    for(int i = 0; i < LENGTHSIZE; i++)
    {
        number = arr[i*LENGTHSIZE]^arr[(i*LENGTHSIZE) + 1];
        for(int j = 2; j < LENGTHSIZE; j++)
        {
            number = number^arr[j+(i*LENGTHSIZE)];
            //std::cout << "j" << j+(i*LENGTHSIZE)  << "   ";
        }
        lArray[i] = number;
        //std::cout << number << "   ";
    }
    //std::cout << std::endl;
}

//void writeIntoString(char* str)
//{
//    for(int i = 0; i < ASCIISIZE; i++)
//    {
//        str+=denseHash[i];
//        //std::cout << str << " ";
//    }
//}
//d0 67 d3 f1 4d 7 e0 9c 2e 73 8 c3 92 66 5 c4
