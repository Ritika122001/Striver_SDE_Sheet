int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k) {
    // Write your code here.
        if (m > n) 
    {
        return ninjaAndLadoos(row2, row1, n, m, k);
    }
  
    if (m == 0) 
    {
        return row2[k - 1];
    }
    
    if (k == 1) 
    {
        return min(row1[0], row2[0]);
    }
  
    int i = min(m, k / 2);
    int j = min(n, k / 2);
    
    if (row1[i - 1] > row2[j - 1]) 
    {
        vector<int> ans;
        ans.assign(row2.begin() + j, row2.end());
        
        return ninjaAndLadoos(row1, ans, m, n - j, k - j);
    } 

    vector<int> res;
    res.assign(row1.begin() + i, row1.end());
        
    return ninjaAndLadoos(res, row2, m - i, n, k - i);  

}