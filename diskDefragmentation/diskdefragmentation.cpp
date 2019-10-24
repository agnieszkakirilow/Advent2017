
#include "diskdefragmentation.hpp"
#include "../CircularBuffer/circularbuffer.hpp"
#include "../CircularBuffer/circularbuffer.cpp"

void addToString()
{
    for(int i = 0; i < DISKSIZE; i++)
    {
        inputArr[i] = input + std::to_string(i);
        //std::cout << inputArr[i] << std::endl;
    }
}

void performString(std::array<int, SIZE> &arr, std::string &str)
{
    int length = 0;
    //std::cout << str.length() << "=length" << std::endl;
    std::array<int, SIZE> tmparr;
    int z = 0;
    for(int w = 0; w < (str.length() + 5); w++)
    {
        length = str[w];
        if(w >= str.length())
        {
            length = NumToAdd[z];
            z++;
        }
        //std::cout << "length" << length <<std::endl;//<< "cur" << current << " ";
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
                k++;
                k = k%SIZE;
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
                m++;
                m = m%SIZE;
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
                j++;
                j = j%SIZE;
            }
            current = j;
        }
        skip++;
        //printArray(arr);
    }
}

void loopStr(int strIndex)
{
    for(int index = 0; index < LOOPNR; index++)
    {
        performString(hashArr, inputArr[strIndex]);
    }
    //std::cout << "str=" << inputArr[strIndex] << std::endl;
}

void countBits(std::array<int,LENGTHSIZE> &arr)
{
    for(int p = 0; p < LENGTHSIZE; p++)
    {
        for(int r = BITNR - 1; r >=0; r--)
        {
            if ((arr[p] >> r) & 1)
            {
                count++;
            }
            //std::cout << ((arr[p]>>r) & 1 ) << "   ";
        }
        //std::cout << std::endl;
    }
}
