#include "BSTree.h"

BSTree::BSTree()
{

}

/*
 * This function adds new item to binary search tree and if process is successful return 1
 */
bool BSTree::addItem(Node *root,int key){

    int i = 0;
    if(root==NULL){
        root=new Node;
        root->right=NULL;
        root->left=NULL;
        root->data=key;
        i++;
    }
    else{
        if(root->data<key){
            addItem(root->left,key);
        }
        else{
            addItem(root->right,key);
        }
    }
    return i;
}

/*
 * deleteItem function is deletes item which is wanted and if process is successful return 1
 */

bool deleteItem(){

    return 1;
}

void listPre(){

}
/*
 * print the items left - root - right format
 */
void listIn(Node *root){
    if(root==NULL)
        cout<<"NULL";
    else
    {
        listIn(root->left);
        cout<<root->data<<" "<<endl;
        listIn(root->right);
    }
}

void listPost(){

}
