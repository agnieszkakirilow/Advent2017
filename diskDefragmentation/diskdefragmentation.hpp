#include <string>
#include <array>
#include "../CircularBuffer/circularbuffer.hpp"

#ifndef DISKDEFRAGMENTATION_HPP
#define DISKDEFRAGMENTATION_HPP
const int DISKSIZE = 128;
const int BITNR = 8;
std::string input = "flqrgnkx-";
std::array<std::string, DISKSIZE> inputArr;
void addToString();
std::array<int, SIZE> hashArr;
void performString(std::array<int, SIZE> &arr, std::string &str);
void loopStr(int strIndex);
std::array<int, LENGTHSIZE> denseHashArr;
int count = 0;
void countBits(std::array<int,LENGTHSIZE> &arr);
#endif // DISKDEFRAGMENTATION_HPP
