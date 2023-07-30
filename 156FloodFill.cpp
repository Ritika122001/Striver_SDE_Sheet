#include<bits/stdc++.h>
void solve(int row, int col, int newColor, int d, vector<vector<int>> &image, vector<vector<int>> &copy){

    copy[row][col] = newColor;
    int m = image.size();

    int n = image[0].size();

    int delrow[] = {-1,0,+1,0};

    int delcol[] = {0,-1,0,+1};

    for(int i=0; i<4; i++){

        int nrow = row + delrow[i];

        int ncol = col + delcol[i];

        if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol] == d && copy[nrow][ncol] != newColor){

            solve(nrow, ncol, newColor, d, image, copy);

        }

    }

}

 

vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    vector<vector<int>> copy = image;

      int m = image.size();

      int n = image[0].size();

 

      int d = image[x][y];

      solve(x, y, newColor, d, image, copy);

 

      return copy;


}