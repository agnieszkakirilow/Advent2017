#include <iostream>
#include <string>
#include "bst.hpp"

void insertNode(int data)
{
    struct Node *t, *parent;
    t = (Node*)malloc(sizeof(struct Node));//node created
    t->data = data;
    t->right = NULL;
    t->left = NULL;
    parent = root;
    if(root == NULL)
    {
        root = t;
        //std::cout << "root t=" << root->data << std::endl;
    }
    else
    {
        struct Node* current;
        current = root;
        while(current)
        {
            parent = current;
            //std::cout << "p=" << parent << "c=" << current << std::endl;
            if(t->data > current->data)
            {
                current = current->right;
            }
            else
            {
                current = current->left;
            }
        }
        if(t->data > parent->data)
        {
            parent->right = t;
        }
        else
        {
            parent->left = t;
        }

    }
}

void printNodes(struct Node *t)
{
    if(t->left)
    {
        printNodes(t->left);
    }
    std::cout << t->data << "   ";
    if(t->right)
    {
        printNodes(t->right);
    }
}
