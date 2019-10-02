#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    std::ifstream myfile;
    std::string myString;
    //std::cout << "bla" << std::endl;
    int validcount = 0;
    myfile.open("C:/Projects/Advent/Password_a/input.txt");
    //std::cout << "bla2" << std::endl;
    int line = 0;
    while (std::getline(myfile, myString))
    {
//        std::cout << "in while" <<std::endl;
//         std::getline(myfile, myString);

         line++;
//        std::cout << "line: " << line << "- ";
//        std::cout << "after";
//        std::cout << myString << std::endl;
        int wordcount = 0;
        wordcount = std::count(myString.begin(),myString.end(), ' ');
        int arraylength = wordcount + 1;
//        std::cout << "array: " << arraylength << std::endl;
        std::string myArray[arraylength];
        std::string word = "";
        int index = 0;
        for (auto x : myString)
        {
            if ( x == ' ' )
            {
                myArray[index] = word;
                index++;
                word = "";
            }
            else
            {
                word = word + x;
            }
        }
        myArray[index] = word;
        bool valid = true;
        for (int i = 0; i < arraylength-1 ; i++)
        {
            for(int j = i + 1; j < arraylength; j++)
            {
//                std::cout << "line=" << line << " i=" << i << " j= " << j << std::endl;
                std::cout << myArray[i] << " " << myArray[j] << std::endl;
                std::sort(myArray[i].begin(), myArray[i].end());
                std::sort(myArray[j].begin(), myArray[j].end());
                if (myArray[i] == myArray[j])
                {
                    valid = false;
//                    std::cout << "line nok " << line << std::endl;
                    i = arraylength;
                    break;
                }
            }
        }
        if(valid == true)
        {
            validcount++;
//            std::cout << validcount << std::endl;
        }
    }
    std::cout << validcount;
    myfile.close();

    return 0;
}
