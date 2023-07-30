bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int l = 0;
      int  h = matrix[0].size()-1;
      int m = matrix.size();
      int n = matrix[0].size();
      
      while(l>=0 and h>=0 and l<m and h<n)
      {
        
        if(matrix[l][h]==target)
        {
          return true;
        }
        
        if(matrix[l][h] > target)
        {
          h--;
        }
        
        else{
          l++;
        }
        
        
      }
      
      return false;
        
}
