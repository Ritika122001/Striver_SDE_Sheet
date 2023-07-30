#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) 
{
    unordered_map<long long, pair<int,int>>mp;
    // sort(arr.begin(),arr.end());

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            long long sum =  arr[i] + arr[j];
            int target2 = target - sum;

            if(mp.find(target2)!=mp.end())
            {
                if(mp[target2].first!= i && mp[target2].second!=j)
                {
                    return "Yes";
                }
            }

         mp[sum] = {i,j};


        }

    }

    return "No";


    // Write your code here.
}
