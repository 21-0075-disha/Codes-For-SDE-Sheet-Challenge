#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <bits/stdc++.h>
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root) {
  if (!root)
    return NULL;

  stack<TreeNode<int> *> s;
  s.push(root);

  while (!s.empty()) {
    auto p = s.top();
    s.pop();

    if (p->right)
      s.push(p->right);
    if (p->left)
      s.push(p->left);

    if (!s.empty())
      p->right = s.top();

    p->left = NULL;
  }

  return root;
}
