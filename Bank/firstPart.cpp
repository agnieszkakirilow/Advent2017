#include <iostream>
#include <fstream>
#include <string>
#include <array>

int main()
{
    std::ifstream myfile;
    std::string buffer;
    bool found = 0;
    const int bankNumber = 16;
    int x = 0;
    int i = 0;
    const unsigned long int capacity = 32000;
    std::array<std::array<int, bankNumber>, capacity> Matrix {};//initialised with zeroes
    std::array<int, bankNumber> originalArray {};
    std::array<int, bankNumber> changeableArray {};
    int loopCount = 0;
    myfile.open("C:/Projects/Advent/Bank/resource.txt");
    while (myfile >> x)
    {
        originalArray[i] = x;
        //std::cout << "i=" << i << "value=" << originalArray[i] << std::endl;
        i++;
    }
    changeableArray = originalArray;
    int lastIndex = bankNumber - 1;
    int firstIndex = 0;
    Matrix[0] = originalArray;
    while ( !found )
    {
        int max = originalArray[0];
        for (auto x : originalArray)
        {
            if (x > max)
            {
                max = x;
            }
        }
        std::cout << "max=" << max << std::endl;
        int bankMax = 0;
        for (int i = 0; i < bankNumber; i++)
        {
            if (originalArray[i] == max)
            {
                bankMax = i;
                break;
            }
        }
        std::cout << "bankMax=" << bankMax << std::endl;//index of first max element
        changeableArray[bankMax] = 0;
        int j = 0;
        if (bankMax != lastIndex)
        {
            j = bankMax + 1;
        }
        for (int i = originalArray[bankMax]; i > 0; i--)
        {
            //std::cout << "i=" << i << " j=" << j << std::endl;
            changeableArray[j]++;
            //std::cout << "value=" << changeableArray[j] << std::endl;
            if ( j == lastIndex )
            {
                j = 0;
            }
            else
            {
                j++;
            }
        }
//        for (auto x : changeableArray)
//        {
//            std::cout << x << " ";
//        }
        std::cout << std::endl;
        for (int i = 0; i <= loopCount; i++)
        {
            if(Matrix[i] == changeableArray)
            {
                found = 1;
                break;
            }

        }
        originalArray = changeableArray;

        loopCount++;
        Matrix[loopCount] = changeableArray;
//        for (int i = 0; i <= loopCount; i++)
//        {
//            for (int j = 0; j < bankNumber; j++)
//            {
//                std::cout << Matrix[i][j] << " ";
//            }
//            std::cout << std::endl;
//        }
        std::cout << "loopCount=" << loopCount << std::endl;
    }
    std::cout << "loopCount=" << loopCount;
    return 0;
}
