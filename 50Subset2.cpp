#include <bits/stdc++.h> 
void solve(int ind,  vector<vector<int>>&ans,
      vector<int>&res,vector<int>& nums )
  {
    if(ind == nums.size())
    {
    
      return ;
    }
    
    res.push_back(nums[ind]);
    ans.push_back(res);
    solve(ind+1,ans,res,nums);
    while( ind < nums.size()-1 && nums[ind]==nums[ind+1]) ind++;
      res.pop_back();
    solve(ind+1,ans,res,nums);
    
    
  }
  
  
vector<vector<int>> uniqueSubsets(int n, vector<int> &nums)
{
          sort(nums.begin(),nums.end());
      vector<vector<int>>ans;
      vector<int>res;
      solve(0,ans, res,nums);
      return ans;
      
      
    // Write your code here.
}