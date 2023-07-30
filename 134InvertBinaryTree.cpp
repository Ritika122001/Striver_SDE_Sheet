#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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

bool solve(TreeNode<int> *root, stack<TreeNode<int> *> &st,
                 TreeNode<int> *leaf) {
  st.push(root);

  if (!root->left and !root->right) {
    if (root->data == leaf->data)
      return true;
    else
      st.pop();
    return false;
  }

  if (root->left) {
    if (solve(root->left, st, leaf))
      return true;
  }

  if (root->right) {
    if (solve(root->right, st, leaf))
      return true;
  }

  st.pop();
  return false;
}

TreeNode<int> *invertBinaryTree(TreeNode<int> *root, TreeNode<int> *leaf) {
  if (!root)
    return NULL;

  stack<TreeNode<int> *> st;
  solve(root, st, leaf);

  TreeNode<int> *head = st.top();
  st.pop();

  TreeNode<int> *par = head;
  while (!st.empty()) {
    auto p = st.top();
    st.pop();

    if (p->right == head) {
      p->right = p->left;
      p->left = NULL;
    } else {
      p->left = NULL;
    }

    head->left = p;
    head = p;
  }

  return par;
}
