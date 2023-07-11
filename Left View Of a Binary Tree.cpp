#include <bits/stdc++.h>

void solve(TreeNode<int> *root,vector<int>&v,int level)

{

    if(root==NULL)

    return ;

    if(level==v.size())

    v.push_back(root->data);

    solve(root->left,v,level+1);

    solve(root->right,v,level+1);

}

vector<int> getLeftView(TreeNode<int> *root)

{

    vector<int>v;

    solve(root,v,0);

    return v;

    //    Write your code here

}
