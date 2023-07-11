#include <bits/stdc++.h> 
bool solve(vector<int>&arr,TreeNode<int> *root,int x)
{
    if(!root)
        return false;
    arr.push_back(root->data);
    
    
    if(root->data ==x)
        return true;
    
    if(solve(arr,root->left,x) || solve(arr,root->right,x) )
        return true;
    
    arr.pop_back();
    return false;
}
vector<int> pathInATree(TreeNode<int> *root, int x)
{
    vector<int>arr;
    if(root==NULL)
    {
        return arr;
    }
    solve(arr,root,x);
    return arr;
}

