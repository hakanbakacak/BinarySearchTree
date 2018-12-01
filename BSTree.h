#ifndef BSTREE_H
#define BSCHTREE_H

#include<iostream>
using namespace std;

class BSTree
{
    BSTree * root=NULL;
public:
    BSTree();
    bool addItem(int x);
    bool deleteItem();
    void listPre();
    void listIn();
    void listPost();
private:
    int data;
    BSTree *right;
    BSTree *left;
};

#endif // BSTREE_H
