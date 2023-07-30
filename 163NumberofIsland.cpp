
#include<bits/stdc++.h>

void dfs(int dx[],int dy[],int& row,int& col,vector<vector<int>>&vis,int** &arr,int n,int m){

   vis[row][col] = 1;
   for(int i=0;i<8;i++){

            int nrow = row + dx[i];

            int ncol = col + dy[i];

            if(nrow>=0 && nrow < n && ncol>=0 && ncol<m && arr[nrow][ncol] == 1 && !vis[nrow][ncol]){

                dfs(dx,dy,nrow,ncol,vis,arr,n,m);

            }

   }

}

int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
      vector<vector<int>>vis(n,vector<int>(m,0));

   int cnt = 0;

   int dx[] = {0,1,1,1,0,-1,-1,-1};

   int dy[] = {1,1,0,-1,-1,-1,0,1};

   for(int i = 0;i<n;i++){

      for(int j = 0;j<m;j++){

      if(!vis[i][j] && arr[i][j] == 1){

         cnt++;

         dfs(dx,dy,i,j,vis,arr,n,m);

      }

   }

   }

   return cnt;


}
