#include <bits/stdc++.h> 
/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *nenodet;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                nenodet = NULL;
            }
    };
*/

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
     queue<BinaryTreeNode< int > *>q;
    q.push(root);
    while(!q.empty()){
        int s=q.size();
        for(int i=0;i<s-1;i++){
            BinaryTreeNode< int > *node=q.front();
            q.pop();
            node->next=q.front();
            if(node->left)q.push(node->left);
            if(node->right)q.push(node->right);
        }
        BinaryTreeNode< int > *node2=q.front();
        q.pop();
        if(node2->left)q.push(node2->left);
        if(node2->right)q.push(node2->right);
    }
}