#include <fstream>
#include <array>
#include <string>

#ifndef TOWER_HPP
#define TOWER_HPP
std::ifstream myfile;
const int arraySize = 1089;
const int MAX = 7;
std::string buffer = "";
std::array<std::string, arraySize> myArray;
struct Str
{
    std::string name;
    std::string parent = "root";
    int weight;
    bool isLeaf = false;
    int childrenArrSize;
    int index = 0;
    int parentIndex = -1;
    std::array<std::string, MAX> childrenArr;
    int nextToStart = 0;
};
std::array<std::string, arraySize> my;
bool isRoot = true;
int max = 0;
int rootIndex = 0;
int levelCount = 0;
std::array<struct Str, arraySize> nodesArr;
void insertNode(int index);
int findChild(int index);
typedef struct Node
{
    char* name;
    int weight;
    int childrenCount;
    Node* children[MAX];
    Node* parent;
    int structIndex;
    int childrenLeft;
} Node;
void readFromFile(std::ifstream &file);
void findParent();
int findRoot();
static Node* root = nullptr;
static Node* myptr = nullptr;
static Node* whereToAdd = nullptr;

void printNode(Node* tmp);
void insertChild(Node* tmp, int index);
int parentIndex;
void traverseTree(Node* tmp, int* weight);
void printWeights(int *weights);
void resetWeights(int* weights);
int findIncorrectWeight(int *weights);
#endif // TOWER_HPP
