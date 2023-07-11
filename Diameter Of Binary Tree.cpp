int solve(TreeNode<int>*root,int &ans)
{
    if(!root) return 0;
    int l=0,r=0;
    if(root->left)
    {
        l=solve(root->left,ans);
    }
    if(root->right)
    {
        r=solve(root->right,ans);
    }
    ans=max(ans,l+r);
    return 1+max(l,r);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int ans=0;
    solve(root,ans);
    return ans;
}
