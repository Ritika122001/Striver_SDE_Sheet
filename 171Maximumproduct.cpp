#include <bits/stdc++.h> 
int maximumProduct(vector<int> &arr, int n)
{
	// Write your code here
	int maxi=INT_MIN;
	int multi=1;
	for(int i=0;i<n;i++){
		multi=multi*arr[i];
		maxi=max(maxi,multi);
		if(multi==0) multi=1;
	}
	multi=1;
	for(int i=n-1;i>=0;i--){
		multi=multi*arr[i];
		maxi=max(maxi,multi);
		if(multi==0) multi=1;
	}
	return maxi;
}
