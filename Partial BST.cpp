#include <bits/stdc++.h> 


bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    if(root==NULL || (root->left==NULL && root->right==NULL))
    return true;

    bool left = validateBST(root->left);
    bool right = validateBST(root->right);

    bool ans = true;

    if(root->left)
    ans =ans && (root->data >= root->left->data);

    if(root->right)
    ans = ans && (root->data <= root->right->data);

    return ans && left && right;
}
