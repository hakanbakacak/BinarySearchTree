#include "BSTree.h"

BSTree::BSTree()
{

}

/*
 * This function adds new item to binary search tree and if process is successful return 1
 */
bool BSTree::addItem(int x){

    int i = 0;
    if(root==NULL){
        root=new BSTree;
        root->right=NULL;
        root->left=NULL;
        root->data=x;
        cout<<"Ekleme islemi ilk ifde"<<endl;
        i++;
    }
    else{
        if(x<root->data){
            root->left->addItem(x);
            cout<<"lefte eklendi"<<endl;
            i++;
        }
        else{
            root->right->addItem(x);
            cout<<"right eklendi"<<endl;
            i++;
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

void listIn(){

}

void listPost(){

}
