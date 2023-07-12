#include <bits/stdc++.h> 
/**********************************************************

    Following is the Binary Tree Node structure:

    template <typename T>
    class BinaryTreeNode {
        public: 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };
***********************************************************/
bool pairSumBst(BinaryTreeNode<int> *root, int k){
    vector<int> arr;
    stack<BinaryTreeNode<int>*> s;
    auto *curr = root;

    while (curr != NULL || !s.empty()){
        while (curr != NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        arr.push_back(curr->data);
        curr = curr->right;
    }

    int lo = 0, hi = arr.size()-1;
    while (lo < hi){
        int sum = arr[lo] + arr[hi];
        if (sum == k) return true;
        else if (sum < k) lo++;
        else hi--;
    }
    
    return false;
}
