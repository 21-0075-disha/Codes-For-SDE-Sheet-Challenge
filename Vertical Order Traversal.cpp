#include <bits/stdc++.h> 
void mapHorizontalDistance(TreeNode<int> *root, map<int, map<int, vector<int>>> &hash, int dist, int level){
    // Base Case
    if(root == NULL) return;
    hash[dist][level].push_back(root->data);
    level++;
    if(root->left != NULL)
        mapHorizontalDistance(root->left, hash, dist - 1, level);
    if(root->right != NULL)
        mapHorizontalDistance(root->right, hash, dist + 1, level);
}

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    // Using a Horizontal Distance Mapping - on a number line,
    // Such that root will be on at zero.
    // Store numbers which stack at a perticular number line,
    // Using level.
    // Time Complexity: O(N*logN)
    // Space Complexity: O(N)
    // outer map: number line -> inner map
    // inner map: level -> number at a perticular number on the number line.
    map<int, map<int, vector<int>>> hash;
    // We will do pre-order traverser using Recursion.
    mapHorizontalDistance(root, hash, 0, 0);
    vector<int> ans;
    for(auto it : hash){
        for(auto iit : it.second){
            for(auto j : iit.second){
                ans.push_back(j);
            }
        }
    }
    return ans;
}
