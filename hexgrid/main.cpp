#include <iostream>
#include "hexgrid.cpp"

int main()
{
    countSize();
    std::cout << "count=" << count << std::endl;
    readIntoArray(myfile);
    useDirections();
    distance();
    std::cout << "max=" << max << std::endl;
    return 0;
}
