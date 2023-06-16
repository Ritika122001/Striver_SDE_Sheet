#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n) {
    // Write your code here.

        sort(nums.begin(), nums.end());
        set<int>st;
        
        for(auto c  : nums)
        {
            st.insert(c);
        }
        
        int res=0;
        
        for(auto c: nums)
        {
            if(!st.count(c-1))
            {
                int curr = c;
                int cntcurr =1 ;
                
                while(st.find(curr+1)!=st.end())
                {
                    cntcurr++;
                    curr+=1;
                    
                }
                
                res  = max(res,cntcurr);
                
                
            }
        }
        
        return res;
        
        
        
    }
