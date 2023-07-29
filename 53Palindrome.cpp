#include <bits/stdc++.h> 

  bool isPalin(string s, int l , int h)
  {

    while(l<=h)
    {
      if(s[l++]!=s[h--])
    {
      return false;
    }
    }
    
    return true;

  }
  
  void solve(int ind ,  vector<vector<string>>&res , vector<string>ans, string &s)
  {
    if(ind==s.size())
    {
      res.push_back(ans);
      return; 
    }
    
    
    for(int i=ind;i<s.size();i++)
    {
      if(isPalin(s,ind,i))
      {
        ans.push_back(s.substr(ind,i-ind+1));
        solve(i+1,res,ans,s);
        ans.pop_back();
        
      }
    }
    
  }
  
  

vector<vector<string>> partition(string &s) 
{
    // Write your code here.
      vector<vector<string>>res;
      vector<string>ans;
      solve(0,res,ans,s);
      return res;
}