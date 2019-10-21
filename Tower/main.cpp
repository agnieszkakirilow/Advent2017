#include <iostream>
#include <fstream>
#include <array>
#include <string>
#include <algorithm>
#include "tower.cpp"

int main()
{

    readFromFile(myfile);
    findParent();
    rootIndex = findRoot();
    std::cout << "rootIndex=" << rootIndex << std::endl;
    root = (Node*)malloc(sizeof(Node));
    root->childrenCount = 0;
    root->childrenLeft = nodesArr[rootIndex].childrenArrSize;
    //std::cout << "rootChL=" << root->childrenLeft << std::endl;
    root->weight = nodesArr[rootIndex].weight;
    root->name = (char*)malloc(2);
    strcpy(root->name, (nodesArr[rootIndex].name).c_str());
    //std::cout << "rootName=" << root->name << std::endl;
    root->parent = nullptr;//what is the difference between NULL and nullptr?
    root->structIndex = 381;
    for(int i = 0; i < nodesArr[rootIndex].childrenArrSize; i++)
    {
        root->children[i] = nullptr;
    }

    myptr = (Node*)malloc(sizeof(Node));
    myptr = root;
    parentIndex = rootIndex;
    while(myptr->childrenLeft)

    {
        if(nodesArr[parentIndex].isLeaf == false)
        {
            insertChild(myptr, findChild(parentIndex));
            std::cout << "parenti=" << parentIndex << std::endl;
            std::cout << "leaf=" << nodesArr[parentIndex].isLeaf << std::endl;
        }
        else
        {
            myptr = myptr->parent;
            parentIndex = myptr->structIndex;
            std::cout << "strInd=" << parentIndex << std::endl;
            while(!myptr->childrenLeft)
            {
                if(parentIndex == rootIndex && root->childrenLeft == 0)
                {
                    break;
                }
                myptr = myptr->parent;
                //std::cout << "myptr=" << myptr->name << std::endl;
                parentIndex = myptr->structIndex;
                //std::cout << "strInd=" << parentIndex << std::endl;
                //std::cout << "chilLeft=" << myptr->childrenLeft << std::endl;
            }

        }


    }
    myptr = root;
    int weights[MAX] = {0};
    for(int i = 0; i < myptr->childrenCount; i++)
    {
        traverseTree(myptr->children[i], &(weights[i]));
    }
    printWeights(weights);
    int index = findIncorrectWeight(weights);

    while(index != 0xff)
    {
        resetWeights(weights);
        myptr = myptr->children[index];
        for(int i = 0; i < myptr->childrenCount; i++)
        {
            traverseTree(myptr->children[i], &(weights[i]));
        }
        printWeights(weights);
        index = findIncorrectWeight(weights);
    }

        std::cout << myptr->parent->name << std::endl;
    return 0;
}



