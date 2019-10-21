#include<string>
#include <array>
#include <iostream>

#ifndef JUMPINSTRUCTIONS_HPP
#define JUMPINSTRUCTIONS_HPP

const int MAX = 1000;
const int SIZE = 7;

struct Instr
{
  std::string regToChange;//[0]
  std::string incOrDec;//[1]
  std::string modifierStr;//[2]
  int modifier;
  std::string regName;//[4]
  std::string higherOrLower;//[5]
  std::string numberToCompareStr;//[6]
  int numberToCompare;
  int regValue = 0;

};

struct Reg
{
  std::string name = "";
  int value;
};

std::string lineBuffer;
std::ifstream myfile;
int line;
std::array<struct Instr, MAX> strArray;
std::array<struct Reg, MAX> regArray;
int regArrSize;
int maxEver = 0;

int lineCount(std::ifstream &myfile);
void parseFile(std::ifstream &myfile);
void lineIntoString(std::string my, std::array<std::string, SIZE> &arr);
void printStrArr();
void constructReg();
void performInstruction();
bool isUnique(int index, std::string name);
int mapName(std::string name);
bool expression(std::string h, int a, int b);
int findMax();
#endif // JUMPINSTRUCTIONS_HPP
