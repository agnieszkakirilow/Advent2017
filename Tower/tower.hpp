#include <fstream>
#include <array>
#include <string>

#ifndef TOWER_HPP
#define TOWER_HPP
std::ifstream myfile;
const int arraySize = 1089;
std::string buffer = "";
std::array<std::string, arraySize> myArray;
void readFromFile(std::ifstream file);
#endif // TOWER_HPP
