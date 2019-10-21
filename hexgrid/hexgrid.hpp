#include <array>
#ifndef HEXGRID_HPP
#define HEXGRID_HPP

const int SIZE = 8223;
std::array<std::string, SIZE> directionsArray;
std::ifstream myfile;
int count;
int max = 0;
int x = 0;
int y = 0;
void countSize();
void readIntoArray(std::ifstream &myfile);
void useDirections();
void distance();
#endif // HEXGRID_HPP
