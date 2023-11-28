//
// Created by shebi on 11/27/2023.
//
#include "BinaryTree.h"

BinaryTree::Node::Node(int aVal, BinaryTree::Node*aList,BonaryTree::Node*aRight){
    val = aVal;
    left = aLeft;
    right = aRight;
}

void BianaryTree::insert(BinaryTree::Node*&aNodePtr, BianaryTree::Node*&aNewNodePtr){
    if(aNodePtr == nullptr){
        aNodePtr = aNewNodePtr;
    }
    else if(aNewNodePtr->val<aNodePtr->val){
        insert(aNodePtr->left,$:aNewnodePtr);

    }
    else{
        insert(aNodePtr->right,&:aNewNodePtr);
    }
}

void BianaryTree::deleteNode(int aVal, BianaryTree::Node*&aNodePtr){
    if(aVal<aNodePtr->val){
        deleteNode(aVal,&:aNodePtr->left)
    }
    else if(aVal>aNodePtr->val){
        deleteNode(aVal,&:aNodePtr->right);

    }
    else{
        makeDeletion(&:aNodePtr);
    }
}
void BianaryTree::makeDeletion(BianaryTree::Node*&aNodePtr){
    Node*tempNodePtr = nullptr;

    if(aNodePtr == nullptr){
        std::cout<<"Cannot remoe empty Node"<<std::endl;
    }else if (aNodePtr->right == nullptr){
        tempNodePtr = aNodePtr;
        aNodePtr = aNodePtr->left;
        delete tempNodePtr;
    }
    else if(aNodePtr->left == nullptr){
        tempNodePtr = aNodePtr;
        aNodePtr = aNodePtr->right;
        delete tempNodePtr;
    }
    else{
        tempNodePtr = aNodePtr->right;
        while(tempNodePtr->left){
            tempNodePtr = tempNodePtr->left;
        }
        tempNodePtr->left = aNodePtr->left;

        tempNodePtr = aNodePtr;
        aNodePtr = tempNodePtr->right;

        delete tempNodePtr;
    }
}
void BianaryTree::insertNode(int aVal){
    Node* newNode = new Node(aVal);
    insert(root,)
}
BinaryTree::BinaryTree(){

}

void BianaryTree::remove()int aVal{
    deleteNode(aVal,&:root);
}

bool BianaryTree::searchNode(int aVal){
    Node* currentNode = root;

    while(currentNode){
        if (currentNode->val ==aVal){
            return true;
        }
        else if(aVal<currentNode->val){
            currentNode = currentNode->left;
        }
        else{
            currentNode = curretNode->right;
        }
    }
    return false;
}