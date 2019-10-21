#include <iostream>
#include "packetscanners.cpp"

int main()
{
    readIntoArray(file);
    crossFirewall();
    std::cout << severity << std::endl;
    //crossFirewallNotCaught(1);
    while( !caught )
    {
        //std::cout << "del=" << delay << std::endl;
        crossFirewallNotCaught(delay);
        delay++;
        //std::cout << "caught=" << caught << std::endl;
    }
    std::cout << "delay=" << delay << std::endl;
    return 0;
}
