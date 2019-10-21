#include <array>
#include <fstream>
#ifndef PACKETSCANNERS_HPP
#define PACKETSCANNERS_HPP
const int arrDepth = 97;
const int buffArrSize = 2;
char colon = ':';
int colonNr = 1;
int severity = 0;
struct Scanner
{
    int range = 0;
    int rangePos = 0;
    int movesToMake = 0;
    int mtmMobile = 0;
    bool moveUp = true;
    void scannerMove();
};
std::array<struct Scanner, arrDepth> arr;
std::ifstream file;
int delay = 0;
void readIntoArray(std::ifstream &file);
void eraseChar(char ch, int number, std::string &str);
void lineIntoString(std::string my, std::array<std::string, buffArrSize> &arr);
bool isCaught(int dep);
void crossFirewall();
void crossFirewallNotCaught(int del);
bool caught = false;
void clearPositions();
#endif // PACKETSCANNERS_HPP
