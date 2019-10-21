#include <iostream>
#include "digitalplumber.cpp"

int main()
{
    parse(myfile);
    for(int i = 0; i < SIZE; i++)
    {
        if(progArray[i].connToCheck)
        {
            putConnections(i);
        }
    }

    std::cout << "Count: " << count << std::endl;
    return 0;
}
