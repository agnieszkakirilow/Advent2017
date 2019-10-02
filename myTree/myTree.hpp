#ifndef MYTREE_HPP
#define MYTREE_HPP
const int MAX = 4;

typedef struct Node
{
    char* name;
    int weight;
    int childrenCount;
    Node* children[MAX];
    int padding;
    Node* parent;
} Node;

static Node* root = nullptr;

void insertChild(Node* tmp, int weight, const char *name);
//void insertChild2(int weight, const char*);
void traverseTree(Node* tmp, int *weight);
void printNode(Node* tmp);
void printWeights(int* weights);
void resetWeights(int* weights);
int findIncorrectWeight(int* weights);

#endif // MYTREE_HPP
