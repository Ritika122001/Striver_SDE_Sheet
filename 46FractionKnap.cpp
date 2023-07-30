#include <bits/stdc++.h> 
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.

    sort(items.begin(), items.end(), [](pair<int, int> &a, pair<int, int> &b) {
        return ((double) a.second / a.first) > ((double) b.second / b.first);
    });

    double profit =0 ;
    // int currweight = 0;

    for(auto c: items)
    {

        if(c.first<= w)
        {
            profit+=c.second;
            w-=c.first;
        }
        else
        {
            profit+= w * (double)c.second/c.first;
            break;
        }

    }

    return profit;

}
