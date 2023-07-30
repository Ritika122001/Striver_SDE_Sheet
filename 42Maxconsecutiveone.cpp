#include<bits/stdc++.h>
int longestSubSeg(vector<int> &nums , int n, int k){
    // Write your code here.
       int i = 0 ; int j = 0 ; 
        int cnt0=0;
        int ans = INT_MIN;
        while(j<nums.size()){ //MOVE TILL LENGTH
           if(nums[j]==0){  
               cnt0++;
              
           }
             while(cnt0>k){ //IF CNT IS GREATER THN K THN HAVE TO MAINTAIN IT AS K SO IF NUMS[I]==0 THN DECREASE
                if(nums[i]==0){
                       cnt0--;
                 }
                   i++;
            }
       
          ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }

