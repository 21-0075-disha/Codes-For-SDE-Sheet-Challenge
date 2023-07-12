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

int KthLargestNumber(TreeNode<int> *root, int k) {
  if (!root)
    return -1;

  TreeNode<int> *curr = root;
  int count = 0;
  while (curr) {
    if (curr->right == NULL) {
      count++;
      if (count == k)
        return curr->data;
      curr = curr->left;
    } else {
      TreeNode<int> *node = curr->right;
      while (node->left != NULL and node->left != curr)
        node = node->left;

      if (node->left == NULL) {
        node->left = curr;
        curr = curr->right;
      } else {
        node->left = NULL;
        count++;
        if (count == k)
          return curr->data;
        curr = curr->left;
      }
    }
  }

  return -1;
}
