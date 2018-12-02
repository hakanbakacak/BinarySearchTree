#include <iostream>
using namespace std;
#include "BSTree.h"
int main()
{
    Node *root=NULL;
    BSTree library;

    cout<<library.addItem(root,15)<<endl;
    cout<<library.addItem(root,16)<<endl;
    library.listIn(root);

    return 0;
}
