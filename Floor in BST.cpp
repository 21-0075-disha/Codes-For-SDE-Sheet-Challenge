#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int> *root, int x, int &ans){
    if(!root){
        return;
    }

    if(root->val > x){
        solve(root->left, x, ans);
    }
    else{
        ans = root->val;
        solve(root->right, x, ans);
    }
}

int floorInBST(TreeNode<int> * root, int x)
{
    int ans = -1;
    solve(root, x, ans);
    return ans;
}
