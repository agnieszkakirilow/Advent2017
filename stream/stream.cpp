#include<fstream>
#include "stream.hpp"

void countChars(std::fstream &myfile)
{
    myfile.open("C:/Projects/Advent/stream/stream.txt");
    char ch;
    while(myfile)
    {
        myfile.get(ch);
        charNumber++;
    }
    myfile.close();
}
 void readIntoBuffer(std::fstream &myfile)
 {
     myfile.open("C:/Projects/Advent/stream/stream.txt");
     char ch;
     while(myfile)
     {
         myfile.get(ch);
         buffer += ch;
     }
     myfile.close();
 }

 void eraseExclamations()
 {
     for(int i = 0; i < buffer.length(); i++)
     {
         if( buffer[i] == exclValue)
         {
             //std::cout << "i=" << i << " " << "l" << buffer.length();
             buffer.erase(i,2);
             i--;
//             for(int i = 0; i < 100; i++)
//             {
//                 std::cout << buffer[i];
//             }
//             std::cout << std::endl;
         }
         count++;
     }
 }

 void eraseGarbage()
 {
     int openTrashIndex;
     bool closeFound = false;
     for(int i = 1; i < buffer.length(); i++)
    {
        if( buffer[i] == openTrash)
        {
            std::cout << "i=" << i;
            openTrashIndex = i;
            i++;
            while(closeFound == false)
            {
                if(buffer[i] == closeTrash)
                {
                    closeFound = true;
                }
                i++;
            }
            closeFound = false;
            std::cout << "close" << i << std::endl;
            buffer.erase(openTrashIndex, (i - openTrashIndex));
            garbageCount += (i - openTrashIndex -2);
            i = openTrashIndex;
            for(int i = 0; i < 100; i++)
            {
                 std::cout << buffer[i];
            }
            std::cout << std::endl;
        }
    }
 }

 void countScore()
 {
     for(auto x: buffer)
     {
         if(x == openGroup)
         {
             groupLevel++;
         }
         if(x == closeGroup)
         {
             score +=groupLevel;
             groupLevel--;
         }
     }
 }
