#include <iostream>
#include <string>
#include <cstring>
#include "myTree.cpp"


int main()
{
    root = (Node*)malloc(sizeof(Node));
    root->childrenCount = 0;
    root->weight = 10;
    root->name = (char*)malloc(2);
    strcpy(root->name, "a");
    root->parent = nullptr;//what is the difference between NULL and nullptr?
    root->children[0] = nullptr;
    root->children[1] = nullptr;
    root->children[2] = nullptr;
    root->children[3] = nullptr;

    root2 = (Node*)malloc(sizeof(Node));
    root2->childrenCount = 0;
    root2->weight = 10;
    root2->name = (char*)malloc(2);
    strcpy(root2->name, "a2");
    root2->parent = nullptr;//what is the difference between NULL and nullptr?
    root2->children[0] = nullptr;
    root2->children[1] = nullptr;
    root2->children[2] = nullptr;
    root2->children[3] = nullptr;

    Node* tmp2;
    tmp2 = root;

    int weights2[4] = {0};

    traverseTree(tmp2->children[0], &(weights2[0]));
    traverseTree(tmp2->children[1], &(weights2[1]));
    traverseTree(tmp2->children[2], &(weights2[2]));
    traverseTree(tmp2->children[3], &(weights2[3]));

    //std::cout << "whereToAdd=" << whereToAdd->name << std::endl;

    insertChild(root, 5, "b");
    insertChild(root, 5, "c");
    insertChild(root, 5, "d");
    insertChild(root, 5, "e");

    insertChild(root->children[0], 6, "f");
    insertChild(root->children[0], 6, "g");
    insertChild(root->children[0], 6, "h");
    insertChild(root->children[1], 6, "i");
    insertChild(root->children[1], 6, "j");
    insertChild(root->children[1], 6, "k");
    insertChild(root->children[2], 6, "l");
    insertChild(root->children[2], 6, "s");
    insertChild(root->children[2], 6, "m");
    insertChild(root->children[3], 6, "o");
    insertChild(root->children[3], 6, "p");
    insertChild(root->children[3], 6, "r");

    insertChild(root->children[0]->children[0], 3, "aa");
    insertChild(root->children[0]->children[0], 3, "ab");
    insertChild(root->children[0]->children[1], 3, "ac");
    insertChild(root->children[0]->children[1], 3, "ad");
    insertChild(root->children[0]->children[2], 3, "ae");
    insertChild(root->children[0]->children[2], 3, "af");
    insertChild(root->children[1]->children[0], 3, "ag");
    insertChild(root->children[1]->children[0], 3, "ah");
    insertChild(root->children[1]->children[1], 3, "ai");
    insertChild(root->children[1]->children[1], 5, "aj");
    insertChild(root->children[1]->children[2], 3, "ak");
    insertChild(root->children[1]->children[2], 3, "al");
    insertChild(root->children[2]->children[0], 3, "am");
    insertChild(root->children[2]->children[0], 3, "an");
    insertChild(root->children[2]->children[1], 3, "ao");
    insertChild(root->children[2]->children[1], 3, "ap");
    insertChild(root->children[2]->children[2], 3, "ar");
    insertChild(root->children[2]->children[2], 3, "as");
    insertChild(root->children[3]->children[0], 3, "at");
    insertChild(root->children[3]->children[0], 3, "au");
    insertChild(root->children[3]->children[1], 3, "av");
    insertChild(root->children[3]->children[1], 3, "az");
    insertChild(root->children[3]->children[2], 3, "ax");
    insertChild(root->children[3]->children[2], 3, "ay");

    Node* tmp;
    tmp = root;
//    std::cout << "name=" << tmp->name << "parent=" << tmp->parent->name << "   ";
//    tmp = root->children[0];
//    std::cout << "name=" << tmp->name << "parent=" << tmp->parent->name << "   ";
//    tmp = root->children[0]->children[0];
//    std::cout << "name=" << tmp->name << "parent=" << tmp->parent->name << "   ";
//    tmp = root->children[0]->children[0]->children[0];
//    std::cout << "name=" << tmp->name << "parent=" << tmp->parent->name << "   ";
//    tmp = root->children[0]->children[0]->children[1];
//    std::cout << "name=" << tmp->name << "parent=" << tmp->parent->name << "   ";

    int weights[4] = {0};

    traverseTree(tmp->children[0], &(weights[0]));
    traverseTree(tmp->children[1], &(weights[1]));
    traverseTree(tmp->children[2], &(weights[2]));
    traverseTree(tmp->children[3], &(weights[3]));
    printWeights(weights);


    int index = findIncorrectWeight(weights);

    while(index != 0xff)
    {
        resetWeights(weights);
        tmp = tmp->children[index];
        traverseTree(tmp->children[0], &(weights[0]));
        traverseTree(tmp->children[1], &(weights[1]));
        traverseTree(tmp->children[2], &(weights[2]));
        traverseTree(tmp->children[3], &(weights[3]));
        printWeights(weights);
        index = findIncorrectWeight(weights);
    }

    std::cout << tmp->parent->name << std::endl;

    return 0;
}


