#include <bits/stdc++.h> 
 void solve(int i , string s , unordered_set<string>st , string ans , vector<string>&res)
    {
           
        if(i>=s.size())
        {
            // cout<<ans<<" "<<endl;
            // cout<<"Before Ans"<<ans<<" "<<endl;
            ans.pop_back();
            // cout<<"After Ans"<<ans<<" "<<endl;
            res.push_back(ans);
            return;
           
            
            
        }
        
        string left;
        
        for(int j=i;j<s.size();j++)
        {
            left+=s[j]; 
            if(st.find(left)!=st.end())
            {  
                // cout<<"Left"<<left<<endl;
                solve(j+1,s,st,ans+left+" ",res);

            }
        }
    }
vector<string> wordBreak(string &s, vector<string> &wordDict)
{
    // Write your code here
        unordered_set<string>st;
        vector<string>res;
        // vector<int> memo(s.size(),-1);
        for(int i=0;i<wordDict.size();i++)
        {
            st.insert(wordDict[i]);
        }
        
       string ans;
   
       solve(0,s,st,ans,res);
        
        return res;

}