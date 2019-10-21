#include <array>
#include <fstream>

#ifndef DIGITALPLUMBER_HPP
#define DIGITALPLUMBER_HPP

const int SIZE = 2000;
const int ARRSIZE = 10;

std::ifstream myfile;
struct Connections
{
    int name;
    std::array<int, ARRSIZE> connectorsArr;
    int connToCheck;
    int indexToStart = 0;
};
std::array<struct Connections, SIZE > progArray;
char comma = ',';
int commaNum = 1;
int bracketNum = 4;
char bracket = '<';
void parse(std::ifstream &myfile);
void eraseChar(char ch, int number, std::string &str);
int lineIntoArr(std::string my, std::array<std::string, ARRSIZE> &arr);
std::array<int, SIZE> connections;
int count = 0;
bool isUnique(int number);
void putConnections(int index);
#endif // DIGITALPLUMBER_HPP
