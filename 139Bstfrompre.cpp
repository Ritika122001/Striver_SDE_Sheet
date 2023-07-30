#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class TreeNode{
    public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        ~TreeNode() {
            if (left){
                delete left;
            }
            if (right){
                delete right;
            }
        }
    };

*************************************************************/

TreeNode<int>* solve(vector<int> &pre,int &i,int bound){
    if(i>=pre.size() || pre[i]>=bound)return NULL;
    TreeNode<int>* root=new TreeNode<int>(pre[i++]);
    root->left=solve(pre,i,root->data);
    root->right=solve(pre,i,bound);
    return root;
}



TreeNode<int>* preOrderTree(vector<int> &pre){
    // Write your code here.
        int i=0;
    return solve(pre,i,INT_MAX);

}