#include<bits/stdc++.h>
int solve(vector<int>& price ,int n ,int w,vector<vector<int>> &dp){

    if(n==0||w==0) return 0;

    if(dp[n][w]!=-1) return dp[n][w];

    if(n>w){

        return dp[n][w]=solve(price,n-1,w,dp);

    }

    else{

        int take=solve(price,n,w-n,dp)+price[n-1];

        int notake=solve(price,n-1,w,dp);

        return dp[n][w]=max(take,notake);

    }

}

int cutRod(vector<int> &price, int n)
{
	// Write your code here.
	   vector<vector<int>> dp(n+1,vector<int>(n+1,-1));

    return solve(price,n,n,dp);
}
