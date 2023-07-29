#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> res;
  for(int i=0;i<n;i++){
    vector<long long int> p;
    for(int j=0;j<=i;j++){

      if(j==0 || j==i) p.push_back(1);
      else{
        p.push_back(res[i-1][j-1]+res[i-1][j]);
      }
    }
    res.push_back(p);
  }
  return res;

}
