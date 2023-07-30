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
void helper(BinaryTreeNode<int>*root,int k,unordered_map<int,int>&map,bool &ans){

    if(root==NULL)return;

    int check=k-root->data;

    if(map.find(k-root->data)!=map.end()){

        ans=true;

        return;

    }

    map[root->data]=1;

    helper(root->left,k,map,ans);

    helper(root->right,k,map,ans);

 

}



bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    // Write your code here
        unordered_map<int,int>map;

    bool ans=false;1

    helper(root,k,map,ans);

    return ans;


}