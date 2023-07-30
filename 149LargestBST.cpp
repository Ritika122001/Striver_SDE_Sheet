#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/

class Node{

public:

    int mini;

    int maxi;

    bool isBST;

    int size;

};

 

Node solve(TreeNode<int>* root, int &ans){

   

    if(root == NULL) 

    {

        return {INT_MAX, INT_MIN, true, 0};

    }

    

    Node left = solve(root->left, ans);

    Node right = solve(root->right, ans);

 

    Node currnode;

    currnode.mini = min(root->data,left.mini);

    currnode.maxi = max(root->data,right.maxi);

    currnode.size = left.size + right.size + 1;

 

    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini) )

    {

        currnode.isBST = true;

    }

    else 

        currnode.isBST = false;

 

    if(currnode.isBST)

    {

        ans = max(ans, currnode.size);

    }

    return currnode;

}

 

int largestBST(TreeNode<int>* root) 

{

    int maxsize = 0;

    Node temp = solve(root, maxsize);

    return maxsize;

}