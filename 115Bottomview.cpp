#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

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

vector<int> bottomView(BinaryTreeNode<int> * root)
{

if(root==NULL) return {};

vector<int>ans;
  map<int,int>mp;
  queue<pair<int,BinaryTreeNode<int>*>>q;
  q.push({0,root});
  mp[0] = root->data;
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            BinaryTreeNode<int>* node = q.front().second;
            int h = q.front().first;
            q.pop();
            mp[h] = node->data;

            if(node->left)
            {
                q.push({h-1,node->left});
                
            }

            if(node->right)
            {
                q.push({h+1,node->right});
               
            }

        }
    }


    for(auto c : mp)
    {
        ans.push_back(c.second);
    }

    return ans;

    // Write your code here.
    
}
