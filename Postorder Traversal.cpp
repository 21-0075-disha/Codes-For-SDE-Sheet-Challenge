#include <bits/stdc++.h>
void solve(TreeNode *root,vector<int>& ans){
    if(root == NULL){
        return;
    }
    solve(root->left,ans);
    solve(root->right,ans);
    ans.push_back(root->data);
    return;
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    solve(root,ans);
    return ans;
}
