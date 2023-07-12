#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	// Write your code here
    
    // Iterative Approach
    TreeNode<int>* curr = root;
    
    while(curr != NULL){
        if(curr->data > P->data && curr->data > Q->data) curr = curr->left;
        else if(curr->data < P->data && curr->data < Q->data) curr = curr->right;
        else return curr;
    }

    return NULL;
}
