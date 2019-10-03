#include "myTree.hpp"
void insertChild(Node* tmp, int weight, const char *name)
{
    tmp->children[tmp->childrenCount] = (Node*)malloc(sizeof(Node));//why cannot change a name?
    tmp->children[tmp->childrenCount]->children[0] = nullptr;
    tmp->children[tmp->childrenCount]->children[1] = nullptr;
    tmp->children[tmp->childrenCount]->children[2] = nullptr;
    tmp->children[tmp->childrenCount]->children[3] = nullptr;
    tmp->children[tmp->childrenCount]->childrenCount = 0;

    tmp->children[tmp->childrenCount]->weight = weight;
    tmp->children[tmp->childrenCount]->parent = tmp;
    tmp->children[tmp->childrenCount]->name = (char*)malloc(strlen(name)+1);
    strcpy(tmp->children[tmp->childrenCount]->name, name);
    (tmp->childrenCount)++;
}

void insertChild2(int weight, const char *name)
{
    Node *tmp, *parent;
    tmp = (Node*)malloc(sizeof(Node));
    tmp->weight = weight;
    tmp->childrenCount = 0;
    tmp->name = (char*)malloc(MAXNAME);
    strcpy(tmp->name, name);
    tmp->children[0] = nullptr;
    tmp->children[1] = nullptr;
    tmp->children[2] = nullptr;
    tmp->children[3] = nullptr;
    parent = root;
    if(root == nullptr)
    {
        root = tmp;
    }
    else
    {

    }
}
void traverseTree(Node* tmp, int* weight)
{

    if(tmp)
    {
        *weight +=tmp->weight;
        printNode(tmp);
        traverseTree(tmp->children[0], weight);
        traverseTree(tmp->children[1], weight);
        traverseTree(tmp->children[2], weight);
        traverseTree(tmp->children[3], weight);
    }
    whereToAdd = tmp;
}

void printNode(Node *tmp)
{
    if(tmp->parent && tmp->parent->name)
    {
        std::cout << "curr = " << tmp->name << " parent = " << tmp->parent->name << std::endl;
    }
    else
    {
        std::cout << "curr = " << tmp->name << "   " << std::endl;
    }
}

void printWeights(int *weights)
{
    for(int i = 0; i < MAX; i++)
    {
        std::cout << weights[i] << "   ";
    }
    std::cout << std::endl;
}

void resetWeights(int* weights)
{
    for(int i = 0; i < MAX; i++)
    {
        weights[i] = 0;
    }
}

int findIncorrectWeight(int *weights)
{
    int ret = 0xff;
    for(int i = 0; i < 3; i++)
    {
        if(weights[i] != weights[i+1])
        {
            if(weights[i] != weights[i+2])
            {
                ret = i;
                break;
            }
            else
            {
                ret = i+1;
                break;
            }
        }
    }
    std::cout << "ret = " << ret << std::endl;

    return ret;
}
