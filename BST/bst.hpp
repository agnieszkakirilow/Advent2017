
#ifndef BST_HPP
#define BST_HPP

struct Node
{
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node* root = NULL;

void insertNode(int data);
void printNodes(struct Node *t);
#endif // BST_HPP
