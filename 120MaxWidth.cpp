#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

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

int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
        if(root==NULL)

    return 0;

    queue<TreeNode<int> *> q;

    q.push(root);

    int ans=0;

    while(!q.empty())

    {

        int n=q.size();

        int c=0;

        while(n--)

        {

            TreeNode<int> *t=q.front();

            q.pop();

            c++;

            if(t->left!=NULL)

            q.push(t->left);

 

             if(t->right!=NULL)

            q.push(t->right);

 

        }

        ans=max(ans,c);

    }

    return ans;
}