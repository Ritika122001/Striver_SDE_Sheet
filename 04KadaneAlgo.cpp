#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
  
   long long sum=0;
   long long maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
         sum+=arr[i];
        
         if(sum<0)
         {
             sum=0;
         }

         else if (sum > maxi) {
           maxi = sum;
         }
    }

    return max(maxi, sum);
}
