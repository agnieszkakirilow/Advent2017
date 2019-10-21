
#ifndef STREAM_HPP
#define STREAM_HPP

const unsigned int SIZE = 30842;
int exclValue = 33;
int openTrash = 60;
int closeTrash = 62;
int charNumber = 0;
int count = 0;
int openGroup = 123;
int closeGroup = 125;
int score = 0;
int groupLevel = 0;
int garbageCount = 0;

std::fstream myfile;
std::string buffer;

void countChars(std::ifstream &myfile);
void readIntoBuffer(std::fstream &myfile);
void eraseExclamations();
void eraseGarbage();
void countScore();
#endif // STREAM_HPP
