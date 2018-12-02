#ifndef BSTREE_H
#define BSCHTREE_H

#include<iostream>
using namespace std;

typedef struct binary_tree_nodes{
int data;
struct binary_tree_nodes *left, *right;
}Node;


class BSTree
{
public:
    BSTree();
    bool addItem(Node *root,int key);
    bool deleteItem();
    void listPre();
    void listIn(Node *root);
    void listPost();
private:
    Node node;

};

#endif // BSTREE_H
