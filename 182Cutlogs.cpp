#include <bits/stdc++.h>

int solve(int n,int k,vector<vector<int>>&dp)

 {

     if (n<=0 || k<=0) return 0;

     if (k==1) return n;

     if (n==1) return 1;

     if (dp[n][k]!=-1) return dp[n][k];

     int ans=INT_MAX;

     int low=1;

     int high=n;

     while(low<=high)

     {

         int mid=low+(high-low)/2;

         int n1=solve(mid-1,k-1,dp);

         int n2=solve(n-mid,k,dp);

          int result=max(n2,n1);

         ans=min(result+1,ans);

         if (n1<n2)

         {

            low=mid+1;

         }

         else{

           high=mid-1;

         }

     }

    

     return dp[n][k]=ans;

 }
int cutLogs(int k, int n)
{
    // Write your code here.
        vector<vector<int>>dp(n+1,vector<int>(k+1,-1));

    return solve(n,k,dp);
}
