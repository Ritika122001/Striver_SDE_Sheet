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

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here

    vector<int>ans;

    queue<TreeNode*>q;
    q.push_back(root);
    ans.push_back(root->data);

    while(!q.empty())
    {
        int size = q.size();
        for(int i=0;i<size;i++)
        {
            TreeNode* n =q.front();
            q.pop();

            if(i==0)
            {
               ans.push_baack(n->left->data);

            }

            if(n->left)
            {
                q.push(n->left);
            }
            if(n->right)
            {
                q.push(n->right);
            }

        }

    }
            return ans;
}
