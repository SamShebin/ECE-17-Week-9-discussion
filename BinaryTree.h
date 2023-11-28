//
// Created by shebi on 11/27/2023.
//

#ifndef DIS_9_BINARYTREE_H
#define DIS_9_BINARYTREE_H
#include <iostream>
void displayInOrder(Node* aNodePtr){
    if (aNodePtr) {
        displayInOrder(aNodePtr->left);
        std::cout << aNodePtr->val << " ";
        displayInOrder(aNodePtr->right);
    }
}

void printTree(){
    displayInOrder(root);
    std::cout << std::endl;
};
class BinaryTree{

private:
    struct Node{
        int val
        Node* left;
        Node* right;

        Node(int aVal, Node*left = nullptr, Node*right = nullptr);
    };

    Node* root;

private:
    Node* root;
    void insert(Node* &aNodePtr, Node* &aNewNodePtr);
    void deleteNode(int aVal, Node* &aNodePtr);
    void makeDeletion(Node* &aNodePtr);

public:
    Constructor BinarySearchTree();
    void insertNode(int aVal);
    bool searchNode(int aVal);
    void remove(int aVal);
};





#endif //DIS_9_BINARYTREE_H
