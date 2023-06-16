#include <bits/stdc++.h> 
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{

   vector<vector<int>>ans;
   sort(intervals.begin(), intervals.end(), [](const vector<int> &v1, const vector<int> &v2){ return v1[0] < v2[0]; });
   vector<int>prev = intervals[0];

    if(intervals.size()==1)
   {
       return intervals;
   }

   for(int i=1 ;i<intervals.size();i++)
   {
       if(prev[1] >= intervals[i][0])
       {
           prev[1] = max(intervals[i][1] , prev[1]);

       }
       else
       {
           ans.push_back(prev);
           prev = intervals[i];
       }
   }

   ans.push_back(prev);

   return ans;
    // Write your code here.
}
