#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	 pair<int,int>ans;
    int s;
    vector<int>res(n+1,0);
    
    for(auto a : arr)
    {
        res[a]++;
    }
    
    for(int i=1;i<n+1;i++)
    {
        if(res[i]==0)
        {
           ans.first = i;
        
        }
        
        if(res[i]>1)
        {
            ans.second = i;
        }
    }
    
  
   
 
    return ans;
    
	
}
