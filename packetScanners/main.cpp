#include <iostream>
#include "packetscanners.cpp"

int main()
{
    readIntoArray(file);
//    crossFirewall();
//    std::cout << severity;
    while( !caught )
    {
        std::cout << "del=" << delay << std::endl;
        crossFirewallNotCaught(delay);
        delay++;
        clearPositions();
    }
    return 0;
}
