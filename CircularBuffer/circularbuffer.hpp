#include<array>
#ifndef CIRCULARBUFFER_HPP
#define CIRCULARBUFFER_HPP

const int SIZE = 256;
const int END = SIZE - 1;
const int LENGTHSIZE = 16;
const int ASCIISIZE = 55;
const int NUMTOADDSIZE = 5;
const int LOOPNR = 64;

int current = 0;
int skip = 0;

std::array<int, SIZE> buffer;
std::array<int, SIZE> asciiBuffer;
std::ifstream myfile;
std::array<int, LENGTHSIZE> lengthArray;
std::array<int, LENGTHSIZE> denseHash;

std::array<int, ASCIISIZE> AsciiArray;
std::array<int, NUMTOADDSIZE> NumToAdd = {17,31,73,47,23};
char result[32];

void readIntoArray(std::ifstream &myfile, std::array<int, LENGTHSIZE> &arr);
void fillArray(std::array<int, SIZE> &arr);
void printArray(std::array<int, SIZE> &arr);
void perform(std::array<int, SIZE> &arr, std::array<int, LENGTHSIZE> &lArray );
void multiplyFirstTwo();

void readStringIntoArray(std::ifstream &myfile, std::array<int, ASCIISIZE> &arr);
void performAsciiArray(std::array<int, SIZE> &arr, std::array<int, ASCIISIZE> &lArray);
void performInLoop();
void createDenseHash(std::array<int, SIZE> &arr, std::array<int, LENGTHSIZE> &lArray);
void writeIntoString(char *str);
#endif // CIRCULARBUFFER_HPP
