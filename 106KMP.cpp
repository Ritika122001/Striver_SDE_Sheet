#include <bits/stdc++.h> 
void lps(string p, vector<int>& temp)
{
    temp[0] = 0; 
    int i = 0; 
    int j = 1; 

    while (j < temp.size())
    {
        if (p[i] == p[j])
        {
            i++;
            temp[j] = i; 
            j++;
        }
        else
        {
            if (i != 0)
                i = temp[i - 1];
            else
            {
                temp[j] = 0; 
                j++;
            }
        }
    }
}

// Function to find pattern 'p' in string 's'
bool findPattern(string p, string s)
{
    int n = p.size(); 
    int m = s.size(); 

    vector<int> temp(n); 
    lps(p, temp); 

    int i = 0; 
    int j = 0; 

    while (j < m)
    {
        if (s[j] == p[i]) 
        {
            i++;
            j++;
        }

        if (i == n) 
            return true;
        else if (j < m && s[j] != p[i]) 
        {
            if (i != 0)
                i = temp[i - 1]; 1
            else
                j++; 
        }
    }

    return false; 
}
