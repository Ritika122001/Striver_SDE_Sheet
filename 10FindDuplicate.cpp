#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
// 	unordered_map<int,int>mp;
// 	for(auto c :  arr)
// 	{
// 		mp[c]++;
// 		if(mp[c] > 1)
// 		{
// 			return c;
// 		}
// 	}

// return -1;

        sort(arr.begin(),arr.end());
		int ans;
		
		for(int i=1;i<n;i++)
		{
			if((arr[i] ^ arr[i-1])==0)
			{
				ans =  arr[i];
				break;
			}
		}

		return ans;

}
