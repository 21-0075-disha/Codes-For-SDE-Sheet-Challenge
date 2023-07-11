#include <bits/stdc++.h> 
vector<int> getTopView(TreeNode<int> *root) {
    // Approach: Similar to Vertical Order Traversal of Binary Tree.
    // We will use a one to one mapping of the horizontal distance
    // and the first occurence of the value at that distance on the 
    // number line. As all the remaining nodes will be hidden.
    // Time Complexity: O(N*logN)
    // Space Complexity: O(N)
    map<int, int> hash;
    vector<int> ans;
    if(root == NULL) return ans;
    // We will do a Level Order Traversal
    queue<pair<TreeNode<int>*, int>> q;
    pair<TreeNode<int>*, int> p = make_pair(root, 0);
    q.push(p);
    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            pair<TreeNode<int>*, int> curr = q.front();
            q.pop();
            if(hash.find(curr.second) == hash.end()){
                hash[curr.second] = curr.first->val;
            }
            if(curr.first->left != NULL){
                pair<TreeNode<int>*, int> p = make_pair(curr.first->left, curr.second - 1);
                q.push(p);
            }
            if(curr.first->right != NULL){
                pair<TreeNode<int>*, int> p = make_pair(curr.first->right, curr.second + 1);
                q.push(p);
            }
        }
    }

    for(auto it : hash){
        ans.push_back(it.second);
    }

    return ans;
}
