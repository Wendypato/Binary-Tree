//
// Created by Wendy on 08/10/2024.
//

#ifndef BINARYTREE_H
#define BINARYTREE_H

using namespace std;


struct Node
{
    int data;
    Node* right;
    Node* left;

    Node(int Value);
};

class BinaryTree {
public:
    Node* root;

    //Constructor
    BinaryTree();

    Node* insert(Node* node, int value);
    Node* search(Node* node, int value);
    Node* remove(Node* node, int value);
    void inOrderTraversal(Node* node);
    void preOrderTraversal(Node* node);
    void postOrderTraversal(Node* node);

private:
    Node* minValueNode(Node* node);


};



#endif //BINARYTREE_H

