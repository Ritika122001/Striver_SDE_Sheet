#include <bits/stdc++.h>
void solve(int ind, vector<int>& arr, int k, vector<vector<int>>& ans, vector<int>& res){

        if(ind == arr.size()){

          if (accumulate(res.begin(), res.end(), 0) == k) {

            ans.push_back(res);
          }

          return;
        }

    res.push_back(arr[ind]);

    solve(ind + 1, arr, k, ans, res);

    res.pop_back();

    solve(ind + 1, arr, k, ans, res);

}

 


vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
        vector<int> res;
        solve(0, arr, k, ans, res);
        return ans;
    // Write your code here.
}