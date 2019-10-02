#include <algorithm>
#include "tower.hpp"

void readFromFile(std::ifstream file)
{
    file.open("C:/Projects/Advent/Tower/input.txt");
    while (std::getline(file, buffer))
    {
        buffer.erase(std::remove_if(buffer.begin(), buffer.end(), isspace), buffer.end());
        std::cout << buffer << std::endl;
        int delBracketStart = buffer.find("(");
        std::string name = buffer.substr(0, delBracketStart);
        std::cout << name << std::endl;
        int delBracketEnd = buffer.find(")");
        int weight = stoi(buffer.substr((delBracketStart + 1, delBracketEnd));
        std::cout << weight << std::endl;

    }

}
