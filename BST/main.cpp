#include <iostream>
#include "bst.cpp"
#include "bst.hpp"

int main()
{

    insertNode(50);
    insertNode(30);
    insertNode(60);
    insertNode(20);
    insertNode(70);
    insertNode(25);
    insertNode(65);
    insertNode(67);
    printNodes(root);
    return 0;
}
