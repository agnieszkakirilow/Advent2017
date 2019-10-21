#include <algorithm>
#include <string.h>
#include "tower.hpp"

void readFromFile(std::ifstream &file)
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
            nodesArr[nodesArrCount].isLeaf = true;
            //std::cout <<"l"<<nodesArr[nodesArrCount].isLeaf << "ind" << nodesArrCount << std::endl;
        }
//        for (int i = 0; i < nodesArr[nodesArrCount].childrenArrSize; i++)
//        {
//            std::cout << nodesArr[nodesArrCount].childrenArr[i] << std::endl;
//        }
        nodesArrCount++;
    }

}

void findParent()
{
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
                    //std::cout <<  "parent=" << nodesArr[i].parent << "index=" << k << std::endl;
                    continue;
                }
            }
        }
    }
}

int findChild(int index)
{
    int result = -1;
    for (int i = nodesArr[index].nextToStart; i < arraySize; i++)
    {
        if(nodesArr[i].parentIndex == index)
        {
            result = i;
            if(i != arraySize - 1)
            {
                nodesArr[index].nextToStart = i+1;
            }
            //std::cout << "index=" << i << std::endl;
            break;
        }
    }
    return result;
}

int findRoot()
{
    int result = -1;
    for(int i = 0; i < arraySize; i++)
    {
        if(nodesArr[i].parent == "root")
        {
            //std::cout << "i=" << i << "p=" << nodesArr[i].parent << std::endl;
            result = i;
            break;
        }
    }
    return result;
}

void insertChild(Node* tmp , int index)
{
    tmp->children[tmp->childrenCount] = (Node*)malloc(sizeof(Node));//why cannot change a name?
    std::cout << "ChNr=" << nodesArr[index].childrenArrSize;
    for(int i = 0; i < nodesArr[index].childrenArrSize; i++)
    {
        tmp->children[tmp->childrenCount]->children[i] = nullptr;
    }
    tmp->children[tmp->childrenCount]->childrenCount = 0;

    tmp->children[tmp->childrenCount]->weight = nodesArr[index].weight;
    //std::cout << "weight=" << tmp->children[tmp->childrenCount]->weight;
    tmp->children[tmp->childrenCount]->parent = tmp;
    tmp->children[tmp->childrenCount]->childrenLeft = nodesArr[index].childrenArrSize;
    std::cout << "ChL=" << tmp->children[tmp->childrenCount]->childrenLeft;
    tmp->children[tmp->childrenCount]->name = (char*)malloc(strlen((nodesArr[index].name).c_str())+1);
    strcpy(tmp->children[tmp->childrenCount]->name, (nodesArr[index].name).c_str());
    std::cout << "Na=" << tmp->children[tmp->childrenCount]->name;
    tmp->children[tmp->childrenCount]->structIndex = index;
    std::cout << "leaf" << nodesArr[index].isLeaf << std::endl;
    myptr = tmp->children[tmp->childrenCount];
    (tmp->childrenCount)++;
    (tmp->childrenLeft)--;
    parentIndex = index;


}

void printNode(Node* tmp)
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

void traverseTree(Node* tmp, int* weight)
{

    if(tmp)
    {
        *weight +=tmp->weight;
        printNode(tmp);
        for(int i = 0; i < tmp->childrenCount; i++)
        {
            traverseTree(tmp->children[i], weight);
        }
    }
    whereToAdd = tmp;
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
    for(int i = 0; i < 6; i++)
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
