#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.

    vector<int>ans;
    vector<int>temp;
    auto mini=ans.begin();

    for(int i=0;i<n;i++)
    {
        if(q[i][0]==0)
        {
            ans.push_back(q[i][1]);
            mini = min_element(ans.begin(), ans.end());
        }
        else
        {
            temp.push_back(*mini);
            ans.erase(mini);
        }
    }

    return temp;

    }
