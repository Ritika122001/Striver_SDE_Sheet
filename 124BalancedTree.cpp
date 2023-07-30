#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

int check(BinaryTreeNode<int>*root)
{
    if(root==NULL)return 0;         

    int lh=check(root->left);    

    int rh=check(root->right);  

      if(lh == -1 || rh ==-1 || abs(lh-rh)>1){       

        return -1;

 

    }

    return 1+max(lh,rh);
}

bool isBalancedBT(BinaryTreeNode<int>* root) {

    // Write your code here.

    int ans =check(root);             

 

    if(ans != -1){

 

        return true;

 

    }
1
 

    return false;

 

}

