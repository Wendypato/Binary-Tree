#include <iostream>
#include "C:\Users\Wendy\CLionProjects\BinaryTree\cmake-build-debug\BinaryTree.h"


using namespace std;

int main()
{

    BinaryTree tree;

    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);

    int valueToSearch = 30;
    Node* result = tree.search(tree.root, valueToSearch);
    cout<<result->data;




    return 0;
}
