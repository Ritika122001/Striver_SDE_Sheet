#include<bits/stdc++.h>
int solve(int n, int w, vector<int> &values, vector<int> &weights, vector<vector<int>> &dp){
	if(n < 0){
		return 0;
	}

	if(dp[n][w] != -1){
		return dp[n][w];
	}

	int take = 0;
	if(weights[n] <= w){
		take = values[n] + solve(n-1, w - weights[n], values, weights, dp);
	}

	int nottake = solve(n-1, w, values, weights, dp);

	return dp[n][w] = max(take, nottake);
}

int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
		vector<vector<int>> dp(n, vector<int> (w+1, -1));
	return solve(n-1, w, values, weights, dp);

}