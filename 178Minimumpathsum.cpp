#include <bits/stdc++.h> 

int solve(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&memo)
{
       if(i>=grid.size() or j >=grid[0].size()) return 1e9;
       
          if(i==grid.size()-1 and j==grid[0].size()-1) return grid[i][j];

          if(memo[i][j]!=-1)
          {
              return memo[i][j];
          }

    return memo[i][j] = min( grid[i][j] + solve(i,j+1,grid,memo), grid[i][j] + solve(i+1,j,grid,memo));  

}

int minSumPath(vector<vector<int>> &grid) {
    // Write your code here.
    int m = grid.size();
    int n = grid[0].size();
     vector<vector<int>> memo(m, vector<int>(n, -1));
        
    return solve(0,0,grid,memo);
}
