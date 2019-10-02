#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <algorithm>
//#include "tower.cpp"
//#include "tower.hpp"

std::ifstream myfile;
const int arraySize = 1089;
std::string buffer = "";
std::array<std::string, arraySize> my;
void readFromFile(std::ifstream file);
bool isRoot = true;
int max = 0;
int rootIndex = 0;
int levelCount = 0;
struct Str
{
    std::string name;
    std::string parent = "root";
    int weight;
    bool isLeaf = false;
    int childrenArrSize;
    int index = 0;
    int parentIndex = -1;
    std::array<std::string, 10> childrenArr;
    std::array<int, 10> childrenIndexes;
};

std::array<struct Str, arraySize> nodesArr;
void insertNode(int index);
void findChildren(int index, std::array<int, 7> &Arr);
struct Node
{
    int indexNode;
    bool isLeaf = false;
    bool childrenFound = false;
    std::array<struct Node*,7> NodePtrs;
};
struct Node *root = NULL;

int main()
{
    int nodesArrCount = 0;
    myfile.open("C:/Projects/Advent/Tower/input.txt");
    while (std::getline(myfile, buffer))
    {
        //std::cout << "count=" << nodesArrCount << std::endl;
        buffer.erase(std::remove_if(buffer.begin(), buffer.end(), isspace), buffer.end());
        //std::cout << buffer << std::endl;
        int delBracketStart = buffer.find("(");
        //std::cout << delBracketStart << std::endl;
        nodesArr[nodesArrCount].name = buffer.substr(0, delBracketStart);
        //std::cout << nodesArr[nodesArrCount].name << std::endl;
        int delBracketEnd = buffer.find(")");
        //std::cout << delBracketEnd << std::endl;
        nodesArr[nodesArrCount].weight = std::stoi(buffer.substr(delBracketStart + 1, delBracketEnd - delBracketStart -1));
        //std::cout << nodesArr[nodesArrCount].weight << std::endl;
        nodesArr[nodesArrCount].index = nodesArrCount;
        int wordcount = 0;
        wordcount = std::count(buffer.begin(),buffer.end(), ',');
        nodesArr[nodesArrCount].childrenArrSize = wordcount + 1;
        //std::cout << "wordcount: " << wordcount << std::endl;
        std::string word = "";
        if ((wordcount + 1) > max)
        {
            max = wordcount + 1;
        }
        if ( wordcount != 0 )
        {
            int index = 0;
            for (auto x : buffer.substr(delBracketEnd + 3))
            {
                if ( x == ',' )
                {
                    nodesArr[nodesArrCount].childrenArr[index] = word;
                    index++;
                    word = "";
                }
                else
                {
                    word = word + x;
                }
            }
            nodesArr[nodesArrCount].childrenArr[index] = word;
        }
        else
        {
            nodesArr[nodesArrCount].isLeaf == true;
        }
//        for (int i = 0; i < nodesArr[nodesArrCount].childrenArrSize; i++)
//        {
//            std::cout << nodesArr[nodesArrCount].childrenArr[i] << std::endl;
//        }
        nodesArrCount++;
    }

    //std::cout << "max=" << max << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        for (int k = 0; k < arraySize; k++)
        {
            for (int j = 0; j < nodesArr[k].childrenArrSize; j++)
            {
                //std::cout << "i=" << i << "k=" << k << "j=" << j << " " << nodesArr[k].childrenArr[j] << std::endl;
                if ( nodesArr[k].childrenArr[j] == nodesArr[i].name)
                {
                    nodesArr[i].parent = nodesArr[k].name;
                    nodesArr[i].parentIndex = k;
                    //std::cout << "i=" << i << "k=" << k << "j=" << j << " " << nodesArr[k].childrenArr[j] << std::endl;
                    std::cout <<  "parent=" << nodesArr[i].parent << "index=" << k << std::endl;
                    continue;
                }
            }
        }
        //std::cout << "i=" << i << " parent=" << nodesArr[i].parent << std::endl;
    }
    for (int i = 0; i < arraySize; i++)
    {
        if ( nodesArr[i].parent == "root")
        {
            std::cout << "i=" << i << " root name is " << nodesArr[i].name << "childrenNr=" << nodesArr[i].childrenArrSize << std::endl;
            rootIndex = i;
            break;
        }
    }

    std::array<int, 7> Level0 = {-1,-1,-1,-1,-1,-1,-1};
    findChildren(504, Level0);
    for(auto x : Level0)
    {
        std::cout << x << "   ";
    }
    std::cout << std::endl;

    return 0;
}

void findChildren(int index, std::array<int, 7> &Arr)
{
    int j = 0;
    for (int i = 0; i < arraySize; i++)
    {
        if(nodesArr[i].parentIndex == index)
        {
            Arr[j] = i;
            std::cout << "index=" << i << "j=" << j << "addr=" << &nodesArr[i] << std::endl;
            j++;
        }
    }
}

//void insertNode(int index)
//{
//    struct Node *t, *parent;//create tmp node, it gets mem allocation, p=parent
//    t = (Node*)malloc(sizeof(struct Node));//node is created
//    t->indexNode = index;
//    t->isLeaf = nodesArr[index].isLeaf;
//    for(int i = 0; i < 7; i++)
//    {
//        t->NodePtrs[i] = NULL;
//    }

//    parent = root;

//    if ( root = NULL )//tree doesn't have any nodes
//    {
//        root = t;
//        std::array<int, 7> MyArray;//store children indexes
//        findChildren(index, MyArray);
//        for(int i = 0; i < nodesArr[index].childrenArrSize; i++)
//        {
//            t->NodePtrs[i] = nodesArr[(MyArray[i])];//?????????????
//            std::cout << "index=" << i << std::endl;
//        }
//    }
//    else
//    {
//        struct Node *current;
//        current = root;
//        while(current)//searching where to insert node
//        {
//            current = parent;
//            int i = 0;
//            while(current->NodePtrs[i])
//            {
//                i++;
//            }

//        }

//    }

//}
