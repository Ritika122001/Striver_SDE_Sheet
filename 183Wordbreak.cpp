#include <bits/stdc++.h> 

unordered_map<string, bool>mp;
bool solve(vector<string>&arr, int n, string target)
{
    if(target.length() == 0)
        return true;

    if(mp.find(target) != mp.end())
        return mp[target];
    
    for(auto &itr: arr)
    {
        if(itr == target.substr(0, itr.length()))
        {
            bool ans = solve(arr, n, target.substr(itr.length()));
            if(ans)
                return mp[target] = true;
        }
    }

    return mp[target] = false;
}

bool wordBreak(vector < string > & arr, int n, string & target) {
    // Write your code here.
       mp.clear();
    return solve(arr, n, target);
}