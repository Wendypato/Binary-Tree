#include <iostream>
#include "C:\Users\Wendy\CLionProjects\BinaryTree\cmake-build-debug\BinaryTree.h"


using namespace std;

int main()
{

    BinaryTree tree;

    tree.root = tree.insert(tree.root, 50);
    tree.root = tree.insert(tree.root, 30);
    tree.root = tree.insert(tree.root, 70);
    tree.root = tree.insert(tree.root, 20);
    tree.root = tree.insert(tree.root, 40);
    tree.root = tree.insert(tree.root, 60);
    tree.root = tree.insert(tree.root, 80);

    cout << "In order traversal: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    cout << "Pre order traversal: ";
    tree.preOrderTraversal(tree.root);
    cout << endl;

    cout << "Post order traversal: ";
    tree.postOrderTraversal(tree.root);
    cout << endl;

    int valueToRemove = 30;
    tree.root = tree.remove(tree.root, valueToRemove);
    cout << "In order after deleting " << valueToRemove << ": ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    //Ejemplo que vimos en clase
    int valueToSearch = 30;
    Node* result = tree.search(tree.root, valueToSearch);
    cout<<result->data;

    //Ejemplo visto en clase
    int valueToSearch = 30;
    Node* result = tree.search(tree.root, valueToSearch);
    cout<<result->data;




    return 0;
}
