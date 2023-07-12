#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/
void findit(BinaryTreeNode<int>* node, int &ceil, int key){
    if(node->left) findit(node->left, ceil, key);

    if(node->data >= key) {
        if(node->data < ceil){
            ceil = node->data;
        }
    }

    if(node->right) findit(node->right, ceil, key);
}

int findCeil(BinaryTreeNode<int> *node, int x){
    int ceil = INT_MAX;

    findit(node, ceil, x);

    return (ceil < INT_MAX) ? ceil : -1;
}
