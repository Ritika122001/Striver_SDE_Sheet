#include <bits/stdc++.h> 
/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.

    if(root==NULL) return {};

vector<int>ans;
  map<int,vector<int>>mp;
  queue<pair<int ,TreeNode<int>*>>q;
  q.push({0,root});
  mp[0].push_back(root->data);
    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode<int>* node = q.front().second;
            int h = q.front().first;
            q.pop();

            if(node->left)
            {
                q.push({h-1,node->left});
                 mp[h-1].push_back(node->left->data);
                
            }

            if(node->right)
            {
                q.push({h+1,node->right});
                 mp[h+1].push_back(node->right->data);
               
            }

        }
    }


  for(auto c : mp)
  {
      vector<int>v = c.second;
      for(auto i : v)
      {
          ans.push_back(i);
      }

    
  }

return ans;





}
