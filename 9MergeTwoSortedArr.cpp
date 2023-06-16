#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n)
{
	// Write your code here.
	vector<int>ans;
	int i=0;
	int j=0;
	int k=0;

	while(i<m && j<n)
	{
		if(arr1[i] < arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			k++;
		}

		else if(arr1[i] >= arr2[j])
		{
			ans.push_back(arr2[j]);
			j++;
			k++;

		}
	}

	while(i<m)
	{

		ans.push_back(arr1[i]);
			i++;
			k++;

	}


	while(j<n)
	{
		    ans.push_back(arr2[j]);
			j++;
			k++;
	}

	return ans;

}
