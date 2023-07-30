#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    
if(root==NULL) return {};

vector<int>ans;
  map<int,int>mp;
  queue<pair<int,TreeNode<int>*>>q;
  q.push({0,root});

    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode<int>* node = q.front().second;
            int h = q.front().first;
            q.pop();
          if(mp.find(h)==mp.end())  mp[h] = node->val;

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

}
