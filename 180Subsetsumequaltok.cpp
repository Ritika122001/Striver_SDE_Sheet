#include <bits/stdc++.h> 

bool solve(int n, int k, vector<int>&arr, vector<vector<int>>&memo)
{
    if(k==0) return true;
    if(k<0 || n<=0) return false;

if(memo[n][k]!=-1)
{
    return memo[n][k];
}

    if(arr[n-1] <=k)
    {
        return memo[n][k] = solve(n-1,k-arr[n-1],arr,memo) || solve(n-1,k,arr,memo);
    }

    else
     return memo[n][k]= solve(n-1,k,arr,memo);


}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.

 vector<vector<int>>memo(n+1, vector<int>(k+1,-1));

    return solve(n,k,arr,memo);
}
